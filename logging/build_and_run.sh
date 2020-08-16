#!/usr/bin/env bash
# conan search [x] --remote=conan-center
# conan install .
clang -lstdc++ -Wall $(cat conanbuildinfo.args) main.cpp -o main.o
./main.o
