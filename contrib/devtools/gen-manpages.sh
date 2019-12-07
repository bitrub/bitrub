#!/usr/bin/env bash

export LC_ALL=C
TOPDIR=${TOPDIR:-$(git rev-parse --show-toplevel)}
BUILDDIR=${BUILDDIR:-$TOPDIR}

BINDIR=${BINDIR:-$BUILDDIR/src}
MANDIR=${MANDIR:-$TOPDIR/doc/man}

BITRUBD=${BITRUBD:-$BINDIR/bitrubd}
BITRUBCLI=${BITRUBCLI:-$BINDIR/bitrub-cli}
BITRUBTX=${BITRUBTX:-$BINDIR/bitrub-tx}
WALLET_TOOL=${WALLET_TOOL:-$BINDIR/bitrub-wallet}
BITRUBQT=${BITRUBQT:-$BINDIR/qt/bitrub-qt}

[ ! -x $BITRUBD ] && echo "$BITRUBD not found or not executable." && exit 1

# The autodetected version git tag can screw up manpage output a little bit
read -r -a BTRVER <<< "$($BITRUBCLI --version | head -n1 | awk -F'[ -]' '{ print $6, $7 }')"

# Create a footer file with copyright content.
# This gets autodetected fine for bitrubd if --version-string is not set,
# but has different outcomes for bitrub-qt and bitrub-cli.
echo "[COPYRIGHT]" > footer.h2m
$BITRUBD --version | sed -n '1!p' >> footer.h2m

for cmd in $BITRUBD $BITRUBCLI $BITRUBTX $WALLET_TOOL $BITRUBQT; do
  cmdname="${cmd##*/}"
  help2man -N --version-string=${BTRVER[0]} --include=footer.h2m -o ${MANDIR}/${cmdname}.1 ${cmd}
  sed -i "s/\\\-${BTRVER[1]}//g" ${MANDIR}/${cmdname}.1
done

rm -f footer.h2m
