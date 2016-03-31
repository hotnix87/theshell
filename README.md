# theshell
Desktop Shell written in Qt

## Dependencies
- qmake
- kwin
- wmctrl

## Build
qmake
make

## Install
Copy theshell and init_theshell over to your binaries folder (usually /usr/bin)
Copy theshell.desktop to your xsessions folder (usually /usr/share/xsessions)

## Starting
- Use init_theshell in an x session to start theShell
- Use a window manager and use "theShell" as the session 

## Packages
theShell is available in Arch Linux on the AUR under the name "theshell"

## Warnings
- theShell is only tested on Arch Linux. Your milage may vary on other distributions.
- theShell is beta software. It should be stable enough for daily use though.
- theShell doesn't have all the features that a desktop shell should implement... yet. Missing features include
  - Network Connection Manager (it can only display the currently connected network)
  - System Tray
  - Hotkey support
