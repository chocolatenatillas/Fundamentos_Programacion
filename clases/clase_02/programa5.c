#include<stdio.h>
int main(){
    //negaciones
    int x,y;
    x=(!(7>15));
    printf("%d",x);
    y=(!0);
    printf("%d",y);
    //conjunciones
    x=(35>20)&&(20<=23);
    
    return 0;
}