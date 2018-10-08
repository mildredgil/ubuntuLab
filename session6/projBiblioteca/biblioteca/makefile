modules= potencias.o

all:libreria

potencias.o: *.c
	gcc -c -Wall *.c

libreria: $(modules)
	ar -cvq libPower.a *.o
clean:
	rm   *.o
	rm   libPower*