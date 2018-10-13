#include <stdio.h>
const char *msg = "Hello Earthlings!";

int main ()
{
   printf ("Message from Mars: %s\n", msg);

   return 0;
}
int main ()
{
   printf ("Message from Mars: %s\n", msg);

   return 0;
}/* PROGRAMA: copiar.c
FORMA DE USO:
             ./copiar origen destino
VALOR DE RETORNO:
             0: si se ejecuta satisfactoriamente.
             -1: si se da alguna condición de error
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>              /* open() */
#include <sys/stat.h>              /* open() */
#include <fcntl.h>                /* open() */
#include <unistd.h>              /* read() y write() */

char buffer[BUFSIZ]; /* Buffer para manipular datos. BUFSIZ esta definido en alguno de los archivos de encabezados */

int main(int argc, char *argv[])
{
  int fd_origen;
  int fd_destino;
  int nbytes;

  /*Analisis de los argumentos de la linea de comandos*/
  if (argc != 3) {
    fprintf(stderr,"Forma de uso: %s origen destino\n", argv[0]);
    exit(-1);
  }

  /*Apertura del archivo en modo solo lectura (O_RDONLY). */
  if ((fd_origen=open(argv[1],O_RDONLY))== -1) {
    perror(argv[1]);
    exit(-1);
  }

  /* Apertura o creacion de archivos en modo solo escritura. */
  /* Abrir en modo solo escritura (O_WRONLY). */
  /* Si el archivo existe entonces truncar a cero bytes (O_TRUNC).*/
  /* El archivo es creado en caso de que no exista (O_CREAT). */
  /* El modo que se crea es 0666. */
  if ((fd_destino=open(argv[2],O_WRONLY|O_TRUNC|O_CREAT,0666))== -1) {
    perror(argv[2]);
    exit(-1);
  }

  /* copiamos el archivo origen en el archivo destino. */
  while ((nbytes=read(fd_origen, buffer, sizeof buffer))> 0)
     write(fd_destino, buffer, nbytes);

  close(fd_origen);
  close(fd_destino);
}
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>              /* open() */
#include <sys/stat.h>              /* open() */
#include <fcntl.h>               /* open() */
#include <unistd.h>               /* read() y write() , close() */

char buffer[BUFSIZ]; /*Buffer para manipular datos. */

int main(int argc, char *argv[])
{
   int fd_origen; int fd_destino; int nbytes;
   int i;

   /*Analisis de los argumentos de la linea de comandos*/
   if (argc <= 3) {
     fprintf(stderr,"Forma de uso: %s <archivo1> <archivo2> <salida> \n", argv[0]);
     exit(-1);
   }

   /* Apertura o creacion de archivos en modo solo escritura. */
   /* Abrir en modo solo Lectura (O_WRONLY). */
   /* Si el archivo existe entonces truncar a cero bytes (O_TRUNC)*/
   /* El archivo es creado en caso de que no exista (O_CREAT). */
   /* El modo que se crea es 0666. */
   if ((fd_destino= open(argv[argc-1], O_WRONLY|O_TRUNC|O_CREAT, 0666))==-1) {
      fprintf(stderr,"Error al crear el archivo de salida \n");
     perror(argv[3]);
     exit(-1);
   }

   for(i = 1;i<3;i++)  {

        /*Apertura del archivo 1 en modo solo lectura (O_RDONLY). */
        if ((fd_origen=open(argv[i],O_RDONLY))== -1) {
            fprintf(stderr,"Error al abrir el archivo de entrada: %s ¥n", argv[i]);
            perror(argv[1]);
            exit(-1);
        }

        /* copiamos el archivo 1 en el archivo destino. */
        while ((nbytes=read(fd_origen, buffer, sizeof buffer))> 0)
            write(fd_destino, buffer, nbytes);
     close(fd_origen);
   }

   close(fd_destino);
}#include <stdio.h>
#include <stdlib.h>
#include <sys/____.h>              /* open() */
#include <sys/____.h>              /* open() */
#include <____.h>               /* open() */
#include <____.h>               /* read() y write() , close() */

char buffer[BUFSIZ]; /*Buffer para manipular datos. */

int main(int argc, char *argv[])
{
   int fd_origen; int fd_destino; int nbytes;
   int i;

   /*Analisis de los argumentos de la linea de comandos*/
   if (argc <= ____) {
     fprintf(stderr,"Forma de uso: %s ______ \n", argv[____]);
     exit(____);
   }

   /* Apertura o creacion de archivos en modo solo escritura. */
   /* Abrir en modo solo Lectura (O_WRONLY). */
   /* Si el archivo existe entonces truncar a cero bytes (O_TRUNC)*/
   /* El archivo es creado en caso de que no exista (O_CREAT). */
   /* El modo que se crea es 0666. */
   if ((fd_destino= ____(argv[____-1], O_WRONLY|O_TRUNC|O_CREAT, 0666))==-1) {
      fprintf(stderr,"Error al crear el archivo de salida \n");
     perror(argv[3]);
     exit(____);
   }

   for(____;i<3;i++)  {

   /*Apertura del archivo 1 en modo solo lectura (O_RDONLY). */
   if ((fd_origen=open(____,O_RDONLY))== -1) {
      fprintf(stderr,"Error al abrir el archivo de entrada: %s ¥n", ____);
      perror(argv[1]);
      exit(____);
   }

   /* copiamos el archivo 1 en el archivo destino. */
   while ((nbytes=read(____, buffer, sizeof buffer))> 0)
     write(____, buffer, nbytes);
     close(____);
   }

   close(____);
}
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>              /* open() */
#include <sys/stat.h>              /* open() */
#include <fcntl.h>               /* open() */
#include <unistd.h>               /* read() y write() , close() */

char buffer[BUFSIZ]; /*Buffer para manipular datos. */

int main(int argc, char *argv[])
{
   int fd_origen; int fd_destino; int nbytes;
   int i;

   /*Analisis de los argumentos de la linea de comandos*/
   if (argc <= 2) {
     fprintf(stderr,"Forma de uso: %s <extension> <salida> \n", argv[0]);
     exit(-1);
   }

   /* Apertura o creacion de archivos en modo solo escritura. */
   /* Abrir en modo solo Lectura (O_WRONLY). */
   /* Si el archivo existe entonces truncar a cero bytes (O_TRUNC)*/
   /* El archivo es creado en caso de que no exista (O_CREAT). */
   /* El modo que se crea es 0666. */
   if ((fd_destino= open(argv[argc-1], O_WRONLY|O_TRUNC|O_CREAT, 0666))==-1) {
      fprintf(stderr,"Error al crear el archivo de salida \n");
     perror(argv[argc-1]);
     exit(-1);
   }

   for(i = 1;i< argc-1;i++)  {

        /*Apertura del archivo i en modo solo lectura (O_RDONLY). */
        if ((fd_origen=open(argv[i],O_RDONLY))== -1) {
            fprintf(stderr,"Error al abrir el archivo de entrada: %s ¥n", argv[i]);
            perror(argv[1]);
            exit(-1);
        }

        /* copiamos el archivo i en el archivo destino. */
        while ((nbytes=read(fd_origen, buffer, sizeof buffer))> 0)
            write(fd_destino, buffer, nbytes);
     close(fd_origen);
   }

   close(fd_destino);
}#include <stdio.h>
const char *msg = "Hello Earthlings!";
#include <stdio.h>
const char *msg = "Hello Earthlings!";
