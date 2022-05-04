#include"reprendre_partie.h"

void SetupDeplacement_reprendrepartie(char tab[18][37],int*X1, int*Y1,int*X2,int*Y2,int*X3, int*Y3, int*X4, int*Y4,char* pjeton1, char* pjeton2, char* pjeton3, char* pjeton4,char*pjoueur1[20], char*pjoueur2[20], char*pjoueur3[20], char*pjoueur4[20])
{
    Recip_Save(&X1,&Y1,&X2,&Y2,&X3,&Y3,&X4,&Y4,&pjeton1,&pjeton2,&pjeton3,&pjeton4,&pjoueur1,&pjoueur2,&pjoueur3,&pjoueur4);
    tab[*Y1][*X1] = pjeton1;
    tab[*Y2][*X2] = pjeton2;
}

void SetupDeplacement_reprendrepartie_4j(char tab[18][37],int*X1, int*Y1,int*X2,int*Y2,int*X3, int*Y3, int*X4, int*Y4,char* pjeton1, char* pjeton2, char* pjeton3, char* pjeton4,char*pjoueur1[20], char*pjoueur2[20], char*pjoueur3[20], char*pjoueur4[20])
{
    Recip_Save(&X1,&Y1,&X2,&Y2,&X3,&Y3,&X4,&Y4,&pjeton1,&pjeton2,&pjeton3,&pjeton4,&pjoueur1,&pjoueur2,&pjoueur3,&pjoueur4);
    tab[*Y1][*X1] = pjeton1;
    tab[*Y2][*X2] = pjeton2;
    tab[*Y3][*X3] = pjeton3;
    tab[*Y4][*X4] = pjeton4;
}


 void Reprendre_partie (char tab[18][37],int*X1, int*Y1,int*X2,int*Y2,int*X3, int*Y3, int*X4, int*Y4,char* pjeton1, char* pjeton2, char* pjeton3, char* pjeton4,char*pjoueur1[20], char*pjoueur2[20], char*pjoueur3[20], char*pjoueur4[20])
 {
    char plateau [18][37];
    Creation_plateau(plateau);
    system("cls");
    int vict = 0;
    char*gagnant[20];
    Recip_Save(&X1,&Y1,&X2,&Y2,&X3,&Y3,&X4,&Y4,&pjeton1,&pjeton2,&pjeton3,&pjeton4,&pjoueur1,&pjoueur2,&pjoueur3,&pjoueur4); // on appelle la fonction pour récupérer nos sauvegarde du fichier
    Affiche_Plateau(plateau);
    int*xsetupj1 = X1 ;int*ysetupj1 = Y1;
    int*xsetupj2 = X2;int*ysetupj2 = Y2;
    int*xsetupj2_4 = X2;int*ysetupj2_4 = X2; //joueur 2 n'est pas au même endroit à 4 joueurs
    int*xsetupj3 = X3 ;int*ysetupj3 = Y3;
    int*xsetupj4 = X4;int*ysetupj4 = Y4;
    int nombre_joueurs;
    char* JetonJ1 = pjeton1;
    char* JetonJ2 = pjeton2;
    char* JetonJ3 = pjeton3;
    char* JetonJ4 = pjeton4;

    char* j1[20] ;
    char* j2[20] ;
    char* j3[20] ;
    char* j4[20] ;

    int nbrBar1 = 0;
    int nbrBar2 = 0;
    int nbrBar3 = 0;
    int nbrBar4 = 0;
    int quitter ;int joeur1 ;int joeur2 ;int joeur3 ;int joeur4 ;
    Affiche_Plateau(plateau);
    ////////////////////////////////////////////////////////
    //===========VARIABBLE ET INITILALISATION========/////

    gotoligcol(0,0);
    printf("             CHOISIR LE NOMBRE DE JOUEURS\n");
    printf("\n");
    printf("rentrer 1 pour 2 joueurs /// rentrer 2 pour 4 joueurs \n");
    printf(" Pour quitter  \n");
     do
     {
      scanf("%d",&nombre_joueurs);
     }while(nombre_joueurs<1||nombre_joueurs>2);



     switch(nombre_joueurs)
        {
        case 1:
            Recip_Save_plateau(plateau);  // recuper les barrieres
            SetupDeplacement(&xsetupj1, &ysetupj1,&xsetupj2, &ysetupj2,  plateau, JetonJ1,JetonJ2); // on setup les pions
            do{
                system("cls");
            printf("        Avancer  : 1           Barriere : 2         Passer son tour   :  3         Quitter la partie   : 4\n");
            printf("Joueur 1 : a vous de jouer\n votre piont est %c\n Il vous reste %d barrieres\n",JetonJ1, 10-nbrBar1);
            Affiche_Plateau(plateau);
            gotoligcol(4, 0);
             do{
              scanf("%d",&joeur1);
              if (nbrBar1 == 10)    // blindage barriere
              {
                  do{
                    printf("vous avez épuisé votre stock de barrieres\n Choisissez une autre action\n");
                    scanf("%d", &joeur1);
                    }while (joeur1 != 3 && joeur1 != 4 && joeur1 !=1);
              }

             }while(joeur1<1||joeur1>4);


             switch(joeur1)
             {
                case 1 :
                            Deplacement(&xsetupj1, &ysetupj1, plateau, JetonJ1);
                            break;
                case 2 :
                            barriere(plateau);
                            nbrBar1+=1;
                            break;
                case 3 :
                            printf("                        VOUS PASSER VOTRE TOUR");
                            break;
                case 4 :
                            interruption_plateau(plateau);
                            interruption(&xsetupj1, &ysetupj1,&xsetupj2, &ysetupj2,&xsetupj3,&ysetupj3,&xsetupj4,&ysetupj4,&JetonJ1,&JetonJ2,&JetonJ3,&JetonJ4,&j1,&j2,&j3,&j4);
                            break;
             }

            if (victoireJ1(JetonJ1, plateau) == 1)
            {
                char d;
                vict = 1;
                gotoligcol(10,0);
                printf("BRAVO JOUEUR 1 GAGNE");
                *gagnant = j1;
                d = getch();
                menu();


            }

            system("cls");
            printf("        Avancer  : 1           Barriere : 2         Passer son tour   :  3         Quitter la partie   : 4\n");
            printf("Joueur 2 a vous de jouer\n votre piont est %c\n Il vous reste %d barrieres\n",JetonJ2, 10-nbrBar2);
            Affiche_Plateau(plateau);
            gotoligcol(4, 0);
            do{
                scanf("%d",&joeur2);
                if (nbrBar2 == 10)
                {
                    do{
                    printf("vous avez épuisé votre stock de barrieres\n Choisissez une autre action\n");
                    scanf("%d", &joeur2);
                    }while (joeur2 != 3 && joeur2 != 4 && joeur2 !=1);
                }
            }while(joeur2<1||joeur2>4);


            switch (joeur2)
            {
                case 1 :
                            Deplacement(&xsetupj2, &ysetupj2, plateau, JetonJ2);
                            break;
                case 2 :
                            barriere(plateau);
                            nbrBar2+=1;
                            break;
                case 3 :
                            printf("                        VOUS PASSER VOTRE TOUR");
                            break;
                case 4 :
                            interruption_plateau(plateau);
                            interruption(&xsetupj1, &ysetupj1,&xsetupj2, &ysetupj2,&xsetupj3,&ysetupj3,&xsetupj4,&ysetupj4,&JetonJ1,&JetonJ2,&JetonJ3,&JetonJ4,&j1,&j2,&j3,&j4);
                            break;
             }

             if (victoireJ2(JetonJ2, plateau) == 1)
            {
                char d;
                vict = 1;
                gotoligcol(10,0);
                printf("BRAVO JOUEUR 2 GAGNE");
                *gagnant = j2;
                d = getch();
                menu();

            }

            }while(vict == 0);










//////////////////////////////////////////////////////////////////////////////////////// CAS 4 JOUEURS
            case 2:
            Recip_Save_plateau(plateau);
            SetupDeplacement4J(&xsetupj1, &ysetupj1,&xsetupj2, &ysetupj2,&xsetupj3, &ysetupj3,&xsetupj4, &ysetupj4, plateau, JetonJ1, JetonJ2, JetonJ3, JetonJ4);


            do{
                system("cls");
                printf("        Avancer  : 1           Barriere : 2         Passer son tour   :  3         Quitter la partie   : 4\n");
                printf("Joueur 1 a vous de jouer\n votre piont est %c\n Il vous reste %d barrieres\n",JetonJ1, 5-nbrBar1);
                Affiche_Plateau(plateau);
                gotoligcol(4, 0);
                 do{
                  scanf("%d",&joeur1);
                  if (nbrBar1 == 5)
                    {
                    do{
                        printf("vous avez épuisé votre stock de barrieres\n Choisissez une autre action\n");
                        scanf("%d", &joeur1);
                        }while (joeur1 != 3 && joeur1 != 4 && joeur1 !=1);
                    }
                 }while(joeur1<1||joeur1>4);


             switch(joeur1)
             {
                case 1 :
                            Deplacement(&xsetupj1, &ysetupj1, plateau, JetonJ1);
                            break;
                case 2 :
                            barriere(plateau);
                            nbrBar1+=1;
                            break;
                case 3 :
                            printf("                        VOUS PASSER VOTRE TOUR");
                            break;
                case 4 :
                            interruption_plateau(plateau);
                            interruption(&xsetupj1, &ysetupj1,&xsetupj2, &ysetupj2,&xsetupj3,&ysetupj3,&xsetupj4,&ysetupj4,&JetonJ1,&JetonJ2,&JetonJ3,&JetonJ4,&j1,&j2,&j3,&j4);
                            break;
             }

            if (victoireJ1(JetonJ1, plateau) == 1)
            {
                char d;
                vict = 1;
                gotoligcol(10,0);
                printf("BRAVO JOUEUR 1 GAGNE");
                *gagnant = j1;

                d = getch();
                menu();


            }

            system("cls");
            printf("        Avancer  : 1           Barriere : 2         Passer son tour   :  3         Quitter la partie   : 4\n");
            printf("Joueur 2 a vous de jouer\n votre piont est %c\n Il vous reste %d barrieres\n",JetonJ2, 5-nbrBar2);
            Affiche_Plateau(plateau);
            gotoligcol(4, 0);
            do{
            scanf("%d",&joeur2);
            if (nbrBar2 == 5)
                {
                    do{
                    printf("vous avez épuisé votre stock de barrieres\n Choisissez une autre action\n");
                    scanf("%d", &joeur2);
                    }while (joeur2 != 3 && joeur2 != 4 && joeur2 !=1);
                }
            }while(joeur2<1||joeur2>4);


            switch (joeur2)
            {
                case 1 :
                            Deplacement(&xsetupj2, &ysetupj2, plateau, JetonJ2);
                            break;
                case 2 :
                            barriere(plateau);
                            nbrBar2+=1;
                            break;
                case 3 :
                            printf("                        VOUS PASSER VOTRE TOUR");

                            break;
                case 4 :
                            interruption_plateau(plateau);
                            interruption(&xsetupj1, &ysetupj1,&xsetupj2, &ysetupj2,&xsetupj3,&ysetupj3,&xsetupj4,&ysetupj4,&JetonJ1,&JetonJ2,&JetonJ3,&JetonJ4,&j1,&j2,&j3,&j4);
                            break;
             }


             if (victoireJ2_4(JetonJ2, plateau) == 1)
            {
                char d;
                vict = 1;
                gotoligcol(10,0);
                printf("BRAVO JOUEUR 2 GAGNE");
                *gagnant = j2;
                d = getch();
                menu();


            }



            system("cls");
            printf("        Avancer  : 1           Barriere : 2         Passer son tour   :  3         Quitter la partie   : 4\n");
            printf("Joueur 3 a vous de jouer\n votre piont est %c\n Il vous reste %d barrieres\n",JetonJ3, 5-nbrBar3);
            Affiche_Plateau(plateau);
            gotoligcol(4, 0);
            do{
            scanf("%d",&joeur3);
             if (nbrBar3 == 5)
                {
                    do{
                    printf("vous avez épuisé votre stock de barrieres\n Choisissez une autre action\n");
                    scanf("%d", &joeur3);
                    }while (joeur3 != 3 && joeur3 != 4 && joeur3 !=1);
                }
            }while(joeur3<1||joeur3>4);


            switch (joeur3)
            {
                case 1 :
                            Deplacement(&xsetupj3, &ysetupj3, plateau, JetonJ3);
                            break;
                case 2 :
                            barriere(plateau);
                            nbrBar3+=1;
                            break;
                case 3 :
                            printf("                        VOUS PASSER VOTRE TOUR");
                            break;
                case 4 :
                            interruption_plateau(plateau);
                            interruption(&xsetupj1, &ysetupj1,&xsetupj2, &ysetupj2,&xsetupj3,&ysetupj3,&xsetupj4,&ysetupj4,&JetonJ1,&JetonJ2,&JetonJ3,&JetonJ4,&j1,&j2,&j3,&j4);
                            break;
             }


             if (victoireJ3(JetonJ3, plateau) == 1)
            {
                char d;
                vict = 1;
                gotoligcol(10,0);
                printf("BRAVO JOUEUR 3 GAGNE");
                *gagnant = j3;
                d = getch();
                menu();
            }




            system("cls");
            printf("        Avancer  : 1           Barriere : 2         Passer son tour   :  3         Quitter la partie   : 4\n");
            printf("Joueur 4 a vous de jouer\n votre piont est %c\n Il vous reste %d barrieres\n",JetonJ4, 5-nbrBar4);
            Affiche_Plateau(plateau);
            gotoligcol(4, 0);
            do{
            scanf("%d",&joeur4);
            if (nbrBar4 == 5)
                {
                    do{
                    printf("vous avez épuisé votre stock de barrieres\n Choisissez une autre action\n");
                    scanf("%d", &joeur4);
                    }while (joeur4 != 3 && joeur4 != 4 && joeur4 !=1);
                }
            }while(joeur4<1||joeur4>4);


            switch(joeur4)
            {
                case 1 :
                            Deplacement(&xsetupj4, &ysetupj4, plateau, JetonJ4);
                            break;
                case 2 :
                            barriere(plateau);
                            nbrBar4+=1;
                            break;
                case 3 :
                            printf("                        VOUS PASSER VOTRE TOUR");
                            break;
                case 4 :
                            interruption_plateau(plateau);
                            interruption(&xsetupj1, &ysetupj1,&xsetupj2, &ysetupj2,&xsetupj3,&ysetupj3,&xsetupj4,&ysetupj4,&JetonJ1,&JetonJ2,&JetonJ3,&JetonJ4,&j1,&j2,&j3,&j4);
                            break;
             }



             if (victoireJ4(JetonJ4, plateau) == 1)
            {
                char d;
                vict = 1;
                gotoligcol(10,0);
                printf("BRAVO JOUEUR 4 GAGNE");
                *gagnant = j4;
                d = getch();
                menu();

            }



        }while(vict == 0);



        }
}





























