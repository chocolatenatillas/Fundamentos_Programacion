#include <stdio.h>

int main(){
    int numero, positivo;

    positivo=0;

    
    printf ("Ingrese los numeros que desee (termina con 0)\n");


    while (1) { 
        scanf("%d", &numero);
       

        if (numero>0){
            positivo++;
        }


        if (numero == 0) {
            break; 
            printf("Se han guardado los numeros\n");
        }


    }
    printf ("Escribiste %d numeros positivos\n", positivo);
    return 0;
}