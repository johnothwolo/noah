# Noah

Noah is a Darwin subsystem for Linux, or "Bash on Ubuntu on Mac OS X". Noah is implemented as a hypervisor that traps linux system calls and translates them into Darwin's system calls. Noah also has an interpreter of ELF files so that binary executables of Linux run directly and flawlessly without any modifications.

<img src="https://github.com/linux-noah/noah/blob/master/images/screenshot.png" width="600">

## Quick Start

Noah is installed via homebrew or macports. On the first run, noah automatically downloads and installs a comprehensive linux environment in your home directory (by default, ubuntu 16.04 is installed in `~/.noah/tree`).
macOS Sierra or higher is required.

Thanks to a brilliant [article](https://worthdoingbadly.com/casesensitive-iossim/) by @zhowei, noah can run with a case senstitive system policy. However in order to achieve this, noah has to be run as setuid.

### Homebrew

```console
$ brew install linux-noah/noah/noah
$ noah
```
### Macports
First, install a local portfile (see the [macports guide](https://guide.macports.org/chunked/development.local-repositories.html)).

```console
$ mkdir -p ${LOCAL_MACPORTS_ROOT}/emulators/noah
$ cp Portfile ${LOCAL_MACPORTS_ROOT}/emulators/noah
$ (cd ${LOCAL_MACPORTS_ROOT}; portindex)
$ sudo port install noah
$ noah
```

## Hacking

See [HACKING.md](HACKING.md).

## LICENSE

Dual MITL/GPL, for all files without explicit notaiton.
