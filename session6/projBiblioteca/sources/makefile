DIR=../biblioteca
CC=gcc

numerosDos: numerosDos.o
	$(CC) -o ../bin/numerosDos  numerosDos.o   -L$(DIR)  -lPower

numerosDos.o: numerosDos.c

clean:
	rm  *.o