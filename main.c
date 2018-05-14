#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include "figures.h"
#include "board.h"

uint8_t board[BOARD_HEIGHT][BOARD_LENGTH];
extern Figure *figureList[7];


int main()
{
    Object obj;
    figureInit();
    int i = 0;
    figureRotate(&obj, i, DEG_90);
    figureGetSize(&obj);

    boardInit(&board);
    boardDraw(&board);



    return 0;
}
