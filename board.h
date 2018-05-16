#ifndef BOARD_H
#define BOARD_H

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <sys\time.h>

#define BOARD_HEIGHT 20
#define BOARD_LENGTH 23

void boardInit(uint8_t (*boardArray)[BOARD_HEIGHT][BOARD_LENGTH]);
void boardDraw(uint8_t (*boardArray)[BOARD_HEIGHT][BOARD_LENGTH]);
long long millis(void);


#endif // BOARD_H
