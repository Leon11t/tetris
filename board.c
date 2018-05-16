#include "board.h"


void boardInit(uint8_t (*boardArray)[BOARD_HEIGHT][BOARD_LENGTH])
{
    for(uint8_t hei = 0; hei < BOARD_HEIGHT; hei++)
    {
        for(uint8_t len = 0; len < BOARD_LENGTH; len++)
        {
            (*boardArray)[hei][len] = 0xFF;
            if(len == 0 || len == BOARD_LENGTH - 2 || len == BOARD_LENGTH - 1)
            {
                if(len == BOARD_LENGTH - 1)
                {
                    (*boardArray)[hei][len] = '\0';
                }
                else
                {
                    (*boardArray)[hei][len] = 0xDB; //0xDB ASCII - sign
                }
            }

            if(hei == BOARD_HEIGHT - 1)
            {
                if(len == BOARD_LENGTH - 1)
                {
                    (*boardArray)[hei][len] ='\0';
                }
                else
                {
                    (*boardArray)[hei][len] = 0xDF;  //0xDF ASCII - sign
                }
            }
        }
    }
}

void boardDraw(uint8_t (*boardArray)[BOARD_HEIGHT][BOARD_LENGTH])
{
    static int it = 0;
    system("cls");
    for(uint8_t hei = 0; hei < BOARD_HEIGHT; hei++)
    {
        //for(uint8_t len = 0; len < BOARD_LENGTH; len++)
        //{
            printf("%s",(*boardArray)[hei]);
            //if(len == BOARD_LENGTH - 1)
            printf("\n");
        //}
    }
    printf("%d\n", it++);
}


long long millis(void)
{
    struct timeval te;
    gettimeofday(&te, NULL);
    long long milliseconds = te.tv_sec * 1000LL + te.tv_usec / 1000;
    //printf("milliseconds: %lld\n", milliseconds);
    return milliseconds;
}
