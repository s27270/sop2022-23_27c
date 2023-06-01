#!/bin/bash

echo $PATH
echo $RANDOM
echo $PWD
echo $PS1
echo $USER
echo $HOSTNAME
echo $OSTYPE

# PATH - zwraca lokalizacje plikow wykonywalnych.
# Mozna sprawdzic np. gdzie zapisany jest ls poleceniem
# which ls i dostaniemy /usr/bin/ls
# zmienna path mozna zmienic. Moglabym napisac inny skrypt
# na wykonywanie polecenie ls i odpowiednio zmienic zmienna
# path - wtedy po wpisaniu ls wykonywaloby sie cos innego
# (to co napisalabym w skrypcie)
# zmienna PATH zwraca u mnie
# /usr/local/bin:/usr/bin:/bin:/usr/local/games:/usr/games

# RANDOM - zwraca liczbę losowa (tak naprawde pseudolosowa
# z przedzialu 0 do 32768

# PWD zwraca moja obecna lokalizacje na komputerze
# (~/sop/sop2022-23_27c/s27440-KrystynaTokarska/zajecia2)

# PS1 u mnie nie wiedziec czemu nie zwraca nic, ale wyczytalam,
# ze okresla to, co widzimy przed miejscem w ktorym wpisujemy
# polecenie w terminalu. Na szuflandii jest to stworzone z 
# konkretnych zmiennych w postaci: USER@HOSTNAME:PWD
# mozna to zmienic przez polecenie eksport PS1="dowlne rzeczy"

# USER zwraca nazwe uzytkownika (korzystam z szuflandii wiec 
#jest do s27440, ale na domowym komputerze byloby to kryst)

# hostname zwraca nazwe hosta - w tym przypadku jest to 
# szuflandia22 (a na domowym kompie bylaby nazwa mojego
# komputera czyli Lisa.

# OSTYPE zwraca typ systemu operacyjnego (u mnie linux-gnu)
