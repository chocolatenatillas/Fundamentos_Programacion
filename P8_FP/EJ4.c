#include <stdio.h>

int main() {
    int numero, x = 0; 
    printf("Ingresa los numeros que deseas sumar (termina con 0)\n");

    do {
        
        scanf("%i", &numero);

        
        if (numero == 0) {
            break;
        }

    
        x = x + numero;
        printf("Tu resultado actual es: %i\n", x);

    } while (1); 

    printf("\nLa suma total es: %i\n", x);

    return 0;
}