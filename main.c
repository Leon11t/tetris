#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <time.h>
#include <stdlib.h>
#include "figures.h"
#include "board.h"

uint8_t board[BOARD_HEIGHT][BOARD_LENGTH];


int main()
{
    long long timeMillis = 0;

    srand(time(NULL));

    Object obj;
    figureInit();
    figureRandomObj(&obj);


    boardInit(&board);



    while(1)
    {
        if (millis() - timeMillis > 1000)
        {
          timeMillis = millis();
          boardDraw(&board);
        }

    }


    return 0;
}
