#include <stdio.h>

/*
*Este programa permite tran¡bajar con un arreglor
* a través de un apuntador
*/

int main(){
    int array[10];
    int *apuntador;
    
    apuntador=&array[5]; //asignando la direccion 
    // del quinto elemento del array al apuntador

    for(int i=-5; i<4; i++){
        printf ("Ingresa el valor del elemento %d: ", i+5);//le sumamos
        //  4 para que empieze a ingresar datos en el elemento 0
        scanf("%d", (apuntador+i));
    }
    printf("[ ");
    for(int i=-5; i<4; i++){
        
        printf("%d ,", *(apuntador+i));
        //cuando anteponemos un asterisco a un apuntador 
        // obtenemos el valor contenido en la direccion 
        // de memoria que guarda el apuntador
    }
    printf("]\n");

    return 0;
}