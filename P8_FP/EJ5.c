#include <stdio.h>
#include <string.h>

int main (){
    char contra[]="jaja que loco";
    char usuario[100]; 
    do{
         printf ("Ingresa tu contraseña\n");
         scanf(" %[^\n]", usuario);
         
         if (strcmp(usuario, contra) == 0) {
            printf("Contraseña correcta\n");
            break;

        } else {
            printf("Contraseña incorrecta. Intenta de nuevo.\n");
        }

    } while (1);

    return 0;
    }
