#include "figures.h"

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


void figureRotate(Object *obj, Figure *fig, eRotation rot)
{
    switch (rot){
    case DEG_0:
        obj->pFigure = (uint8_t *)fig->f_0;
        printf("switch 0x%x\n",obj->pFigure);
        break;
    case DEG_90:
        obj->pFigure = (uint8_t *)fig->f_90;
        printf("switch 0x%x\n",obj->pFigure);
        break;
    case DEG_180:
        obj->pFigure = (uint8_t *)fig->f_180;
        printf("switch 0x%x\n",obj->pFigure);
        break;
    case DEG_240:
        obj->pFigure = (uint8_t *)fig->f_240;
        printf("switch 0x%x\n",obj->pFigure);
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
            //printf("Address 0x%x\n: ", *(*(obj->pFigure+i)+j));
            if(*(*(obj->pFigure+i)+j) == 0x31)
            {
                obj->f_size[i]++;
            }
        }
    }
}
