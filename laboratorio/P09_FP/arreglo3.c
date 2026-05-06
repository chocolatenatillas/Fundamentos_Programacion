#include <stdio.h>

/*
*Este programa permite tran¡bajar con un arreglor
* a través de un apuntador
*/

int main(){
    int array[10];
    int *apuntador;
    
    apuntador=array; //asignando la direccion del primer elemento del array al apuntador
    //apuntador= &array[0]

    for(int i=0; i<10; i++){
        printf ("Ingresa el valor del elemento %d: ", i);
        scanf("%d", (apuntador+i));
    }
    printf("[ ");
    for(int i=0; i<10; i++){
        //printf ("Ingresa el valor del elemento %d: ", i);
        //scanf("%d", &array[i]);
        //scanf("%d", (apuntador+i));
        printf("%d (%p) ,", *(apuntador+i), (apuntador+i));
        //cuando anteponemos un asterisco a un apuntador obtenemos 
        // el valor contenido en la direccion de memoria que guarda el apuntador
    }
    printf("]\n");

    return 0;
}