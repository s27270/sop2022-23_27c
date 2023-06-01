#!/bin/bash

# W poleceniu jest, ze ma sprawdzac czy to imie, ale pierwsze wyrazenie
# regularne ktore mielismy przygotowac ma sprawdzac tylko czy jest poprawnie
# w jezyku polskim. Czy nie o to chodzilo przy pierwszym sprawdzeniu?
# sprawdzanie czy jest to konkretnie imie jest chyba bardziej skomplikowane

# czy potrzeba tu wstawiac znaki poczatku i konca linii? Albo moze jest
# jakas zasada okreslajaca to za estetyczne czy cos takiego?

if [[ $1 =~ [A-ZĄĆĘŁŚŃÓŹŻ][a-ząćęłśńóźż]+ ]]; then
	echo "poprawnie po polsku"
elif [[ $1 =~ [0-9]{2,2}-[0-9]{3,3} ]]; then
	echo "kod pocztowy"
elif [[ $1 =~ ^[^@]+@[^@]+\.[^@]+$ ]]; then
	echo "email"
else
	echo "to cos inego niz mail, kod pocztowy czy slowo po polsku"
fi

# cz.2
