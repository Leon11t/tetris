#include <stdio.h>
#include <string.h>
#include "figures.h"

#define BOARD_HEIGHT 20
#define BOARD_WEIGHT 20

uint8_t board[BOARD_WEIGHT][BOARD_HEIGHT] = {{"  1  2  3"}};
extern Figure figure_t;



const char *figure_m[4] =
{
    "  11    ",
    "111111  ",
    "        ",
    "        "
};


int main()
{
    Object obj;
    figureRotate(&obj, &figure_t, DEG_90);
    figureGetSize(&obj);





    return 0;
}
