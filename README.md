# chemistry-library
A simple to use c++ library focalized at chemisty exercises

# Current features (the library is currently in early development):
- Molar mass calculator



# How to compile your own program (you have to write your program into `main.cpp`):

Prerequisites: have g++ installed and in your system path

- Open a cmd in the folder
- Create your `main.cpp` output: ```g++ -c main.cpp -o main.o```
- Create `molarmass.cpp` output: `g++ -c molarmass.cpp -o molarmass.o`
- Compile your program and include all outputs in the program (in the command you can change `myprogram` with any other name that you want to give to your `.exe` program): `g++ main.o molarmass.o -o myprogram`

