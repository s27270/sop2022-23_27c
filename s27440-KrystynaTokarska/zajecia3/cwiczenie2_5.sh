#!/bin/bash

pliki=($@)

for i in ${pliki[@]}
do
	cat "$i"
done

for ((i=${#pliki[@]}-1; i>=0; i--))
do
	tac "${pliki[i]}"
done
