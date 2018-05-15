#ifndef BOARD_H
#define BOARD_H

#include <stdio.h>
#include <stdint.h>


#define BOARD_HEIGHT 20
#define BOARD_LENGTH 22

void boardInit(uint8_t (*boardArray)[BOARD_HEIGHT][BOARD_LENGTH]);
void boardDraw(uint8_t (*boardArray)[BOARD_HEIGHT][BOARD_LENGTH]);


#endif // BOARD_H
