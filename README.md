[![Build Status](https://travis-ci.org/shingo103/Kuku.svg?branch=master)](https://travis-ci.org/shingo103/Kuku)

#Kuku

## What is Kuku?
Kuku is a C++ program that receives two integers from a user and outputs a *kuku* table, which means multiplication table in Japanese.


## Installation
This program uses waf (https://waf.io/) for installation (`waf` is included in  this repositry and you do not need to install it by yourself).

You can configure, build and install by following commands:

```sh
$ ./waf configure
$ ./waf build
$ ./waf intstall
```

By default, compiled program is installed to `/usr/local/`. You can change the install directory using `--prefix` option for configuration:

```sh
$ ./waf configure --prefix=/path/to/install/directory
```

## Quickstart
Giving two integers will generate a *kuku* table:

```sh
$ kuku 9 9
1  2  3  4  5  6  7  8  9 
2  4  6  8 10 12 14 16 18 
3  6  9 12 15 18 21 24 27 
4  8 12 16 20 24 28 32 36 
5 10 15 20 25 30 35 40 45 
6 12 18 24 30 36 42 48 54 
7 14 21 28 35 42 49 56 63 
8 16 24 32 40 48 56 64 72 
9 18 27 36 45 54 63 72 81 
```

Or you can generate an addition table instead of a multiplication table using `-a` or `--add` option:

```sh
$ kuku 9 9 -a
 2  3  4  5  6  7  8  9 10 
 3  4  5  6  7  8  9 10 11 
 4  5  6  7  8  9 10 11 12 
 5  6  7  8  9 10 11 12 13 
 6  7  8  9 10 11 12 13 14 
 7  8  9 10 11 12 13 14 15 
 8  9 10 11 12 13 14 15 16 
 9 10 11 12 13 14 15 16 17 
10 11 12 13 14 15 16 17 18 
```

You can see help message by `-h` or `--help` option.


## Support
This program is developed by Shingo Tomioka at The Department of Computational Biology and Medical Sciences, Graduate School of Frontier Sciences, The University of Tokyo.

If you find any bugs, please report to s.tomioka.103 [at] gmail.com


## License
The program is licensed under CC BY 3.0.