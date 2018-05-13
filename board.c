#include "board.h"

void boardInit(uint8_t (*boardArray)[BOARD_HEIGHT][BOARD_LENGTH])
{
    for(uint8_t hei = 0; hei < BOARD_HEIGHT; hei++)
    {
        for(uint8_t len = 0; len < BOARD_LENGTH; len++)
        {
            if(len == 0 || len == BOARD_LENGTH - 1)
            {
                (*boardArray)[hei][len] = 0xDB; //0xDB ASCII - sign
            }
            if(hei == BOARD_HEIGHT - 1)
            {
                (*boardArray)[hei][len] = 0xDF;  //0xDF ASCII - sign
            }
        }
    }
}

void boardDraw(uint8_t (*boardArray)[BOARD_HEIGHT][BOARD_LENGTH])
{
    for(uint8_t hei = 0; hei < BOARD_HEIGHT; hei++)
    {
        for(uint8_t len = 0; len < BOARD_LENGTH; len++)
        {
            printf("%c",(*boardArray)[hei][len]);
            if(len == BOARD_LENGTH - 1)printf("\n");
        }
    }
}
