# chemistry-library
A simple to use c++ library focalized at chemisty exercises

# Current features (the library is currently in early development):
- Molar mass calculator by inserting chemical formula test

# How to compile your own program:
If you want to include all the features:
```
g++ example.cpp chemlib/chemlib.cpp -o myprogram
```
If you want only a specified feature (it is explained better in `example.cpp`):
```
g++ example.cpp chemlib/include/molarmass.cpp -o myprogram
```
