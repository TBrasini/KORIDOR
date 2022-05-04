 #include "partiedejeu.h"
 #include "plateau.h"

 void lancer_partie ()
 {

    system("cls");
    int vict = 0;
    char*gagnant[20];
    int*xsetupj1 = 19 ,*ysetupj1 = 1;
    int*xsetupj2 = 19,*ysetupj2 = 17;
    int*xsetupj2_4 = 35,*ysetupj2_4 = 9; //joueur 2 n'est pas au même endroit à 4 joueurs
    int*xsetupj3 = 19 ,*ysetupj3 = 17;
    int*xsetupj4 = 3,*ysetupj4 = 9;
    int nombre_joueurs;
    char*JetonJ1;
    char*JetonJ2;
    char*JetonJ3;
    char*JetonJ4;
    char*j1[20];
    char*j2[20];
    char*j3[20];
    char*j4[20];
    int nbrBar1 = 0;
    int nbrBar2 = 0;
    int nbrBar3 = 0;
    int nbrBar4 = 0;
    int quitter ;int joeur1 ;int joeur2 ;int joeur3 ;int joeur4 ;
    char plateau [18][37];
    Creation_plateau(plateau);
    Affiche_Plateau(plateau);
    ////////////////////////////////////////////////////////
    //===========VARIABBLE ET INITILALISATION========/////

    gotoligcol(0,0);
    printf("             CHOISIR LE NOMBRE DE JOUEURS\n");
    printf("\n");
    printf("rentrer : 1  pour 2 joueurs \n rentrer : 2 pour 4 joueurs \n");
    printf("\n");
     do
     {
      scanf("%d",&nombre_joueurs);
     }while(nombre_joueurs<1||nombre_joueurs>2);





     switch(nombre_joueurs)
        {
        case 1:
            Joueur2(&JetonJ1,&JetonJ2,&j1,&j2);
            SetupDeplacement(&xsetupj1, &ysetupj1,&xsetupj2, &ysetupj2, plateau,  JetonJ1,  JetonJ2);


            do{
                system("cls");
            printf("        Avancer  : 1           Barriere : 2         Passer son tour   :  3         Quitter la partie   : 4\n");
            printf("%s a vous de jouer\n votre pion est %c\n Il vous reste %d barrieres\n",j1, JetonJ1, 10-nbrBar1);
            Affiche_Plateau(plateau);
            gotoligcol(4, 0);
             do{
              scanf("%d",&joeur1);
              if (nbrBar1 == 10)
              {
                  do{
                    printf("vous avez epuise votre stock de barrieres\n Choisissez une autre action\n");
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
                            interruption(&xsetupj1, &ysetupj1,&xsetupj2, &ysetupj2,&xsetupj3,&ysetupj3,&xsetupj4,&ysetupj4,&JetonJ1,&JetonJ2,&JetonJ3,&JetonJ4,j1,j2,j3,j4);
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
            printf("%s a vous de jouer\n votre pion est %c\n Il vous reste %d barrieres\n",j2, JetonJ2, 10-nbrBar2);
            Affiche_Plateau(plateau);
            gotoligcol(4, 0);
            do{
                scanf("%d",&joeur2);
                if (nbrBar2 == 10)
                {
                    do{
                    printf("vous avez epuise votre stock de barrieres\n Choisissez une autre action\n");
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
                            interruption(&xsetupj1, &ysetupj1,&xsetupj2, &ysetupj2,&xsetupj3,&ysetupj3,&xsetupj4,&ysetupj4,&JetonJ1,&JetonJ2,&JetonJ3,&JetonJ4,j1,j2,j3,j4);
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

            Joueur4(&JetonJ1,&JetonJ2,&JetonJ3,&JetonJ4,&j1,&j2,&j3,&j4);
            SetupDeplacement4J(&xsetupj1, &ysetupj1,&xsetupj2_4, &ysetupj2_4,&xsetupj3, &ysetupj3,&xsetupj4, &ysetupj4, plateau, JetonJ1, JetonJ2, JetonJ3, JetonJ4);


            do{
                system("cls");
                printf("        Avancer  : 1           Barriere : 2         Passer son tour   :  3         Quitter la partie   : 4\n");
                printf("%s a vous de jouer\n votre pion est %c\n Il vous reste %d barrieres\n", j1,JetonJ1, 5-nbrBar1);
                Affiche_Plateau(plateau);
                gotoligcol(4, 0);
                 do{
                  scanf("%d",&joeur1);
                  if (nbrBar1 == 5)
                    {
                    do{
                        printf("vous avez epuise votre stock de barrieres\n Choisissez une autre action\n");
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
                            interruption(&xsetupj1, &ysetupj1,&xsetupj2_4, &ysetupj2_4,&xsetupj3,&ysetupj3,&xsetupj4,&ysetupj4,&JetonJ1,&JetonJ2,&JetonJ3,&JetonJ4,j1,j2,j3,j4);
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
            printf("%s a vous de jouer\n votre pion est %c\n Il vous reste %d barrieres\n", j2,JetonJ2, 5-nbrBar2);
            Affiche_Plateau(plateau);
            gotoligcol(4, 0);
            do{
            scanf("%d",&joeur2);
            if (nbrBar2 == 5)
                {
                    do{
                    printf("vous avez epuise votre stock de barrieres\n Choisissez une autre action\n");
                    scanf("%d", &joeur2);
                    }while (joeur2 != 3 && joeur2 != 4 && joeur2 !=1);
                }
            }while(joeur2<1||joeur2>4);


            switch (joeur2)
            {
                case 1 :
                            Deplacement(&xsetupj2_4, &ysetupj2_4, plateau, JetonJ2);
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
                            interruption(&xsetupj1, &ysetupj1,&xsetupj2_4, &ysetupj2_4,&xsetupj3,&ysetupj3,&xsetupj4,&ysetupj4,&JetonJ1,&JetonJ2,&JetonJ3,&JetonJ4,j1,j2,j3,j4);
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
            printf("%s a vous de jouer\n votre pion est %c\n Il vous reste %d barrieres\n", j3,JetonJ3, 5-nbrBar3);
            Affiche_Plateau(plateau);
            gotoligcol(4, 0);
            do{
            scanf("%d",&joeur3);
             if (nbrBar3 == 5)
                {
                    do{
                    printf("vous avez epuise votre stock de barrieres\n Choisissez une autre action\n");
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
                            interruption(&xsetupj1, &ysetupj1,&xsetupj2_4, &ysetupj2_4,&xsetupj3,&ysetupj3,&xsetupj4,&ysetupj4,&JetonJ1,&JetonJ2,&JetonJ3,&JetonJ4,j1,j2,j3,j4);
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
            printf("%s a vous de jouer\n votre pion est %c\n Il vous reste %d barrieres\n", j4,JetonJ4, 5-nbrBar4);
            Affiche_Plateau(plateau);
            gotoligcol(4, 0);
            do{
            scanf("%d",&joeur4);
            if (nbrBar4 == 5)
                {
                    do{
                    printf("vous avez epuise votre stock de barrieres\n Choisissez une autre action\n");
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
                            interruption(&xsetupj1, &ysetupj1,&xsetupj2_4, &ysetupj2_4,&xsetupj3,&ysetupj3,&xsetupj4,&ysetupj4,&JetonJ1,&JetonJ2,&JetonJ3,&JetonJ4,j1,j2,j3,j4);
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


