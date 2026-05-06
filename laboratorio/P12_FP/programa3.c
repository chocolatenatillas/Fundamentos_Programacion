#include <stdio.h>
#define RED "\033[31m"
int main(int argc, char **argv){
    FILE *archivo;
    char linea[256];
    if (argc<2){
        printf(RED"Error Fatal: hacen falta argumentos\n");
        return 1;
    }
    archivo=fopen (argv[1], "r");
    if (archivo!=NULL){
        printf("El archivo se abrió correctamente\n");
        while(feof(archivo)==0){
            //feof retorna 0 cuando no ha encontrado fin de archivo
            fgets(linea, 256, archivo);
            //primer argumento guarda lo que se esta leyendo
            //256 =numero maximo de caracteres a leer
            //en el lugar de archivo se escribe de donde se va a leer
            //se detiene cuando encuentre un salto de linea o cuando ha leido el maximo de caracteres
            printf("%s",linea);
        }
        int res=fclose(archivo);
        printf("fclose = %d\n", res);
    }else {
        printf(RED"Error fatal: %s no es un archivo o directorio\n", argv[1]);
    }
    return 0;

}