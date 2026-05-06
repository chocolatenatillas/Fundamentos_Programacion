#include <stdio.h>
#define RED "\033[31m"
int main(int argc, char **argv){
    FILE *archivo;
    if (argc<2){
        printf(RED"Error Fatal: hacen falta argumentos\n");
        return 1;
    }
    archivo=fopen (argv[1], "r");
    if (archivo!=NULL){
        printf("El archivo se abrió correctamente\n");
        int res=fclose(archivo);
        printf("fclose = %d\n", res);
    }else {
        printf(RED"Error fatal: %s no es un archivo o directorio\n", argv[1]);
    }
    return 0;
}
//argv[0] es el nombre del programa