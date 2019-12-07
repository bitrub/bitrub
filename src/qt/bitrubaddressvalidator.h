// Copyright (c) 2011-2014 The BitRub Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITRUB_QT_BITRUBADDRESSVALIDATOR_H
#define BITRUB_QT_BITRUBADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class BitRubAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit BitRubAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** BitRub address widget validator, checks for a valid bitrub address.
 */
class BitRubAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit BitRubAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // BITRUB_QT_BITRUBADDRESSVALIDATOR_H
