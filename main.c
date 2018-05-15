#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <time.h>
#include <stdlib.h>
#include "figures.h"
#include "board.h"

uint8_t board[BOARD_HEIGHT][BOARD_LENGTH];
//extern Figure *figureList[];


int main()
{
    srand(time(NULL));

    Object obj;
    figureInit();
    figureRandomObj(&obj);


    boardInit(&board);
    boardDraw(&board);



    return 0;
}
