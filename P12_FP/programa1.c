#include <stdio.h>
#define RED "\033[31m"
int main(){
    FILE *archivo;
    archivo=fopen ("datos.txt", "r");
    if (archivo!=NULL){
        printf("El archivo se abrió correctamente\n");
        int res=fclose(archivo);
        printf("fclose = %d\n", res);
    }else {
        printf(RED"Error fatal: datos.txt no es un archivo o directorio\n");
    }
    return 0;

}