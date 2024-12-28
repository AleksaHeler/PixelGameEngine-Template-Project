
# How to set everything up

## Installation

### Compiler

Download and install [MSYS2](https://www.msys2.org/).  
Open MSYS2, and run command to update the package database and core packages by running: ```pacman -Syu```  
Install GCC with: ```pacman -S mingw-w64-x86_64-toolchain```  
This installs the full toolchain, including the gcc, g++, gdb (debugger), and make utilities.  
Finally, add install directory "C:\msys64\mingw64\bin" to PATH environment variable.  

### CMake

Download and install [CMake](https://cmake.org/download/).  

## Project setup, file structure

```
project/
├─ env/  
│  ├─ CMakeLists.txt - project define  
├─ include/  
│  ├─ olcPixelGameEngine.h - game engine library  
├─ src/  
│  ├─ main.cpp - entry point  
│  ├─ main.h  
├─ build.bat - runs CMake, and then MinGW make  
├─ run.bat  
├─ clean.bat  
```
