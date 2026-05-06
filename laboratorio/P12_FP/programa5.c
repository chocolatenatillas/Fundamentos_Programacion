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
        char cosa[30];
        float precio;
        while(feof(archivo)==0){
            fscanf(archivo, "%s\t%f" , cosa, &precio);
            //cuando se conoce el formato de la info dentro del archivo o tiene estructura muy especifica
            printf("%s\t%0.2f \n", cosa, precio);
            //la primera no lleva & por ser direccion de un arreglo
        }
        int res=fclose(archivo);
        printf("fclose = %d\n", res);
    }else {
        printf(RED"Error fatal: %s no es un archivo o directorio\n", argv[1]);
    }
    return 0;

}