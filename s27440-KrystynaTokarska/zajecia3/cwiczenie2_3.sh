#!/bin/bash

readarray -t tab < <(ls)
for i in ${tab[@]}
do
	echo "Patrzcie Panstwo, oto plik:" $i"."
done
