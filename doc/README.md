BitRub Core
=============

Setup
---------------------
BitRub Core is the original BitRub client and it builds the backbone of the network. It downloads and, by default, stores the entire history of BitRub transactions, which requires a few hundred gigabytes of disk space. Depending on the speed of your computer and network connection, the synchronization process can take anywhere from a few hours to a day or more.

To download BitRub Core, visit [bitrubcore.org](https://bitrubcore.org/en/download/).

Running
---------------------
The following are some helpful notes on how to run BitRub Core on your native platform.

### Unix

Unpack the files into a directory and run:

- `bin/bitrub-qt` (GUI) or
- `bin/bitrubd` (headless)

### Windows

Unpack the files into a directory, and then run bitrub-qt.exe.

### macOS

Drag BitRub Core to your applications folder, and then run BitRub Core.

### Need Help?

* See the documentation at the [BitRub Wiki](https://en.bitrub.it/wiki/Main_Page)
for help and more information.
* Ask for help on [#bitrub](http://webchat.freenode.net?channels=bitrub) on Freenode. If you don't have an IRC client, use [webchat here](http://webchat.freenode.net?channels=bitrub).
* Ask for help on the [BitRubTalk](https://bitrubtalk.org/) forums, in the [Technical Support board](https://bitrubtalk.org/index.php?board=4.0).

Building
---------------------
The following are developer notes on how to build BitRub Core on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.

- [Dependencies](dependencies.md)
- [macOS Build Notes](build-osx.md)
- [Unix Build Notes](build-unix.md)
- [Windows Build Notes](build-windows.md)
- [FreeBSD Build Notes](build-freebsd.md)
- [OpenBSD Build Notes](build-openbsd.md)
- [NetBSD Build Notes](build-netbsd.md)
- [Gitian Building Guide (External Link)](https://github.com/bitrub-core/docs/blob/master/gitian-building.md)

Development
---------------------
The BitRub repo's [root README](/README.md) contains relevant information on the development process and automated testing.

- [Developer Notes](developer-notes.md)
- [Productivity Notes](productivity.md)
- [Release Notes](release-notes.md)
- [Release Process](release-process.md)
- [Source Code Documentation (External Link)](https://doxygen.bitrubcore.org/)
- [Translation Process](translation_process.md)
- [Translation Strings Policy](translation_strings_policy.md)
- [JSON-RPC Interface](JSON-RPC-interface.md)
- [Unauthenticated REST Interface](REST-interface.md)
- [Shared Libraries](shared-libraries.md)
- [BIPS](bips.md)
- [Dnsseed Policy](dnsseed-policy.md)
- [Benchmarking](benchmarking.md)

### Resources
* Discuss on the [BitRubTalk](https://bitrubtalk.org/) forums, in the [Development & Technical Discussion board](https://bitrubtalk.org/index.php?board=6.0).
* Discuss project-specific development on #bitrub-core-dev on Freenode. If you don't have an IRC client, use [webchat here](http://webchat.freenode.net/?channels=bitrub-core-dev).
* Discuss general BitRub development on #bitrub-dev on Freenode. If you don't have an IRC client, use [webchat here](http://webchat.freenode.net/?channels=bitrub-dev).

### Miscellaneous
- [Assets Attribution](assets-attribution.md)
- [bitrub.conf Configuration File](bitrub-conf.md)
- [Files](files.md)
- [Fuzz-testing](fuzzing.md)
- [Reduce Memory](reduce-memory.md)
- [Reduce Traffic](reduce-traffic.md)
- [Tor Support](tor.md)
- [Init Scripts (systemd/upstart/openrc)](init.md)
- [ZMQ](zmq.md)
- [PSBT support](psbt.md)

License
---------------------
Distributed under the [MIT software license](/COPYING).
