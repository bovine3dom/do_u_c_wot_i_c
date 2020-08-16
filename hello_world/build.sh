#!/usr/bin/env bash
clang -lstdc++ -Wall $1 -o ${1%.cpp}
