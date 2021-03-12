# Hash Code Template

A basic file structure to jump start the project

## Compile

You can compile the source code either by manually running the GCC compiler from your terminal using `g++ src/*.cpp fmt/*.cc -Ic:/headers` or you could use GNU Make like and just run `make` from your terminal.

### Note:

If you're on Windows make might not be installed or it could have a different name.
If you installed the compiler through Mingw-w64 you can use make typing `mingw32-make`, or you can also install it from your terminal using `choco install make`

## Contents

-  **src**
   .cpp files
-  **header**
   .h files
-  **fmt**
   Format library by Victor Zverovich and Jonathan Müller. [Check it out.](https://github.com/fmtlib/fmt)

-  **main.cpp**  
   Containers creation and general flow

-  **io.h**  
   Input/Output operations

-  **functions.h**  
   Contains all the fun stuff... Algorithms for solving the problem given.

-  **utility.h**
   Mainly title and data printing

-  **Input**  
   You should put all input files in here

-  **Output**  
   Output files will end up here
