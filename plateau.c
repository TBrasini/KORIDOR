
#include <windows.h>



void Creation_plateau (char plat [18][37])
{
   int hauteur = 18;
    int largeur = 37;



    // initialisation du tableau comme ça tout ce qu'on ne remplit pas est un espace
    for(int i = 0; i<hauteur; i++)
    {
        for (int j = 0; j<largeur; j++)
        {
            plat[i][j]=' ';
        }
    }


    // tetes de colonnes et de ligne
    // tete de colonne
    for (int col = 0; col<largeur; col+=4)
    {
        plat[0][col] =' ';
        plat[0][col+1] =' ';
        plat[0][col+2] = ' ';
        plat[0][col+3] = 'A' +(col/4);

    }
    // tete de ligne
    for (int lin = 0; lin<hauteur; lin+=2)
    {
        plat[lin][0] = ' ';
        plat[lin+1][0] = '1' +(lin/2);
    }
    // enlever les premieres cases a la main
    plat[0][0] = ' ';
    plat[0][1] = ' ';

    //cadrilliage
    // ligne par ligne
    for (int lin = 1; lin<hauteur; lin++)
    {
        // si cest impair ||   ||   ||   ||
        if (lin % 2 != 0)
        {
            for (int i = 2; i<largeur-3; i+=4)
            {
                plat[lin][i]=' ';
                plat[lin][i+1]=' ';
                plat[lin][i+2]=' ';
                plat[lin][i+3]=0xBA;
            }
        }
            // si cest pair ===+===+===+===+
        else if (lin % 2 == 0)
        {
            for (int i = 2; i<largeur-3; i+=4)
            {
                plat[lin][i]=0xFE;
                plat[lin][i+1]=0xCD;
                plat[lin][i+2]=0xFE;
                plat[lin][i+3]=0xDB;
            }
            // complete la fin de la ligne (===+)===
            plat[lin][largeur-3]=0xFE;
            plat[lin][largeur-2]=0xCD;
            plat[lin][largeur-1]=0xFE;
        }
    }
}

void Affiche_Plateau(char plat [18][37])
{
    int hauteur = 18;
    int largeur = 37;

    // affichage du tableau
    for(int i = 0; i<hauteur; i++)
    {
        gotoligcol(i + 2,70);
        for (int j = 0; j<largeur; j++)
        {
            printf("%c", plat[i][j]);
        }
        printf("\n");
    }

    for(int j = 0; j < 8; j++)
    {
        Color1(2,0);
        gotoligcol((j+1)*2 + 2, 108);
        printf("%d", j + 1);

    }
    for(int j = 0; j < 8; j++)
    {
        gotoligcol(20, 75 + 4*j);
        printf("%d", j + 1);


    }
    Color1(15, 0);

}

