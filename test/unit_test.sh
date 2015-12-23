#!/bin/bash

g++ -isystem gtest-1.7.0/include/ -pthread  src/test.cpp src/main.cpp ../src/kuku.cpp gtest-1.7.0/libtest.a -o unittest
./unittest
rm unittest


