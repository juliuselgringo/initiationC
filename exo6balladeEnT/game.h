#ifndef GAME
#define GAME

typedef struct T{
    int x;
    int y;
}T;
int displayPlayground(int rows, int cols, char playground[rows][cols]);
int scanNumber(int *a);
int moveT(int rows, int cols, char playground[rows][cols], T *tPosition);
int displayMenu(void);

#endif
