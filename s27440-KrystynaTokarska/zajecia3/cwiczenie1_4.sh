#!/bin/bash

# rozwiazanie jeśli przyjmujemy że folder też jest plikiem
#files=$(ls | wc -l)

# a tu jeśli uznajemy, że folder nie ejst plikiem
files=$(ls -p | grep -vc /)

if [ $files -eq 5 ]
then
	echo "Liczba plikow w tym folderze wynosi 5"
fi
