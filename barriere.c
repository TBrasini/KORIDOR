#include<stdio.h>
#include "plateau.h"

int barriere(char tab[18][37],int*compteur)
{
    compteur++;
    gotoligcol(4,0);
    int choix;
    char car1;
    char car2;

    int ver1;
    int ver2;

    int ligne1;
    int col2;

    printf(" Tapez :\n 1 Barriere Horizontale\n 2 Barriere Verticale\n");
    do{scanf("%d", &choix);
    }while(choix != 1 && choix != 2);

    switch(choix){
    case 1:

        do{
            do{printf("2 lettres pour définir l'emplacement horizontal\nATTENTION Pressez entree pour valider chaque lettre\n");
                printf("-> ");
                    do{fflush(stdin);scanf("%c", &car1);
                    }while(car1 < 'A' || car1 > 'I');
                    printf("\n-> ");
                    do{fflush(stdin);scanf("%c", &car2);
                    }while(car2 < 'A' || car2 > 'I');
            }while(car1 != car2-1 && car1 != car2+1);


            printf("Choisir la ligne à laquelle placer la barrère");
            do{scanf("%d", &ligne1);
            }while(ligne1 < 1 || ligne1 > 8);
        }while( (  tab[ligne1*2][((int)((int)((car1 + (int) car2)/(float)2) - 64.5) * 4) +7] == 'b'  )   ||
        (   tab[ligne1*2][((int)((int)((car1 + (int) car2)/(float)2) - 64.5) * 4) +3] == 'b')
       || ( (tab[ligne1*2 +1][((int)((int)((car1 + (int) car2)/(float)2) - 64.5) * 4) +5]=='b')&&
           (tab[ligne1*2 -1][((int)((int)((car1 + (int) car2)/(float)2) - 64.5) * 4) +5]=='b')) );



        tab[ligne1*2][(((int)car1 - 65) * 4) +3] = 'b';
        tab[ligne1*2][(((int)car2 - 65) * 4) +3] = 'b';






        break;

    case 2:
        do{
            do{
                printf("2 chiffres pour définir l'emplacement vertical\nATTENTION Pressez entree pour valider chaque chiffre\n");
                printf("-> ");
                do{scanf("%d", &ver1);
                }while(ver1 < 1 || ver1 > 9);
                printf("\n-> ");
                do{scanf("%d", &ver2);
                }while(ver2 < 1 || ver2 > 9);
            }while(ver1 != ver2-1 && ver1 != ver2+1);

            printf("\nChoisir la colonne à laquelle placer la barrère");
            do{scanf("%d", &col2);
            }while(col2 < 1 || col2 > 8);


        }while( (tab[(int)(((ver1 + ver2)/(float)2)-0.5) * 2 - 1][(col2 * 4) +1] == 'b') ||
               (tab[(int)(((ver1 + ver2)/(float)2)-0.5) * 2 + 1][(col2 * 4) +1] == 'b')
               || ( (tab[(int)(((ver1 + ver2)/(float)2)-0.5) * 2][(col2 * 4) +3] == 'b') &&
          (tab[(int)(((ver1 + ver2)/(float)2)-0.5) * 2][(col2 * 4) -1] == 'b'))) ;



        tab[ver1*2 -1][(col2 * 4) +1] = 'b';
        tab[ver2*2 -1][(col2* 4) +1] = 'b';




        break;
    }
    Affiche_Plateau(tab);

}
