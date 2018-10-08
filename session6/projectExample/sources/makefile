CC=gcc
ARGS=-O
proj:proj.o ../objetos/aritReal.o
	$(CC) -o ../bin/proj proj.o ../objetos/aritReal.o

proj.o: proj.c
	$(CC) $(ARGS) -c proj.c

clean:
	rm   *.o