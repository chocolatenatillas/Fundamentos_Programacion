#include <stdio.h>

int main(){
    int i;
    printf ("la tabla del 5, del 1 al 10 es: \n");
    for(i=1; i<=10 ; i++){
        printf ("5 x %d = %d\n", i, i*5);
    } 
    return 0;
}