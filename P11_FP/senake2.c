#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define WIDTH 30
#define HEIGHT 15

#define RED "\033[31m"
#define GREEN "\033[32m"
#define BLUE "\033[34m"
#define YELLOW "\033[33m"
#define RESET "\033[0m"

#ifdef _WIN32
   #include <conio.h>
   #include <windows.h>
#else
    #include <termios.h>
    #include <unistd.h>
    #include <fcntl.h>
#endif

int snakex, snakey; 
int fruitX, fruitY;
char direction = 'd';
int score = 0;

// Corregido: Ahora devuelve int y usa el score global correctamente
int increaseScore(){
    static int local_score = 0;
    local_score++;
    return local_score;
}

void moveSnake(int *x, int *y, char dir){
    switch (dir){
        case 'w': case 'W': (*y)--; break;
        case 's': case 'S': (*y)++; break;
        case 'a': case 'A': (*x)--; break;
        case 'd': case 'D': (*x)++; break; // Corregido: era 'd', no 'b'
    }
}

void clearScreen(){
    #ifdef _WIN32
    system ("cls");
    #else
    system ("clear");
    #endif
}

// Función de lectura BLOQUEANTE (el programa espera a que presiones una tecla)
char readInput(){
#ifdef _WIN32
    return getch(); // getch() detiene la ejecución hasta recibir una tecla
#else
    struct termios oldt, newt;
    int ch;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);

    ch = getchar(); // getchar() detiene la ejecución en Linux/macOS

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    return (char)ch;
#endif
}

void setup(){
    snakex = WIDTH / 2;
    snakey = HEIGHT / 2;
    fruitX = (rand() % (WIDTH - 2)) + 1;
    fruitY = (rand() % (HEIGHT - 2)) + 1;
}

void draw(){
    clearScreen();
    for(int i = 0; i < HEIGHT; i++){
        for(int j = 0; j < WIDTH; j++){
            if(j == 0 || i == 0 || i == HEIGHT - 1 || j == WIDTH - 1){
                 printf(YELLOW "#");
            } else if(snakex == j && snakey == i){
                 printf(GREEN "s");
            } else if(fruitX == j && fruitY == i){
                 printf(RED "f");
            } else {
                 printf(RESET " ");
            }
        }
        printf("\n");
    }
    printf(RESET "Score: %d\n", score);
    printf("Presiona W, A, S o D para moverte: ");
}

void logic(){
    // Colisión con límites (usando los recursos de WIDTH y HEIGHT)
    if(snakex <= 0 || snakex >= WIDTH - 1 || snakey <= 0 || snakey >= HEIGHT - 1){
        printf("\nGame over\n");
        exit(0);
    }
    
    // Comer fruta
    if(snakex == fruitX && snakey == fruitY){
        fruitX = (rand() % (WIDTH - 2)) + 1;
        fruitY = (rand() % (HEIGHT - 2)) + 1;
        score = increaseScore();
    }
}

int main(){
    setup();
    while(true){
        draw();
        direction = readInput(); // Aquí el código se detiene y espera tu tecla
        moveSnake(&snakex, &snakey, direction);
        logic();
    }
    return 0;
}