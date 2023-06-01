#!/bin/bash

# Ta funkcja nie dziala i za nic nie moge pojac dlaczego

# musimy wiedziec ktory wyraz ciagu fibonacciego chcemy policzyc.
# nie ma tego w poleceniu wiec przyjelam, ze bedzie to pierwszy
# parametr funkcji (skryptu)
# zakladam, ze pierwszy i drugi wyraz sa rowne 1. (Niektorzy jako pierwszy
# uznaja 0)

function Fibonacci {
	if [ $1 -lt 1 ]; then
		return 0
	elif [ $1 -eq 1 ]; then
		return 1
	else
		a=$(Fibonacci $(($1-1)) )
		b=$(Fibonacci $(($1-2)) )
		wynik=$((a+b))
		return $wynik
	fi
}

Fibonacci $1
echo $?
