#include "figures.h"

Figure *figureList[7];

Figure figure_o = {
    .f_0 =
    {
        "1111    ",
        "1111    ",
        "        ",
        "        "
    },
};

Figure figure_i = {
    .f_0 =
    {
        "11      ",
        "11      ",
        "11      ",
        "11      "
    },
    .f_90 =
    {
        "11111111",
        "        ",
        "        ",
        "        "
    },
};


Figure figure_z = {
    .f_0 =
    {
        "1111    ",
        "  1111  ",
        "        ",
        "        "
    },

    .f_90 =
    {
        "  11    ",
        "1111    ",
        "11      ",
        "        "
    },
};

Figure figure_s = {
    .f_0 =
    {
        "  1111  ",
        "1111    ",
        "        ",
        "        "
    },
    .f_90 =
    {
        "11      ",
        "1111    ",
        "  11    ",
        "        "
    },
};

Figure figure_l = {
    .f_0 =
    {
        "11      ",
        "11      ",
        "1111    ",
        "        "
    },

    .f_90 =
    {
        "111111  ",
        "11      ",
        "        ",
        "        "
    },
    .f_180 =
    {
        "    11  ",
        "    11  ",
        "  1111  ",
        "        "
    },
    .f_240 =
    {
        "    11  ",
        "111111  ",
        "        ",
        "        "
    },
};

Figure figure_j = {
    .f_0 =
    {
        "  11    ",
        "  11    ",
        "1111    ",
        "        "
    },

    .f_90 =
    {
        "11      ",
        "111111  ",
        "        ",
        "        "
    },
    .f_180 =
    {
        "  1111  ",
        "  11    ",
        "  11    ",
        "        "
    },
    .f_240 =
    {
        "111111  ",
        "    11  ",
        "        ",
        "        "
    },
};

Figure figure_t = {
    .f_0 =
    {
        "  11    ",
        "111111  ",
        "        ",
        "        "
    },

    .f_90 =
    {
        "11      ",
        "1111    ",
        "11      ",
        "        "
    },
    .f_180 =
    {
        "111111  ",
        "  11    ",
        "        ",
        "        "
    },
    .f_240 =
    {
        "  11    ",
        "1111    ",
        "  11    ",
        "        "
    },
};


void figureInit(void)
{
    figureList[FIG_I] = &figure_i;
    figureList[FIG_J] = &figure_j;
    figureList[FIG_L] = &figure_l;
    figureList[FIG_O] = &figure_o;
    figureList[FIG_S] = &figure_s;
    figureList[FIG_T] = &figure_t;
    figureList[FIG_Z] = &figure_z;
}


void figureRotate(Object *obj, eFIGURE fig, eROTATION rot)
{
    switch (rot){
    case DEG_0:
        obj->pFigure = (uint8_t **)figureList[fig]->f_0;
        obj->rotation = DEG_0;
        break;
    case DEG_90:
        obj->pFigure = (uint8_t **)figureList[fig]->f_90;
        obj->rotation = DEG_90;
        break;
    case DEG_180:
        obj->pFigure = (uint8_t **)figureList[fig]->f_180;
        obj->rotation = DEG_180;
        break;
    case DEG_240:
        obj->pFigure = (uint8_t **)figureList[fig]->f_240;
        obj->rotation = DEG_240;
        break;
    default:
        break;
    }
}


void figureGetSize(Object *obj)
{
    for(uint8_t i =0; i < 4; i++)
    {
        for(uint8_t j =0; j < strlen(*obj->pFigure)+1; j++)  //+1 <-- string terminator
        {
            if(*(*(obj->pFigure+i)+j) == 0x31)
            {
                obj->f_size[i]++;
            }
        }
    }
}

void figureMoveRight(Object *obj)
{

}


void figureMoveLeft(Object *obj)
{

}

void figureUpdate(Object *obj)
{

}
