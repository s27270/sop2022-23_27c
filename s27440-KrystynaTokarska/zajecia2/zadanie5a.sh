#!/bin/bash

name=$1

if [ ${name:${#name}-1} = "a" ]
then
	echo "$name ma kota, a kot ma ${name:0:${#name}-1}ę"
else
	echo "$name ma kota, a kot ma ${name}a"
fi

# nie wiem czy jest to mozliwe w czystym bashu, bo nie wiem
# co to jest czysty bash
