#include <stdio.h>

int main(){
    int numero;
    int x = 0;
    
    printf("Escribe los numeros que deseas sumar (termina con 0)\n");
    
    do {
        scanf("%i", &numero);
       
        if (numero < 0) {
            continue;
        }

        if (numero > 100 || numero == 0) {
            break;
        }

        x = x + numero; 
        printf("Suma acumulada: %d\n", x);

    } while (1);
    
    printf("\nEL RESULTADO DE LA SUMA TOTAL ES: %d\n", x);

    return 0;
}