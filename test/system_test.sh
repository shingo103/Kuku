#!/bin/bash

mytest()
{
    echo "try   : $1"
    output=`$1 2>&1`
    target=$2
    echo -n "result: "
    if [ "$output" = "$target" ] ; then
	echo passed
	return 0
    else
	echo failed
	return 1
    fi
    echo
}

target=`echo -e " 1  2  3  4 \n 2  4  6  8 \n 3  6  9 12 "`
mytest "../build/kuku 3 4" "$target"
result=$?

target=`echo -e " 2  3  4  5 \n 3  4  5  6 \n 4  5  6  7 "`
mytest "../build/kuku 3 4 -a" "$target"
result=`[ $? -eq 0 ]  && [ $result -eq 0 ] ; echo $?`

target="Error: Arguments must be integers. '3.1' was given."
mytest "../build/kuku 3.1 4" "$target"
result=`[ $? -eq 0 ]  && [ $result -eq 0 ] ; echo $?`

target="Error: Arguments must be integers. 'abc' was given."
mytest "../build/kuku abc 4" "$target"
result=`[ $? -eq 0 ]  && [ $result -eq 0 ] ; echo $?`

echo -ne "\nwhole : "
if [ $result -eq 0 ] ; then
    echo "passed"
    exit 0
else
    echo "failed"
    exit 1
fi
