#!/bin/bash

if [ -e config.cfg ]
then
	chmod +x config.cfg
	./config.cfg
elif [ $# -ge 1 ]
then
	chmod +x $1
	./$1
else
	echo "Error"
fi
