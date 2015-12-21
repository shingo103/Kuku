#Kuku

## What is Kuku?
Kuku is a C++ program that accepts one or two integers from a user and gerenates *kuku* table, which means multiplication table in Japanese.


## Installation
This program uses waf (https://waf.io/) for installation (`waf` is included in the top directory of this repositry and you do not need to install it by yourself).

Configure, compile and install using waf.

```sh
$ cd Kuku
$ ./waf configure
$ ./waf build
$ ./waf intstall
```

By default, compiled program will be installed to `/usr/local/`. You can change the install directory using `--prefix` option of configuration:

```sh
$ ./waf configure --prefix=/path/to/install
```

## Quickstart


## Developer
This program is developed by Shingo Tomioka at The Department of Computational Biology and Medical Sciences, Graduate School of Frontier Sciences, The University of Tokyo.


## Support
If you find any bugs, please report to s.tomioka.103 [at] gmail.com


## License
This program adopts the license of Creative Commons BY.