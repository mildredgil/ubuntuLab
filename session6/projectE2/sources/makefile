CC= gcc   #/*string que se substituye mas adelante dondequiera que aparezca*/
ARGS=-O   #/*otro string. Indica: "optimiza el código" */

proj: proj.o   ../miIncludes/aritReal.h
	$(CC) -o ../bin/proj $(ARGS) proj.o #borrar <tab> y oprimir la tecla Tab
 
proj.o: proj.c
	$(CC)  $(ARGS)  -c  proj.c #borrar <tab> y oprimir la tecla Tab

clean:
	rm   *.o  #borrar <tab> y oprimir la tecla Tab