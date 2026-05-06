#include <stdio.h>
#define RED "\033[31m"
int main(int argc, char **argv){
    FILE *archivo;
    char linea[]="chipi chipi chapa chapa dubi dubi daba daba magic poni dubi dubi dom dom dom\nNVH\n";
    if (argc<2){
        printf(RED"Error Fatal: hacen falta argumentos\n");
        return 1;
    }
    archivo=fopen (argv[1], "a");
    if (archivo!=NULL){
        printf("El archivo se abrió correctamente\n");
        fputs(linea, archivo);
        int res=fclose(archivo);
        printf("fclose = %d\n", res);
    }else {
        printf(RED"Error fatal: %s no es un archivo o directorio\n", argv[1]);
    }
    return 0;

}