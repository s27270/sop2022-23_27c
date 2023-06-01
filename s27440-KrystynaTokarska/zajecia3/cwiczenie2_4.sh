#!/bin/bash

readarray -t tab < <(ls)

for i in ${tab[@]}
do
	if [[ ${i:-2:2} =~ ".c" ]]
	then
		cc $i -o ${i:0:${#i}-2}
	fi
done
