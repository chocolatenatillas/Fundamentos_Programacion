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
   #include<conio.h>
   #include <windows.h>

#else
    #include <termios.h>
    #include <unistd.h>
    #include <fcntl.h>
#endif

int snakex, snakey; // posición de la primera parte de la vibora
int fruitX, fruitY;
char direction='d';
int score=0;

void increaseScore(){
    static int score=0;
    score++;
    return score;
}

void moveSnake(int *x, int *y, char dir){
    switch (dir){
        case 'w':case 'W': (*y)--; break;
        case 's': case 'S': (*y)++; break;
        case 'a': case 'A': (*x)--; break;
        case 'b': case 'B': (*x)++; break;
    }

}

void clearScreen(){
    #ifdef _WIN32
    system ("cls");
    #else
    system ("clear");
    #endif
}

#ifdef _WIN32
char readinput(){
    if(_kbhit())return _getc();
    return direction;
}
#else
char readInput(){
    struct termios oldt, newt;
    int ch;
    int oldf;

    tcsetattr(STDERR_FILENO,  struct termios*);
    newt= oldt;
    newt.c_lflag &= ~(ICANON | ECHO);

    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    oldf= fcntl(STDIN_FILENO, F_GETFL, 0);

    fcntl(STDIN_FILENO, F_GETFL, oldf | O_NONBLOCK);

    ch= getchar();

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    fcntl(STDIN_FILENO, F_GETFL, oldf);

    if(ch!=EOF) return ch;

    return direction;
}
#endif

/**
 * Función que sirve  para iniciar el juego
 */
void setup(){
    snakex=WIDTH/2;
    snakey=HEIGHT/2;

    fruitX = (rand()%(WIDTH-2))+1;
    fruitY = (rand()%(HEIGHT-2))+1;

}

void draw(){
    system("clear");
    for(int i=0; i<HEIGHT;i++){
        for(int j=0; j< WIDTH; j++){
            if(j==0 || i ==0 || i==HEIGHT-1 || j == WIDTH-1){
                 printf(YELLOW "#");
                 continue;
            }
            if(snakex==j && snakey==i){
                printf(GREEN "s");
                continue;
            } 
            if(fruitX==j && fruitY==i){
                printf(RED "f");
                continue;
            } 
            printf(RESET " ");
        }
        printf(RESET "\n");
    }
   // printf("Presiona W o S o D o A\n");
    printf (RESET "Score %d\n", score);
}


//mueve al jugador
void logic(){
    if(snakex<0 || snakex>=WIDTH || snakey<0 || snakey>=HEIGHT){
        printf("Game over\n");
        exit (0);
    }
    if(snakex== fruitX && snakey==fruitY){
        fruitX=rand()%WIDTH;
        fruitY= rand()%HEIGHT;
        score = increaseScore();
    }
}

int main(){
    setup();
    while(true){
        draw();
        direction= readInput();
        moveSnake(&snakex, &snakey, direction);
        logic();
        #ifdef _WIN32
        Sleep(150);
        #else
        usleep(150000);
        #endif

    }
    return 0;
}
