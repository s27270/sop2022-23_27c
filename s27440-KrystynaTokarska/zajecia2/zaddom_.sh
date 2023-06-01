#!/bin/bash

sed -e "s/Krysia/$(echo -e "\033[31m&\033[0m")/g" "$1"
