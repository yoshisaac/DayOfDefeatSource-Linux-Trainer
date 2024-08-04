# What is this?
This is a program intended to automate tasks such as movement, and display information to us that wasn't originally intended to be shown. In a nutshell, this is a video game hack/cheat.  
It was forked from my Counter Strike: Source cheat, and will hopefully have feature parody while both update.  

# How does it work?
It externally (as a seperate program from the video game) reads and writes memory using system calls that the Linux kernel graciously gives us. Those system calls include functions like `processes_vm_readv()` and `process_vm_writev()`. 
  
To display a window and draw information inside of it, the program uses the X11 protocol. If you are using Wayland, then there is a chance Xwayland will not handle it correctly. There may also be other issues your window manager or desktop environment can cause, such as overriding placement of windows, or preventing programs from having transparent backgrounds.

# Does my distro or DE work with this?
Most likely. Any problems you will have are primarily going to be the desktop environment's fault, or your distro will not package the required dependencies. Here is a list of desktops and distributions that are known to work.  
  
Distributions:  
- Arch Linux  
- Linux Mint  
  
Desktops:  
- Cinnamon (X11 only)  
- KDE Plasma (Wayland only)  
- Gnome (X11, Wayland untested)  
- Xfce4 (X11, does not support Wayland yet)  
- Dwm (X11, does not support Wayland)  

# How to compile
  
### Installing dependencies
Install the necessary packages.  
  
Debian/Ubuntu/LinuxMint:

```console
$ sudo apt install mesa-common-dev libx11-dev libxfixes-dev libxcomposite-dev gcc g++ make libgtk-3-dev:i386
```
ArchLinux:  

```console
$ sudo pacman -S base-devel xorg-fonts-misc lib32-gtk3
```

If these are found to be incorrect, then contact me.  
  
### Compiling
Go to the root directory of the project in your terminal (where main.cpp is located), and run:  

```console
$ make
...
```

# How to use
After compilation, there will be a program created in the root directory of the project called `cs-source-hack`.

To run the software, go to the root directory of the project and type `sudo ./cs-source-hack` in your terminal. What this does is it runs the software as `root`, which is required for reading and writing memory on an external level.  

# Features
- Player ESP  
  * Box  
  * Skeleton
  * Name  
  * Health  
- Aimbot (Hold the X key)  

![Screenshot of ESP](https://r2.e-z.host/bb3dfc85-7f7f-4dcb-8b0b-3a4af0aa57e4/7lrpr154rns0r6r6f5.png)
![Screenshot of menu](https://r2.e-z.host/bb3dfc85-7f7f-4dcb-8b0b-3a4af0aa57e4/6sotxvotu5oqyrw7jc.png)

# Is this finished?
No, it is very incomplete, and will change a lot over time. The program is inefficient, and will most likely change over time.

# TODO
Ordered by importance
- Better view matrix offset
