#include <stdio.h>
#include <stdbool.h>
#define MAX 1000

void leer_matriz(int mat[][MAX], int m, int n){
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            printf ("Ingresa el valor para M[%d %d]: ");
            scanf ("%d", &mat [i][j]);
        }
    }
}


void mostrar_matriz(int mat[][MAX], int m, int n){
    for (int i=0; i<m; i++){
        printf ("[");
        for (int j=0; j<n; j++){
            printf ("%d ", mat [i][j]);
        }
        printf ("]\n");
    }
}



void sumar_Matriz(int mat[MAX][MAX], int mat2 [MAX][MAX], int C[MAX][MAX], int m, int n){
    if (m=p && n=q){
        for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            C[i][j]=mat[i][j]+mat2[i][j]
        }
    }
}
    else {
        printf ("No se puede sumar.\n");
    }
}

void multiplicar_matriz 


void transpuesta (mat){
     for (int i=0; i<m; i++){
        printf ("[");
        for (int j=0; j<n; j++){
            printf ("%d ", mat [j][i]);
        }
        printf ("]\n");
    }
}




void menu(){
    printf ("1. Suma\n");
    printf ("2. Multiplicación\n");
    printf ("3. Transpuesta\n");
    printf ("4. Determinante\n");
    printf ("5. Salir\n");
}
int main (){
    float x,y,z;
    int op;
    while(true){
        menu();//Lamndo a la fucnion menu
        printf("Selecciona una opción \n");
        scanf ("%d",&op);
        if(op==5)return 0;
        printf("Ingresar el primer valor: ");
        scanf ("%f",&x);
        printf("Ingresar el segundo valor: ");
        scanf ("%f",&y);
        switch (op){
            case 1:
            z=suma(x,y);
            printf ("%.2f + %.2f=%.2f\n",x,y,z);
            break;
            case 2:
            z=resta(x,y);
            printf ("%.2f - %.2f=%.2f\n",x,y,z);
            break;
            case 3:
            z=mul(x,y);
            printf ("%.2f* %.2f=%.2f\n",x,y,z);
            break;
            case 4:
            z=my_div(x,y);
            if (z!= INFINITY)
            printf("%.2f/%.2f=%.2f\n",x,y,z);
            break;
            default:
            printf ("Opción no valida\n");
        }
        printf ("Presione ENter para continuar...");
        while(getchar()!='\n');
        getchar();
        system("clear");
    }