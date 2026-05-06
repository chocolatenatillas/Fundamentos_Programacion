#include <stdio.h>
int main () {
    int a,b,c;

    float f,g,h;

    char op, op2;

    printf ("Selecciones una opción\n");
    printf ("1. Operaciones con enteros\n");
    printf ("2. Operasciones con reales\n");

    scanf ("%c", &op);

    printf ("Selecciones una opción\n");
    printf ("1. Suma\n");
    printf ("2. Resta\n");
    printf ("3. Multiplicación\n");
    printf ("4. División\n");
    printf ("5. Módulo\n");
    printf ("6. Salir\n");
    scanf ("%c", &op2);


    if (op == '1')
    {
        printf ("Ingresa los dos numeros con los que quieres trabajar\n");
        scanf ("%d %d", &a, &b);
        switch (op2)
        {
        case 1:
            h= f+g;
            break;

        case 2:
            h= f-g;
            break;

        case 3:
            h= f*g;
            break;

        case 4:
            h= f/g;
            break;

        case 5:
            h= (int)f%(int)g ;
            break;
        
        default:
            return 0;


        }
        printf ("EL resultado es %d\n", c);  
    }else {
        printf ("Ingresa los dos numeros con los que quieres trabajar\n");
        scanf ("%d %d", &a, &b);
        switch (op2) {
        case 1:
            h= f+g;
            break;

        case 2:
            h= f-g;
            break;

        case 3:
            h= f*g;
            break;

        case 4:
            h= f/g;
            break;

        case 5:
            h= (int)f%(int)g ;
            break;
        
        default:
            return 0;
        }
        printf("El resultado es %f\n", h);
    }
}