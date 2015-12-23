#!/bin/bash

../waf build

mytest()
{
    echo "try   : $1"
    output=`$1 2>&1`
    target=$2
    echo -n "result: "
    if [ "$output" = "$target" ] ; then
	echo passed
    else
	echo failed
    fi
    echo
}

target=`echo -e " 1  2  3  4 \n 2  4  6  8 \n 3  6  9 12 "`
mytest "../build/kuku 3 4" "$target"

target=`echo -e " 2  3  4  5 \n 3  4  5  6 \n 4  5  6  7 "`
mytest "../build/kuku 3 4 -a" "$target"

target="Error: Arguments must be integers. '3.1' was given."
mytest "../build/kuku 3.1 4" "$target"

target="Error: Arguments must be integers. 'abc' was given."
mytest "../build/kuku abc 4" "$target"

