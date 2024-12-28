
# How we got here

## Installation

### Compiler

Download and install [MSYS2](https://www.msys2.org/).
Open MSYS2, and run command to update the package database and core packages by running: ```pacman -Syu```
Install GCC with: ```pacman -S mingw-w64-x86_64-toolchain```
This installs the full toolchain, including the gcc, g++, gdb (debugger), and make utilities.
Finally, add install directory "C:\msys64\mingw64\bin" to PATH environment variable.

THIS WORKS:
g++ -o olcExampleProgram.exe olcExampleProgram.cpp -luser32 -lgdi32 -lopengl32 -lgdiplus -lShlwapi -ldwmapi -lstdc++fs -static -std=c++17

### CMake

Download and install [CMake](https://cmake.org/download/).

## Project setup, file structure

... file tree ...

... what .bat files do and how (call cmake to create makefile, then call make) ...

