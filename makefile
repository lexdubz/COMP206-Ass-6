bank: main.o ssv.o linked.o 
	gcc -o bank main.o ssv.o linked.o
main.o: main.c defs.h
	gcc -c main.c
ssv.o: ssv.c defs.h
	gcc -c ssv.c
linked.o: linked.c Account.h defs.h
	gcc -c linked.c

