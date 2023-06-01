#!/bin/bash

function koloruj {
	echo -e "\033[$1$2\033[0m"
}

# jako parametr trzeba podac kod koloru, np. 31m (czerwony)
koloruj $1 $2
