#!/bin/bash

# jest ok dla tekstu podanego w pojedynczym cudzyslowiu
# tak wystarczy?

echo ${1:0:1}
echo ${1:${#1}-1}
text="SOP to jest przykładowe zdanie SOP! dla testow"
c="\033[32m"
b="\033[0m"
echo -e "${text//SOP/${c}SOP${b}}"
