#include <stdio.h>
#include "deplacement.h"
#include <conio.h>

/*
Z = 122 90
Q = 113 81
S = 115 83
D = 100 68

*/

void SetupDeplacement(int*X1, int*Y1,int*X2, int*Y2, char tab[18][37], char PJ1, char PJ2)
{
    tab[*Y1][*X1] = PJ1;
    tab[*Y2][*X2] = PJ2;
}

void SetupDeplacement4J(int*X1, int*Y1,int*X2, int*Y2,int*X3, int*Y3,int*X4, int*Y4, char tab[18][37], char PJ1, char PJ2, char PJ3, char PJ4)
{
    tab[*Y1][*X1] = PJ1;
    tab[*Y2][*X2] = PJ2;
    tab[*Y3][*X3] = PJ3;
    tab[*Y4][*X4] = PJ4;
}


void Deplacement(int*X, int*Y, char tab[18][37], char PJ)
{
    system("cls");
    Affiche_Plateau(tab);
    gotoligcol(0,0);
    char tapj;
    int possible = 0;

    tab[*Y][*X] = ' ';

    int oldX = *X;
    int oldY = *Y;

    printf("Deplacez vous avec ZQSD\n");
    printf("A %c de jouer\n", PJ);

    while(possible == 0)
    {

        do{tapj = getch();
        }while(tapj !=122 && tapj !=90 && tapj !=113 && tapj !=81 && tapj !=115 && tapj !=83 && tapj !=100 && tapj !=68);

        *X = oldX;
        *Y = oldY;

        if(tapj == 122 || tapj == 90)
        {
            *Y -= 2;
            if (*Y < 1 || *Y >17) // cas hors du cadre
            {
                printf("Hors du cadre\n");
                possible = 0;
            }
            else if (tab[*Y][*X] != ' ') // cas pion sur le chemin
            {
                if(tab[*Y-1][*X] == 'b' )
                {
                    printf("Une barriere est derriere ce joueur\n");
                    possible = 0;
                }
                else if((tab[*Y-2][*X] != ' ' ))
                {
                    printf("Trop de pionts a sauter \n");
                    possible = 0;
                }
                else
                {
                    printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                    *Y -= 2;
                    possible = 1;
                }
            }
            else if (tab[*Y+1][*X]== 'b') // cas barriere
            {
                printf("Vous ne pouvez pas passer au dessus de la barriere\n");
                possible = 0;
            }


            else // sinon ça passe
                possible = 1;


        }



        if(tapj == 113 || tapj == 81)
        {
            *X -= 4;
            if (*X < 3 || *Y > 35)
            {
                printf("Hors du cadre\n");
                possible = 0;
            }
            else if (tab[*Y][*X] != ' ') // cas pion sur le chemin
            {
                if(tab[*Y][*X-2] == 'b' )
                {
                    printf("Une barriere est derriere ce joueur\n");
                    possible = 0;
                }
                else if((tab[*Y][*X-4] != ' ' ))
                {
                    printf("Trop de pionts a sauter \n");
                    possible = 0;
                }
                else
                {
                    printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                    *X -= 4;
                    possible = 1;
                }
            }
            else if (tab[*Y][*X+2]== 'b') // cas barriere
            {
                printf("Vous ne pouvez pas passer au dessus de la barriere\n");
                possible = 0;
            }

            else
                possible = 1;
        }


        if(tapj == 115 || tapj == 83)
        {
            *Y += 2;
            if (*Y < 1 || *Y >17) // cas hors du cadre
            {
                printf("Hors du cadre\n");
                possible = 0;
            }
            else if (tab[*Y][*X] != ' ') // cas pion sur le chemin
            {
                if(tab[*Y+1][*X] == 'b' )
                {
                    printf("Une barriere est derriere ce joueur\n");
                    possible = 0;
                }
                else if((tab[*Y+2][*X] != ' ' ))
                {
                    printf("Trop de pionts a sauter \n");
                    possible = 0;
                }
                else
                {
                    printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                    *Y += 2;
                    possible = 1;
                }

            }
            else if (tab[*Y - 1][*X]== 'b') // cas barriere
            {
                printf("Vous ne pouvez pas passer au dessus de la barriere\n");
                possible = 0;
            }
            else
                possible = 1;

        }
        if(tapj == 100 || tapj == 68)
        {
            *X += 4;
            if (*X < 3 || *Y > 35)
            {
                printf("Hors du cadre\n");
                possible = 0;
            }
            else if (tab[*Y][*X] != ' ') // cas pion sur le chemin
            {
                if(tab[*Y][*X+2] == 'b' )
                {
                    printf("Une barriere est derriere ce joueur\n");
                    possible = 0;
                }
                else if((tab[*Y][*X+4] != ' ' ))
                {
                    printf("Trop de pionts a sauter \n");
                    possible = 0;
                }
                else
                {
                    printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                    *X += 4;
                    possible = 1;
                }

            }
            else if (tab[*Y][*X - 2]== 'b') // cas barriere
            {
                printf("Vous ne pouvez pas passer au dessus de la barriere\n");
                possible = 0;
            }

            else
                possible = 1;

        }

    }
    tab[*Y][*X] = PJ;
    Affiche_Plateau(tab);


}

