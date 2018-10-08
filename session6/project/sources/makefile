CC=gcc
ARGS=-O
numerosUno:numerosUno.o ../objetos/cubo.o ../objetos/cuarta.o ../objetos/quintilla.o
	$(CC) -o ../bin/numerosUno numerosUno.o ../objetos/cubo.o ../objetos/cuarta.o ../objetos/quintilla.o

numerosUno.o: numerosUno.c
	$(CC) $(ARGS) -c numerosUno.c

clean:
	rm   *.o