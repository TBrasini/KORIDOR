#include "Joueur_2_4_verif.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void VerfierJoueur(char joueurselec[20]);


void Joueur4()
{
    char joueur[4][20]; // nom des joueurs
    int j = 0; //compteur qui parcourt les noms
    int k = 0; //compteur qui parcourt l'ordre de passage
    char jeton[8]={'@','*','&','%','?','£','$'}; //tableau de caractères.



    int index1,index2,index3,index4; // pour mélanger les joueurs
    int index5, index6, index7, index8; // pour mélanger jetons
    int temporaire;//Echange les valeurs
    //Pointeurs
    char *pjoueur1 = &joueur[0][20];
    char *pjoueur2 = &joueur[1][20];
    char *pjoueur3 = &joueur[2][20];
    char *pjoueur4 = &joueur[3][20];

    char *tablordreprenom[20] = { //Tableau de pointeurs sur chaine de caractère, utilisé aussi pour
                                  // l'appel des joueurs dans l'ordre de passage determiné au hasard.
    pjoueur1,
    pjoueur2,
    pjoueur3,
    pjoueur4
    };


    char *pjeton1 = NULL;
    char *pjeton2 = NULL;
    char *pjeton3 = NULL;
    char *pjeton4 = NULL;

///////////////////////////////////////////////////////////////

     // Nom des joueurs :

     printf("Saisir le nom des joueurs : \n ");
     printf("\n");


     printf( "Nom du premier joueur : ");
     scanf("%s", pjoueur1);
     VerifierJoueur(&pjoueur1);
     printf("\n");


     printf("Nom du deuxieme joueur : ");
     scanf("%s", pjoueur2);
     VerifierJoueur(&pjoueur2);
     printf("\n");


     printf( "Nom du troisieme joueur : ");
     scanf("%s", pjoueur3);
     VerifierJoueur(&pjoueur3);
     printf("\n");


     printf("Nom du quatrieme joueur : ");
     scanf("%s", pjoueur4);
     VerifierJoueur(&pjoueur4);
     printf("\n");
     printf("\n");

    // Mélange des places et attribution de l'ordre de passage au hasard

    index1 = rand() % 4;
    do{
        index2 = rand() % 4;
    }while(index2 == index1);

    do{
        index3 = rand() % 4;
    }while(index3 == index1 || index3 == index2);

    index4 = 6 - index1 - index2 - index3;

    printf("Ordre de passage des joueurs determine de maniere aleatoire : \n");



    printf("    -Le premier joueur est : ");
    printf("%s \n", tablordreprenom[index1]);
    printf("    -Le deuxieme joueur est : ");
    printf("%s \n", tablordreprenom[index2]);
    printf("    -Le troisieme joueur est : ");
    printf("%s \n", tablordreprenom[index3]);
    printf("    -Le quatrieme joueur est : ");
    printf("%s \n", tablordreprenom[index4]);


    printf("\n");


    // Attribution des jetons au hasard


    printf("    Attribution d'un jeton au hasard pour chaque joueur \n");
    printf("    Les differents jetons disponibles sont : \n");

    // Affichage du tableau des jetons.
    for(k = 0; k < 8; k++)
        {
            printf(" %c \n", jeton[k]);
        }
    printf("\n");

    //Mélange des plaecs du tableau

    index5 = rand() % 7;
    do{
        index6 = rand() % 7;
    }while(index6 == index5);

    do{
        index7 = rand() % 7;
    }while(index7 == index5 || index7 == index6);

    do{
            index8 = rand() % 7;
    }while((index8 == index5) || (index8 == index6) || (index8 == index7));



    pjeton1 = &jeton[index5];
    pjeton2 = &jeton[index6];
    pjeton3 = &jeton[index7];
    pjeton4 = &jeton[index8];

    printf("    -Le joueur %s a le jeton : ", tablordreprenom[index1]);
    printf("%c \n", *pjeton1);
    printf("    -Le joueur %s a le jeton : ", tablordreprenom[index2]);
    printf("%c \n", *pjeton2);
    printf("    -Le joueur %s a le jeton : ", tablordreprenom[index3]);
    printf("%c \n", *pjeton3);
    printf("    -Le joueur %s a le jeton : ", tablordreprenom[index4]);
    printf("%c \n", *pjeton4);



}

void Joueur2()
{
    char joueur[4][20]; // nom des joueurs
    int j = 0; //compteur qui parcourt les jetons
    int k = 0; //compteur qui mélange les indices.
    char jeton[8]={'@','*','&','%','?','£','$'}; //tableau de caractères.



    int index1,index2,index3,index4; // pour mélanger les joueurs
    int index5, index6, index7, index8; // pour mélanger jetons
    int temporaire;//Echange les valeurs
    //Pointeurs
    char *pjoueur1 = &joueur[0][20];
    char *pjoueur2 = &joueur[1][20];


    char *tablordreprenom[20] = { //Tableau de pointeurs sur chaine de caractère, utilisé aussi pour
                                  // l'appel des joueurs dans l'ordre de passage determiné au hasard.
    pjoueur1,
    pjoueur2,
    };

    char *pjeton1 = NULL;
    char *pjeton2 = NULL;
/////////////////////////////////////////////////////////////////////



// Nom des joueurs :

     printf("Saisir le nom des joueurs : \n ");
     printf("\n");


     printf( "Nom du premier joueur : ");
     scanf("%s", pjoueur1 );
     VerifierJoueur(&pjoueur1);
     printf("\n");


     printf("Nom du deuxieme joueur : ");
     scanf("%s", pjoueur2);
     VerifierJoueur(&pjoueur2);
     printf("\n");
     printf("\n");




     j = rand()% 2;
     printf("Ordre de passage : ");

     if(j == 1)
     {
         printf("\n");
         printf("    - %s est premier \n", pjoueur1);
         printf("    - %s est deuxieme \n", pjoueur2);
     }
     else
     {
         printf("\n");
         printf("    - %s est premier \n", pjoueur2);
         printf("    - %s est deuxieme \n", pjoueur1);
     }

     //Faire tableau ordre de passage pour plateau

     printf("\n");


    // Choix du caractère :

     printf("    Les differents jetons disponibles sont : \n");

    // Affichage du tableau des jetons.

     for(j = 0; j < 8; j++)
     {
         printf(" %c \n", jeton[k]);
     }
     printf("\n");


    // Melange des jetons, ne pas forcemment afficher.

     for (k = 0; k < 100; k++)
     {
         index5 = rand() % 7;
         index6 = rand() % 7;
         temporaire = jeton[index5];
         jeton[index5] = jeton[index6];
         jeton[index6] = temporaire;
     }

    /*
//Table mélangée

    for(j = 0; j < 8; j++)
    {
        printf(" %c \n", jeton[j]);
    }


    */

     printf("\n");

     pjeton1 = &jeton[index5];
     pjeton2 = &jeton[index6];


     printf("    - Le joueur %s a le jeton ", pjoueur1);
     printf("%c \n", *pjeton1);
     printf("    - Le joueur %s a le jeton ", pjoueur2); //Pas besoin d'* parceque pjoueur est pointeur sur chaine de car
     printf("%c \n", *pjeton2); //Mettre * pour pointeur sur caractère.

}


//Appeler pjoueur1 ; pjoueur2; pjeton1; pjeton2


