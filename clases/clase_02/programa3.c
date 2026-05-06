#include<stdio.h>
int main(){
    int x,y;
    //post incrementos
    //agregan 1 después de utilizar el valor
    x=7;
    printf ("x=%d \n",x);
    y=x++;
    printf ("x=%d \n",x);
    printf ("y=%d \n",y);
    //pre incrementos
    //agrega 1 al valor antes de usarlo
    x=7;
    printf ("x=%d \n",x);
    y=++x;
    printf ("x=%d \n",x);
    printf ("y=%d \n",y);
    //post decrementos
    //le quita 1 al valor despues de usarlo
    x=7;
    printf ("x=%d \n",x);
    y=x--;
    printf ("x=%d \n",x);
    printf ("y=%d \n",y);
    //pre incrementos
    //le quita 1 al valor antes de usarlo
    x=7;
    printf ("x=%d \n",x);
    y=--x;
    printf ("x=%d \n",x);
    printf ("y=%d \n",y);
    return 0;
}