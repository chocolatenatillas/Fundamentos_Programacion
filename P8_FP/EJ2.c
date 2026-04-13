#include <stdio.h>

int main() {
    int a, b, c, x;
    int anterior; 

    printf("Escriba dos numeros para sumar\n");
    
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Error: Entrada no valida.\n");
        return 1;
    }

    x = a + b;
    printf("El resultado de la suma de %d y %d es %d\n", a, b, x);

    while (1) {
        printf("\nSi desea sumar otro numero al total (%d), escribalo. De lo contrario, escriba 0: ", x);
        
        if (scanf("%d", &c) != 1) break;
        
        if (c == 0) {
            break;
        }

        anterior = x;
        x = x + c;
        printf("El resultado de la suma de %d y %d es %d\n", anterior, c, x);
    }

    printf("\nProceso finalizado. El total final fue: %d\n", x);
    
    return 0;
}