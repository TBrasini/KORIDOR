#include "menu.h"
#include <stdio.h>
#include <stdlib.h>



void menu()
{
    system("cls");
    int a;
    int i = 0;
    int*X1; int*Y1;int*X2; int*Y2;int*X3; int*Y3;int*X4; int*Y4;char*pjeton1; char*pjeton2; char*pjeton3; char*pjeton4;char*pjoueur1[20]; char*pjoueur2[20]; char*pjoueur3[20]; char*pjoueur4[20];
     printf("                                                             \n");
    printf("                                                             \n");
    printf("                                                   MENU QORRIDOR  \n");
    printf("                                                             \n");
    printf("                                                             \n");
    printf("                                                             \n");
    printf("                                                             \n");
    printf("                                               1 : LANCER UNE PARTIE \n");
    printf("                                                             \n");
    printf("                                               2 : REPRENDRE UNE PARTIE \n");
    printf("                                                             \n");
    printf("                                               3 : AFFICHER L'AIDE \n");
    printf("                                                             \n");
    printf("                                               4: AFFICHER LE SCORE DES JOUEURS \n");
    printf("                                                             \n");
    printf("                                               5 : QUITTER LE JEU \n");
do{
    scanf("%d", &a);
}
while(a<1|| a>5);
                switch(a)
                {
                    case 1:
                            a = 1;
                            lancer_partie();
                            break;

                    case 2:
                            a = 2;
                            Reprendre_partie();
                            break;

                    case 3:
                            i = 3;
                            regle();
                            break;

                    case 4:
                            i = 4;
                            LectureScore();
                           break;

                    case 5:
                            a = 5;
                            // quitter();
                            break;

                }

        return 0;
        }

// Il faut completer l'intérieur des cas avec les futures fonctions.


