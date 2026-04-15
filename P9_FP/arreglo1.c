#include <stdio.h>

/*
* Este programa ilustra que todas las variables tienen una dirección
*/

int main(){

    int x, y;
   float f, g;
   int array [5];
   float array2 [3];
   
   printf ("La posicion de x es: %p\n", &x);
   printf ("La posicion de y es: %p\n", &y);
   printf ("La posicion de f es: %p\n", &f);
   printf ("La posicion de g es: %p\n", &g);

   printf ("La posicion de array es: %p\n", &array);
   printf ("La posicion de array2 es: %p\n", &array2);

   printf ("La posicion de array es: %p\n", &array[0]);
   printf ("La posicion de array2 es: %p\n", &array2[0]);


   return 0;
}