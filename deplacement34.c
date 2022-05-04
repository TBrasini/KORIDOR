#include <stdio.h>
#include "deplacement34.h"

void SetupDeplacement_4(int*X1, int*Y1,int*X2, int*Y2,int*X3, int*Y3,int*X4, int*Y4, char tab[18][37], char PJ1, char PJ2,char PJ3, char PJ4)
{
    tab[*Y1][*X1] = PJ1;
    tab[*Y2][*X2] = PJ2;
    tab[*Y2][*X2] = PJ3;
    tab[*Y2][*X2] = PJ4;
}


void Deplacement_J1_4(int*X1, int*Y1, char tab[18][37], char PJ1, char PJ2,char PJ3, char PJ4)
{
    char tapj1;
    int possible = 0;

    tab[*Y1][*X1] = ' ';

    int oldX1 = *X1;
    int oldY1 = *Y1;

    printf("Deplacez vous avec ZQSD\n");
    printf("Au joueur1 de jouer\n");

    while(possible = 0)
    {

        do{tapj1 = getch();
        }while(tapj1 !=122 && tapj1 !=90 && tapj1 !=113 && tapj1 !=81 && tapj1 !=115 && tapj1 !=83 && tapj1 !=100 && tapj1 !=68);

        *X1 = oldX1;
        *Y1 = oldY1;

        if(tapj1 == 122 || tapj1 == 90)
        {
            *Y1 -= 2;
            if (*Y1 < 1 || *Y1 >17) // cas hors du cadre
            {
                printf("Hors du cadre\n");
                possible = 0;
            }
            else if (tab[*Y1][*X1] == PJ2) // cas pion sur le chemin
            {
                printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                *Y1 -= 2;
                possible = 1;
            } else if (tab[*Y1][*X1] == PJ3) // cas pion sur le chemin
            {
                printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                *Y1 -= 2;
                possible = 1;
            } else if (tab[*Y1][*X1] == PJ4) // cas pion sur le chemin
            {
                printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                *Y1 -= 2;
                possible = 1;
            }
            else if (tab[*Y1+1][*X1]== 'b') // cas barriere
            {
                printf("Vous ne pouvez pas passer au dessus de la barriere\n");
                possible = 0;
            }


            else // sinon ça passe
                possible = 1;
                tab[*Y1][*X1] = PJ1;

        }



        if(tapj1 == 113 || tapj1 == 81)
        {
            *X1 -= 4;
            if (*X1 < 3 || *Y1 > 35)
            {
                printf("Hors du cadre\n");
                possible = 0;
            }
            else if (tab[*Y1][*X1] == PJ2) // cas pion sur le chemin
            {
                printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                *X1 -= 2;
                possible = 1;
            }else if (tab[*Y1][*X1] == PJ3) // cas pion sur le chemin
            {
                printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                *X1 -= 2;
                possible = 1;
            }else if (tab[*Y1][*X1] == PJ4) // cas pion sur le chemin
            {
                printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                *X1 -= 2;
                possible = 1;
            }
            else if (tab[*Y1][*X1+2]== 'b') // cas barriere
            {
                printf("Vous ne pouvez pas passer au dessus de la barriere\n");
                possible = 0;
            }

            else
                possible = 1;
                tab[*Y1][*X1] = PJ1;
        }


        if(tapj1 == 115 || tapj1 == 83)
        {
            *Y1 += 2;
            if (*Y1 < 1 || *Y1 >17) // cas hors du cadre
            {
                printf("Hors du cadre\n");
                possible = 0;
            }
            else if (tab[*Y1][*X1] == PJ2) // cas pion sur le chemin
            {
                printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                *Y1 += 2;
                possible = 1;
            }else if (tab[*Y1][*X1] == PJ3) // cas pion sur le chemin
            {
                printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                *Y1 += 2;
                possible = 1;
            }else if (tab[*Y1][*X1] == PJ4) // cas pion sur le chemin
            {
                printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                *Y1 += 2;
                possible = 1;
            }
            else if (tab[*Y1 - 1][*X1]== 'b') // cas barriere
            {
                printf("Vous ne pouvez pas passer au dessus de la barriere\n");
                possible = 0;
            }
            else
                possible = 1;
                tab[*Y1][*X1] = PJ1;

        }
        if(tapj1 == 100 || tapj1 == 68)
        {
            *X1 += 4;
            if (*X1 < 3 || *Y1 > 35)
            {
                printf("Hors du cadre\n");
                possible = 0;
            }
            else if (tab[*Y1][*X1] == PJ2) // cas pion sur le chemin
            {
                printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                *X1 += 2;
                possible = 1;
            }else if (tab[*Y1][*X1] == PJ3) // cas pion sur le chemin
            {
                printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                *X1 += 2;
                possible = 1;
            }else if (tab[*Y1][*X1] == PJ4) // cas pion sur le chemin
            {
                printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                *X1 += 2;
                possible = 1;
            }
            else if (tab[*Y1][*X1 - 2]== 'b') // cas barriere
            {
                printf("Vous ne pouvez pas passer au dessus de la barriere\n");
                possible = 0;
            }

            else
                possible = 1;
                tab[*Y1][*X1] = PJ1;

        }

    }

}


void Deplacement_J2_4(int*X2, int*Y2, char tab[18][37], char PJ1, char PJ2,char PJ3, char PJ4)
{
    char tapj2;
    int possible = 0;

    tab[*Y2][*X2] = ' ';

    int oldX2 = *X2;
    int oldY2 = *Y2;

    printf("Deplacez vous avec ZQSD\n");
    printf("Au joueur2 de jouer\n");

    while(possible = 0)
    {


        do{tapj2 = getch();
        }while(tapj2 !=122 && tapj2 !=90 && tapj2 !=113 && tapj2 !=81 && tapj2 !=115 && tapj2 !=83 && tapj2 !=100 && tapj2 !=68);

    *X2 = oldX2;
    *Y2 = oldY2;


    if(tapj2 == 122 || tapj2 == 90)
        {
            *Y2 -= 2;
            if (*Y2 < 1 || *Y2 >17) // cas hors du cadre
            {
                printf("Hors du cadre\n");
                possible = 0;
            }
            else if (tab[*Y2][*X2] == PJ1) // cas pion sur le chemin
            {
                printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                *Y2 -= 2;
            }
            else if (tab[*Y2][*X2] == PJ3) // cas pion sur le chemin
            {
                printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                *Y2 -= 2;
            }
            else if (tab[*Y2][*X2] == PJ4) // cas pion sur le chemin
            {
                printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                *Y2 -= 2;
            }
            else if (tab[*Y2+1][*X2]== 'b') // cas barriere
            {
                printf("Vous ne pouvez pas passer au dessus de la barriere\n");
                possible = 0;
            }


        }



        if(tapj2 == 113 || tapj2 == 81)
        {
            *X2 -= 4;
            if (*X2 < 3 || *Y2 > 35)
            {
                printf("Hors du cadre\n");
                possible = 0;
            }
            else if (tab[*Y2][*X2] == PJ1) // cas pion sur le chemin
            {
                printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                *X2 -= 2;
                possible = 1;
            }else if (tab[*Y2][*X2] == PJ3) // cas pion sur le chemin
            {
                printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                *X2 -= 2;
                possible = 1;
            }else if (tab[*Y2][*X2] == PJ4) // cas pion sur le chemin
            {
                printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                *X2 -= 2;
                possible = 1;
            }
            else if (tab[*Y2][*X2 + 2]== 'b') // cas barriere
            {
                printf("Vous ne pouvez pas passer au dessus de la barriere\n");
                possible = 0;
            }

        }


        if(tapj2 == 115 || tapj2 == 83)
        {
            *Y2 += 2;
            if (*Y2 < 1 || *Y2 >17) // cas hors du cadre
            {
                printf("Hors du cadre\n");
                possible = 0;
            }
            else if (tab[*Y2][*X2] == PJ1) // cas pion sur le chemin
            {
                printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                *Y2 += 2;
                possible = 1;
            }
            else if (tab[*Y2][*X2] == PJ3) // cas pion sur le chemin
            {
                printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                *Y2 += 2;
                possible = 1;
            }
            else if (tab[*Y2][*X2] == PJ4) // cas pion sur le chemin
            {
                printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                *Y2 += 2;
                possible = 1;
            }
            else if (tab[*Y2-1][*X2]== 'b') // cas barriere
            {
                printf("Vous ne pouvez pas passer au dessus de la barriere\n");
                possible = 0;
            }


        }
        if(tapj2 == 100 || tapj2 == 68)
        {
            *X2 += 4;
            if (*X2 < 3 || *Y2 > 35)
            {
                printf("Hors du cadre\n");
                possible = 0;
            }
            else if (tab[*Y2][*X2] == PJ1) // cas pion sur le chemin
            {
                printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                *X2 += 2;
                possible = 1;
            } else if (tab[*Y2][*X2] == PJ3) // cas pion sur le chemin
            {
                printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                *X2 += 2;
                possible = 1;
            } else if (tab[*Y2][*X2] == PJ4) // cas pion sur le chemin
            {
                printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                *X2 += 2;
                possible = 1;
            }
            else if (tab[*Y2][*X2 - 2]== 'b') // cas barriere
            {
                printf("Vous ne pouvez pas passer au dessus de la barriere\n");
                possible = 0;
            }

            else
                possible = 1;
                tab[*Y2][*X2] = PJ2;

        }
        if (possible == 0);
        tab[*Y2][*X2] = ' ';
    }


}
void Deplacement_J3(int*X3, int*Y3, char tab[18][37],char PJ1, char PJ2,char PJ3, char PJ4)
{
    char tapj1;
    int possible = 0;

    tab[*Y3][*X3] = ' ';

    int oldX3 = *X3;
    int oldY3 = *Y3;

    printf("Deplacez vous avec ZQSD\n");
    printf("Au joueur1 de jouer\n");

    while(possible = 0)
    {

        do{tapj1 = getch();
        }while(tapj1 !=122 && tapj1 !=90 && tapj1 !=113 && tapj1 !=81 && tapj1 !=115 && tapj1 !=83 && tapj1 !=100 && tapj1 !=68);

        *X3 = oldX3;
        *Y3 = oldY3;

        if(tapj1 == 122 || tapj1 == 90)
        {
            *Y3 -= 2;
            if (*Y3 < 1 || *Y3 >17) // cas hors du cadre
            {
                printf("Hors du cadre\n");
                possible = 0;
            }
            else if (tab[*Y3][*X3] == PJ1) // cas pion sur le chemin
            {
                printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                *Y3 -= 2;
                possible = 1;
            }
            else if (tab[*Y3][*X3] == PJ2) // cas pion sur le chemin
            {
                printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                *Y3 -= 2;
                possible = 1;
            }
            else if (tab[*Y3][*X3] == PJ4) // cas pion sur le chemin
            {
                printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                *Y3 -= 2;
                possible = 1;
            }
            else if (tab[*Y3+1][*X3]== 'b') // cas barriere
            {
                printf("Vous ne pouvez pas passer au dessus de la barriere\n");
                possible = 0;
            }


            else // sinon ça passe
                possible = 1;
                tab[*Y3][*X3] = PJ3;

        }



        if(tapj1 == 113 || tapj1 == 81)
        {
            *X3 -= 4;
            if (*X3 < 3 || *Y3 > 35)
            {
                printf("Hors du cadre\n");
                possible = 0;
            }
            else if (tab[*Y3][*X3] == PJ1) // cas pion sur le chemin
            {
                printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                *X3 -= 2;
                possible = 1;
            }
            else if (tab[*Y3][*X3] == PJ2) // cas pion sur le chemin
            {
                printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                *X3 -= 2;
                possible = 1;
            }
            else if (tab[*Y3][*X3] == PJ4) // cas pion sur le chemin
            {
                printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                *X3 -= 2;
                possible = 1;
            }
            else if (tab[*Y3][*X3+2]== 'b') // cas barriere
            {
                printf("Vous ne pouvez pas passer au dessus de la barriere\n");
                possible = 0;
            }

            else
                possible = 1;
                tab[*Y3][*X3] = PJ3;
        }


        if(tapj1 == 115 || tapj1 == 83)
        {
            *Y3 += 2;
            if (*Y3 < 1 || *Y3 >17) // cas hors du cadre
            {
                printf("Hors du cadre\n");
                possible = 0;
            }
            else if (tab[*Y3][*X3] == PJ1) // cas pion sur le chemin
            {
                printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                *Y3 += 2;
                possible = 1;
            }
            else if (tab[*Y3][*X3] == PJ2) // cas pion sur le chemin
            {
                printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                *Y3 += 2;
                possible = 1;
            }
            else if (tab[*Y3][*X3] == PJ4) // cas pion sur le chemin
            {
                printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                *Y3 += 2;
                possible = 1;
            }
            else if (tab[*Y3 - 1][*X3]== 'b') // cas barriere
            {
                printf("Vous ne pouvez pas passer au dessus de la barriere\n");
                possible = 0;
            }
            else
                possible = 1;
                tab[*Y3][*X3] = PJ3;

        }
        if(tapj1 == 100 || tapj1 == 68)
        {
            *X3 += 4;
            if (*X3 < 3 || *Y3 > 35)
            {
                printf("Hors du cadre\n");
                possible = 0;
            }
            else if (tab[*Y3][*X3] == PJ1) // cas pion sur le chemin
            {
                printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                *X3 += 2;
                possible = 1;
            }else if (tab[*Y3][*X3] == PJ2) // cas pion sur le chemin
            {
                printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                *X3 += 2;
                possible = 1;
            }else if (tab[*Y3][*X3] == PJ4) // cas pion sur le chemin
            {
                printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                *X3 += 2;
                possible = 1;
            }
            else if (tab[*Y3][*X3 - 2]== 'b') // cas barriere
            {
                printf("Vous ne pouvez pas passer au dessus de la barriere\n");
                possible = 0;
            }

            else
                possible = 1;
                tab[*Y3][*X3] = PJ3;

        }

    }

}


void Deplacement_J4(int*X4, int*Y4, char tab[18][37], char PJ1, char PJ2,char PJ3, char PJ4)
{
    char tapj2;
    int possible = 0;

    tab[*Y4][*X4] = ' ';

    int oldX4 = *X4;
    int oldY4 = *Y4;

    printf("Deplacez vous avec ZQSD\n");
    printf("Au joueur2 de jouer\n");

    while(possible = 0)
    {


        do{tapj2 = getch();
        }while(tapj2 !=122 && tapj2 !=90 && tapj2 !=113 && tapj2 !=81 && tapj2 !=115 && tapj2 !=83 && tapj2 !=100 && tapj2 !=68);

    *X4 = oldX4;
    *Y4 = oldY4;


    if(tapj2 == 122 || tapj2 == 90)
        {
            *Y4 -= 2;
            if (*Y4 < 1 || *Y4 >17) // cas hors du cadre
            {
                printf("Hors du cadre\n");
                possible = 0;
            }
            else if (tab[*Y4][*X4] == PJ1) // cas pion sur le chemin
            {
                printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                *Y4 -= 2;
            }else if (tab[*Y4][*X4] == PJ2) // cas pion sur le chemin
            {
                printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                *Y4 -= 2;
            }else if (tab[*Y4][*X4] == PJ3) // cas pion sur le chemin
            {
                printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                *Y4 -= 2;
            }
            else if (tab[*Y4+1][*X4]== 'b') // cas barriere
            {
                printf("Vous ne pouvez pas passer au dessus de la barriere\n");
                possible = 0;
            }
        }


        if(tapj2 == 113 || tapj2 == 81)
        {
            *X4 -= 4;
            if (*X4 < 3 || *Y4 > 35)
            {
                printf("Hors du cadre\n");
                possible = 0;
            }
            else if (tab[*Y4][*X4] == PJ1) // cas pion sur le chemin
            {
                printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                *X4 -= 2;
                possible = 1;
            }else if (tab[*Y4][*X4] == PJ2) // cas pion sur le chemin
            {
                printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                *X4 -= 2;
                possible = 1;
            }else if (tab[*Y4][*X4] == PJ3) // cas pion sur le chemin
            {
                printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                *X4 -= 2;
                possible = 1;
            }
            else if (tab[*Y4][*X4 + 2]== 'b') // cas barriere
            {
                printf("Vous ne pouvez pas passer au dessus de la barriere\n");
                possible = 0;
            }

        }


        if(tapj2 == 115 || tapj2 == 83)
        {
            *Y4 += 2;
            if (*Y4 < 1 || *Y4 >17) // cas hors du cadre
            {
                printf("Hors du cadre\n");
                possible = 0;
            }
            else if (tab[*Y4][*X4] == PJ1) // cas pion sur le chemin
            {
                printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                *Y4 += 2;
                possible = 1;
            }
            else if (tab[*Y4][*X4] == PJ2) // cas pion sur le chemin
            {
                printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                *Y4 += 2;
                possible = 1;
            }
            else if (tab[*Y4][*X4] == PJ3) // cas pion sur le chemin
            {
                printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                *Y4 += 2;
                possible = 1;
            }
            else if (tab[*Y4-1][*X4]== 'b') // cas barriere
            {
                printf("Vous ne pouvez pas passer au dessus de la barriere\n");
                possible = 0;
            }


        }
        if(tapj2 == 100 || tapj2 == 68)
        {
            *X4 += 4;
            if (*X4 < 3 || *Y4 > 35)
            {
                printf("Hors du cadre\n");
                possible = 0;
            }
            else if (tab[*Y4][*X4] == PJ1) // cas pion sur le chemin
            {
                printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                *X4 += 2;
                possible = 1;
            }
            else if (tab[*Y4][*X4] == PJ2) // cas pion sur le chemin
            {
                printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                *X4 += 2;
                possible = 1;
            } else if (tab[*Y4][*X4] == PJ3) // cas pion sur le chemin
            {
                printf("Un joueur est sur votre chemin, vous passez par dessus\n");
                *X4 += 2;
                possible = 1;
            }
            else if (tab[*Y4][*X4 - 2]== 'b') // cas barriere
            {
                printf("Vous ne pouvez pas passer au dessus de la barriere\n");
                possible = 0;
            }

            else
                possible = 1;
                tab[*Y4][*X4] = PJ4;

        }
        if (possible == 0);
        tab[*Y4][*X4] = ' ';
    }


}
/*
Repere pour toutes les cases de notre tableau
int A = 4;
int B = 8;
int C = 12;
int D = 16;
int E = 20;
int F = 24;
int G = 28;
int H = 32;
int I = 36;

int X1 = 2;
int X2 = 4;
int X3 = 6;
int X4 = 8;
int X5 = 10;
int X6 = 12;
int X7 = 14;
int X8 = 16;
int X9 = 18;


//////DEPLACEMENT J1 START ///////////////

void Deplacement_J1_start_pt4 (int* ancienX, int* ancienY, char tab [18][37])
{
    tab[1][19]='p';
    tab[17][19]='p';
    tab[9][3]='p';
    tab[9][35]='p';
    Affiche_Plateau(tab);
    tab[1][19]=' ';
    *ancienX=19;
    *ancienY=1;
}
void Deplacement_J2_start_pt4 (int* ancienX, int* ancienY, char tab [18][37])
{
    system("cls");
    Affiche_Plateau(tab);
    tab[9][35]=' ';
   *ancienX=35;
   *ancienY=9;
}

void Deplacement_J3_start_pt4 (int* ancienX, int* ancienY, char tab [18][37])
{
    system("cls");
    Affiche_Plateau(tab);
    tab[17][19]=' ';
   *ancienX=19;
   *ancienY=17;
}
void Deplacement_J4_start_pt4 (int* ancienX, int* ancienY, char tab [18][37])
{
    system("cls");
    Affiche_Plateau(tab);
    tab[9][3]=' ';
   *ancienX=3;
   *ancienY=9;
}
//=============================JOUEUR 1 =================================================================

void deplacement_J1_pt4 (int* ancienX, int* ancienY,char tab [18][37])
{
    int valueY,valueX,valueYchange;
    char valueXchange;
    int choix=0; int choix2=0;
    int verification;
    char pion;
    printf("Joueur 1 : c'est a vous de vous deplacer\n");
    printf(" Pour avancer vers l'avant ou l'arriere faites : 1 , pour avancer vers la gauche ou la droite faites : 2\n");
    fflush(stdin);
    do
    {
    scanf("%d",&choix);
    }while (choix<1 || choix>2);
switch(choix)
{
case 1 :
    printf(" Pour avancer vers l'avant faites : 1 , pour avancer vers  l'arriere faites : 2\n");
    fflush(stdin);
    do
    {
        scanf("%d",&choix2);
    }while (choix2<1 || choix2>2);
    switch(choix2)
    {
    case 1 :
        valueY=*ancienY+2;
    break;
    case 2 :
        if(*ancienY==1)  // si sort du plateau
        {
        system("cls");
        printf("RESTEZ SUR LE PLATEAU DE JEU");
        printf("\n");
        valueY=*ancienY;
        valueX=*ancienX;
        tab[*ancienY][*ancienX]=' ';
        *ancienX=valueX;
        *ancienY=valueY;
        tab[valueY][valueX]='p';
        Affiche_Plateau(tab);
        deplacement_J1_pt4(* ancienX, * ancienY, tab [18][37]);
        }
        else
        {
        valueY=*ancienY-2;
        }
    break;
    }
break;
case 2 :
    printf(" Pour avancer vers la gauche faites : 1 , pour avancer vers la droite faites : 2\n");
    fflush(stdin);
    do
    {
    scanf("%d",&choix2);
    }while (choix2<1 || choix2>2);
        switch(choix2)
        {
            case 1 :
            if(*ancienX==3)
            {
            system("cls");
            printf("RESTEZ SUR LE PLATEAU DE JEU");
            printf("\n");
            valueY=*ancienY;
            valueX=*ancienX;
            tab[*ancienY][*ancienX]=' ';
            *ancienX=valueX;
            *ancienY=valueY;
            tab[valueY][valueX]='p';
            Affiche_Plateau(tab);
            deplacement_J1_pt4(* ancienX, * ancienY, tab [18][37]);
            }
            else
            {
            valueX=*ancienX-4;
            }
    break;
    case 2 :
       if(*ancienX==35)
        {
        system("cls");
        printf("RESTEZ SUR LE PLATEAU DE JEU");
        printf("\n");
        valueY=*ancienY;
        valueX=*ancienX;
        tab[*ancienY][*ancienX]=' ';
        *ancienX=valueX;
        *ancienY=valueY;
        tab[valueY][valueX]='p';
        Affiche_Plateau(tab);
        deplacement_J1_pt4(* ancienX, * ancienY, tab [18][37]);
        }
        else
        {
        valueX=*ancienX+4;
        }
    break;
    }
break;
}
if (choix ==1)
{
    valueX=*ancienX;
}
if (choix ==2)
{
    valueY=*ancienY;
}
tab[*ancienY][*ancienX]=' ';
*ancienX=valueX;
*ancienY=valueY;
tab[valueY][valueX]='p';
Affiche_Plateau(tab);
}
//=============================JOUEUR 3 =================================================================

void deplacement_J3_pt4 (int* ancienX, int* ancienY,char tab [18][37])
{
    int valueY,valueX,valueYchange;
    char valueXchange;
    int choix=0; int choix2=0;
    int verification;
    char pion;
    printf("Joueur 1 : c'est a vous de vous deplacer\n");
    printf(" Pour avancer vers l'avant ou l'arriere faites : 1 , pour avancer vers la gauche ou la droite faites : 2\n");
    fflush(stdin);
    do
    {
        scanf("%d",&choix);
    }while (choix<1 || choix>2);
switch(choix)
{
    case 1 :
    printf(" Pour avancer vers l'avant faites : 1 , pour avancer vers  l'arriere faites : 2\n");
    fflush(stdin);
    do
    {
        scanf("%d",&choix2);
    }while (choix2<1 || choix2>2);
    switch(choix2)
    {
    case 1 :
        valueY=*ancienY-2;
    break;
    case 2 :
         if(*ancienY==1)  // si sort du plateau
        {
          system("cls");
        printf("RESTEZ SUR LE PLATEAU DE JEU");
        printf("\n");
        valueY=*ancienY;
        valueX=*ancienX;
        tab[*ancienY][*ancienX]=' ';
        *ancienX=valueX;
        *ancienY=valueY;
        tab[valueY][valueX]='p';
        Affiche_Plateau(tab);
        deplacement_J3_pt4(* ancienX, * ancienY, tab [18][37]);
        }
        else
        {
        valueY=*ancienY+2;
        }
    break;
    }
break;
case 2 :
    printf(" Pour avancer vers la gauche faites : 1 , pour avancer vers la droite faites : 2\n");
    fflush(stdin);
    do
    {
        scanf("%d",&choix2);
    }while (choix2<1 || choix2>2);
    switch(choix2)
    {
        case 1 :
        if(*ancienX==3)
        {
        system("cls");
        printf("RESTEZ SUR LE PLATEAU DE JEU");
        printf("\n");
        valueY=*ancienY;
        valueX=*ancienX;
              tab[*ancienY][*ancienX]=' ';
        *ancienX=valueX;
        *ancienY=valueY;
              tab[valueY][valueX]='p';

            Affiche_Plateau(tab);
            deplacement_J3_pt4(* ancienX, * ancienY, tab [18][37]);
        }
        else
        {
        valueX=*ancienX-4;
        }
    break;
    case 2 :
       if(*ancienX==35)
        {
        system("cls");
        printf("RESTEZ SUR LE PLATEAU DE JEU");
        printf("\n");
        valueY=*ancienY;
        valueX=*ancienX;
              tab[*ancienY][*ancienX]=' ';

        *ancienX=valueX;
        *ancienY=valueY;
              tab[valueY][valueX]='p';
            Affiche_Plateau(tab);
            deplacement_J3_pt4(* ancienX, * ancienY, tab [18][37]);
        }
        else
        {
        valueX=*ancienX+4;
        }
    break;
    }
break;
}
if (choix ==1)
{
    valueX=*ancienX;
}
if (choix ==2)
{
    valueY=*ancienY;
}
tab[*ancienY][*ancienX]=' ';
*ancienX=valueX;
*ancienY=valueY;
tab[valueY][valueX]='p';
Affiche_Plateau(tab);
}
//=============================JOUEUR 2 =================================================================

void deplacement_J2_pt4 (int* ancienX, int* ancienY,char tab [18][37])
{
  int valueY,valueX,valueYchange;
    char valueXchange;
    int choix=0; int choix2=0;
    int verification;
    char pion;
    printf("Joueur 2 : c'est a vous de vous deplacer\n");
    printf(" Pour avancer vers l'avant ou l'arriere faites : 1 , pour avancer vers la gauche ou la droite faites : 2\n");
    fflush(stdin);
    do
    {
        scanf("%d",&choix);
    }while (choix<1 || choix>2);
switch(choix)
{
case 1 :
    printf(" Pour avancer vers l'avant faites : 1 , pour avancer vers l'arriere faites : 2\n");
    fflush(stdin);
    do
    {
        scanf("%d",&choix2);
    }while (choix2<1 || choix2>2);
        switch(choix2)
    {
    case 1 :

        valueX=*ancienX-4;

    break;
    case 2 :
       if(*ancienX==35)
        {
        system("cls");
        printf("RESTEZ SUR LE PLATEAU DE JEU");
        printf("\n");
        valueY=*ancienY;
        valueX=*ancienX;
              tab[*ancienY][*ancienX]=' ';
        *ancienX=valueX;
        *ancienY=valueY;
              tab[valueY][valueX]='p';
            Affiche_Plateau(tab);
            deplacement_J2(* ancienX, * ancienY, tab [18][37]);
        }
        else
        {
        valueX=*ancienX+4;
        }
    break;
    }
    break;
case 2 :
    printf(" Pour avancer vers la gauche faites : 1 , pour avancer vers  la droite faites : 2\n");
    fflush(stdin);
    do
    {
        scanf("%d",&choix2);
    }while (choix2<1 || choix2>2);
    switch(choix2)
        {
    case 1 :
        if(*ancienY==17)  // si sort du plateau vers l'arriere
        {
        system("cls");
        printf("RESTEZ SUR LE PLATEAU DE JEU");
        printf("\n");
        valueY=*ancienY;
        valueX=*ancienX;
        tab[*ancienY][*ancienX]=' ';
        *ancienX=valueX;
        *ancienY=valueY;
        tab[valueY][valueX]='p';
        Affiche_Plateau(tab);
        deplacement_J1(* ancienX, * ancienY, tab [18][37]);
        }
        else
        {
        valueY=*ancienY+2;
        }
    break;
    case 2 :
         if(*ancienY==1)  // si sort du plateau vers l'arriere
        {
        system("cls");
        printf("RESTEZ SUR LE PLATEAU DE JEU");
        printf("\n");
        valueY=*ancienY;
        valueX=*ancienX;
        tab[*ancienY][*ancienX]=' ';
        *ancienX=valueX;
        *ancienY=valueY;
        tab[valueY][valueX]='p';
        Affiche_Plateau(tab);
        deplacement_J1(* ancienX, * ancienY, tab [18][37]);
        }
        else
        {
        valueY=*ancienY-2;
        }
break;
    }
break;
}
if (choix ==1)
{
    valueX=*ancienX;
}
if (choix ==2)
{
    valueY=*ancienY;
}
tab[*ancienY][*ancienX]=' ';
*ancienX=valueX;
*ancienY=valueY;
tab[valueY][valueX]='p';
    Affiche_Plateau(tab);
}
//=============================JOUEUR 4 =================================================================

void deplacement_J4_pt4 (int* ancienX, int* ancienY,char tab [18][37])
{
    int valueY,valueX,valueYchange;
    char valueXchange;
    int choix=0; int choix2=0;
    int verification;
    char pion;
    printf("Joueur 2 : c'est a vous de vous deplacer\n");
    printf(" Pour avancer vers l'avant ou l'arriere faites : 1 , pour avancer vers la gauche ou la droite faites : 2\n");
    fflush(stdin);
    do
    {
        scanf("%d",&choix);
    }while (choix<1 || choix>2);
    switch(choix)
    {
case 1 :
    printf(" Pour avancer vers l'avant faites : 1 , pour avancer vers l'arriere faites : 2\n");
    fflush(stdin);
    do
    {
        scanf("%d",&choix2);
    }while (choix2<1 || choix2>2);
    switch(choix2)
    {
    case 1 :
        valueX=*ancienX+4;
    break;
    case 2 :
       if(*ancienX==35)
        {
        system("cls");
        printf("RESTEZ SUR LE PLATEAU DE JEU");
        printf("\n");
        valueY=*ancienY;
        valueX=*ancienX;
        tab[*ancienY][*ancienX]=' ';
        *ancienX=valueX;
        *ancienY=valueY;
        tab[valueY][valueX]='p';
        Affiche_Plateau(tab);
        deplacement_J4_pt4(* ancienX, * ancienY, tab [18][37]);
        }
        else
        {
        valueX=*ancienX-4;
        }
    break;
    }
case 2 :
    printf(" Pour avancer vers la gauche faites : 1 , pour avancer vers  la droite faites : 2\n");
    fflush(stdin);
    do
    {
        scanf("%d",&choix2);
    }while (choix2<1 || choix2>2);
        switch(choix2)
        {
    case 1 :
        if(*ancienY==17)  // si sort du plateau vers l'arriere
        {
        system("cls");
        printf("RESTEZ SUR LE PLATEAU DE JEU");
        printf("\n");
        valueY=*ancienY;
        valueX=*ancienX;
        for (int i = 0; i<18;i++)
        {
            for (int j = 0; j<37 ; j++)
            {
              tab[*ancienY][*ancienX]=' ';
            }
        }
        *ancienX=valueX;
        *ancienY=valueY;
        tab[valueY][valueX]='p';
        Affiche_Plateau(tab);
        deplacement_J4_pt4(* ancienX, * ancienY, tab [18][37]);
        }
        else
        {
        valueY=*ancienY+2;
        }
    break;
    case 2 :
         if(*ancienY==1)  // si sort du plateau vers l'arriere
        {
        system("cls");
        printf("RESTEZ SUR LE PLATEAU DE JEU");
        printf("\n");
        valueY=*ancienY;
        valueX=*ancienX;
        tab[*ancienY][*ancienX]=' ';
        *ancienX=valueX;
        *ancienY=valueY;
        tab[valueY][valueX]='p';
        Affiche_Plateau(tab);
        deplacement_J4_pt4(* ancienX, * ancienY, tab [18][37]);
        }
        else
        {
        valueY=*ancienY-2;
        }
    break;
    }
break;
}
if (choix ==1)
{
    valueX=*ancienX;
}
if (choix ==2)
{
    valueY=*ancienY;
}
tab[*ancienY][*ancienX]=' ';
*ancienX=valueX;
*ancienY=valueY;
tab[valueY][valueX]='p';
    Affiche_Plateau(tab);
}

*/
