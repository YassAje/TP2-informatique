exo1: exo1.c
	gcc exo1.c -ansi -Wall -o exo1
exo2: exo2.c messages.h
	gcc exo2.c -ansi -Wall -o -c exo2
exo3: exo3.o ext_mngt.o
	gcc exo3.o ext_mngt.o -ansi -Wall -o exo3
exo3.o: exo3.c ext_mngt.h
	gcc -c exo3.c
ext_mngt.o: ext_mngt.c ext_mngt.h
	gcc -c ext_mngt.c
exo4: exo4.c
	gcc exo4.c -ansi -Wall -o exo4
exo6: exo6.c
	gcc exo6.c -ansi -Wall -o exo6
test: test.o ext_mngt.o
	gcc test.o ext_mngt.o -ansi -Wall -o test
test.o: test.c ext_mngt.h
	gcc -c test.c

