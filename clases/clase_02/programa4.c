#include<stdio.h>
#include<stdbool.h>
int main(){
    int res;
    char h,p,H;
    //igual
    res='h'=='p';
    printf ("%d",&res);
    res='h'=='H';
    printf ("%d",&res);
    res='h'=='h';
    printf ("%d",&res);
    //diferente de
    res='h'!='p';
    printf ("%d",&res);
    //menor que
    res=7<15;
    printf ("%d",&res);
    //mayor que
    res=22>11;
    printf ("%d",&res);
    //menor o igual que
    res=15<=2;
    printf ("%d",&res);
    //myor o igual que
    res=30>=100;
    printf ("%d",&res);
    return 0;
}