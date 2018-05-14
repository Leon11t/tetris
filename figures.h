#ifndef FIGURES_H
#define FIGURES_H
#include <stdio.h>
#include <stdint.h>
#include <strings.h>

typedef enum
{
    DEG_0,
    DEG_90,
    DEG_180,
    DEG_240
}eROTATION;

typedef enum
{
    FIG_I,
    FIG_J,
    FIG_L,
    FIG_O,
    FIG_S,
    FIG_T,
    FIG_Z
}eFIGURE;

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
    eROTATION rotation;
}Object;

void figureInit(void);
void figureGetSize(Object *obj);
void figureRotate(Object *obj, eFIGURE fig, eROTATION rot);
void figureUpdate(Object *obj);



#endif // FIGURES_H
