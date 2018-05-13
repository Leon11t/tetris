#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include "figures.h"
#include "board.h"

uint8_t board[BOARD_HEIGHT][BOARD_LENGTH];
extern Figure figure_t;


int main()
{
//    Object obj;
//    figureRotate(&obj, &figure_t, DEG_90);
//    figureGetSize(&obj);

    boardInit(&board);
    boardDraw(&board);

    //putchar(178);


    return 0;
}
