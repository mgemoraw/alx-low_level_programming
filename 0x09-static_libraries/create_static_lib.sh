#!/bin/bash
gcc -o ./*.c
ar -rcs liball.a ./*.o
ranlib liball.a
