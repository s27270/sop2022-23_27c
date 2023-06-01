#!/bin/bash

# wolalabym zrobic if bez else, czyli sprawdzic czy niekonczy sie na
# .sh ale nie wiem jak. != ani !=~nie dziala :(
if [[ $0 =~ .*".sh" ]]
then
	echo
else
	mv $0 $0".sh"
fi


# druga metoda
#if [[ ${0:-3:3} =~ ".sh" ]]
#then
#	echo
#else
#	mv $0 $0".sh"
#fi
