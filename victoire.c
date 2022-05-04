#include <stdio.h>

int victoireJ1(char PJ1, char tabl[18][37])
{
    for(int i = 0; i < 9; i++)
    {
        if ((tabl[17][(i+1)*4 - 1]) == PJ1)
        {
            return 1;
        }

    }
}

int victoireJ2(char PJ2,char tabl[18][37])
{
    for(int i = 0; i < 9; i++)
    {
        if ((tabl[1][(i+1)*4 - 1]) == PJ2)
        {
            return 1;
        }

    }
}

int victoireJ2_4(char PJ2,char tabl[18][37])
{
    for(int i = 0; i < 9; i++)
    {
        if(tabl[(i+1)*2 - 1][3] == PJ2)
        {
            return 1;
        }

    }

}



int victoireJ3(char PJ3,char tabl[18][37])
{
    for(int i = 0; i < 9; i++)
    {
        if ((tabl[1][(i+1)*4 - 1]) == PJ3)
        {
            return 1;
        }

    }
}

int victoireJ4(char PJ4,char tabl[18][37])
{
    for(int i = 0; i < 9; i++)
    {
        if(tabl[(i+1)*2 - 1][35] == PJ4)
        {
            return 1;
        }

    }

}
