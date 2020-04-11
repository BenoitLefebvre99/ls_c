main : exo.o estParametre.o examiner.o list.o listl.o traiterdate.o
	gcc -o main exo.o estParametre.o examiner.o list.o listl.o traiterdate.o

exo.o : exo.c
	gcc -Wall -Werror -W -c exo.c
	
estParametre.o : estParametre.c
	gcc -Wall -Werror -W -c estParametre.c

examiner.o : examiner.c
	gcc -Wall -Werror -W -c examiner.c

list.o : list.c
	gcc -Wall -Werror -W -c list.c

listl.o : listl.c
	gcc -Wall -Werror -W -c listl.c

traiterdate.o : traiterdate.c
	gcc -Wall -Werror -W -c traiterdate.c