#!/usr/bin/env bash
clang -lstdc++ -lm -Wall $1 -o ${1%.cpp} -pthread
