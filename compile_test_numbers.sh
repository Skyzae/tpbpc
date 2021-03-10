#!/bin/bash

    NORMAL="\033[0;39m"
    ROUGE="\033[1;31m"
    VERT="\033[1;32m"
    ORANGE="\033[1;33m"

	gcc -c numbers-test.c
		echo -e "$ROUGE Compilation de numbers_test.c. $NORMAL"; sleep 2
	gcc -c put_numbers.c
		echo -e "$ORANGE Compilation de put_numbers.c. $NORMAL"; sleep 2
	gcc numbers-test.o put_numbers.o -o numbers-test
		echo -e "$VERT Compilation des '.o' en numbers_test.exe $NORMAL"; sleep 2
	echo -e "$NORMAL Fin. $NORMAL"; sleep 2
exit 0
