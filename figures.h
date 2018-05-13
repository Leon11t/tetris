#ifndef FIGURES_H
#define FIGURES_H
#include <stdio.h>
#include <stdint.h>
#include <strings.h>

typedef enum
{
    DEG_0   = 0,
    DEG_90  = 1,
    DEG_180 = 2,
    DEG_240 = 3
}eRotation;


typedef struct
{
    const char* f_0[4];
    const char* f_90[4];
    const char* f_180[4];
    const char* f_240[4];
}Figure;

typedef struct
{
    uint8_t **pFigure;
    uint8_t f_size[4];
    uint8_t cord_x;
    uint8_t cord_y;
    eRotation rotation;
}Object;


void figureGetSize(Object *obj);
void figureRotate(Object *obj, Figure *fig, eRotation rot);
void figureUpdate(Object *obj);



#endif // FIGURES_H
