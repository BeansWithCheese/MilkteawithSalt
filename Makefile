a : main.o 21300333.o 21800823.o
	gcc -o a.out main.o 21300333.o 21800823.o

main.o : main.c
	gcc -c -o main.o main.c

21300333.o : 21300333.c
	gcc -c -o 21300333.o 21300333.c

21800823.o : 21800823.c
	gcc -c -o 21800823.o 21800823.c

clean :
	rm *.o a
