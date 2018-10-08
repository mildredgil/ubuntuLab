/* archivo 'numerosUno.c' almacenado en el directorio sources. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../misIncludes/potencias.h" 
 
int main(int argc, char *argv[])
{  
    FILE* fd_out;/* variable que apunta al descriptor de archivo */
   
    /* abre el archivo en modo escritura */
    fd_out = fopen ( "salidaUno.txt", "w" );

    if (argc == 1) {
        printf("Error, debes teclear al menos un argumento\n");
        return -1;
    } else {
        float a,b,c,d;
    
        a= atof(argv[1]);
        b= cubo(a);
        c= cuarta(a);
        d= quintilla(a);
        
        fprintf(stdout," cubo: %f\n cuarta: %f \n quintilla: %f \n", b, c, d);            
        fprintf (fd_out," cubo: %f\n cuarta: %f \n quintilla: %f \n", b, c, d);
        fclose (fd_out);    /* cierra el archivo */
    }
    
    return 0;
}
