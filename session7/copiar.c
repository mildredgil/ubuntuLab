/* PROGRAMA: copiar.c
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
