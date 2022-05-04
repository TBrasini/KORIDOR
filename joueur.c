
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void Joueurs ()
{
        int i; //nombre de joueurs
        char joueur[4][20]; // nom des joueurs
        int e, f, g, h; // ordre des joueurs
        int j = 0; //compteur qui parcourt les noms
        int k = 0; //compteur qui parcourt l'ordre de passage (utile pour le cas de 4 joueurs)
        int l = 0; //compteur caractere au hasard
        char jeton[8]={'@','*','&','%','?','£','$'}; //tableau de caractères.
        srand(time(NULL));
        char tablordre[][10] = {
        "premier",
        "deuxieme",
        "troisieme",
        "quatrieme"
        };

    //tableau que l'on parcourir pour attribuer l'ordre de chaque joueur.
        int index1, index2, index3, index4;
        int temporaire;


        ///////////////////////////////////////////////////////////



    //Nombre de joueurs.

        printf("Choisir le nombre de joueurs : \n");
        printf("2 ou 4 ? \n");
        scanf("%d", &i);
        printf("\n");

    // Nom des joueurs :

         printf("Saisir le nom des joueurs : \n ");
         printf("\n");


         if (i == 2)
         {
             printf( "Nom du premier joueur : ");
             scanf("%s", joueur[0]);
             printf("\n");
             fflush(stdin);

             printf("Nom du deuxieme joueur : ");
             scanf("%s", joueur[1]);
             printf("\n");
             fflush(stdin);
             printf("\n");


             // mettre la fonction score qui associe le socre d'un ancien joueur ou créée un nouveau profil.



                j = rand()% 2;
                printf("Ordre de passage : ");

                if(j == 1)
                {
                    printf("\n");
                    printf("    - %s est premier \n", joueur[0]);
                    printf("    - %s est deuxieme \n", joueur[1]);
                }
                else
                {
                    printf("\n");
                    printf("    - %s est premier. \n", joueur[1]);
                    printf("    - %s est deuxieme \n", joueur[0]);
                }

                printf("\n");


                    // Choix du caractère :

                printf("    Les differents jetons disponibles sont : \n");

                // Affichage du tableau des jetons.
                for(k = 0; k < 8; k++)
                {
                    printf(" %c \n", jeton[k]);
                }
                printf("\n");


                // Melange des jetons, ne pas forcemment afficher.

                for (i = 0; i < 100; i++)
                {
                    index1 = rand() % 8;
                    index2 = rand() % 8;
                    temporaire = jeton[index1];
                    jeton[index1] = jeton[index2];
                    jeton[index2] = temporaire;
                }

                /*

                for(j = 0; j < 8; j++)
                {
                    printf(" %c \n", jeton[j]);
                }


                */

                printf("\n");


                printf("    - Le joueur %s a le jeton ", joueur[0]);
                printf("%c \n", jeton[0]);
                printf("    - Le joueur %s a le jeton ", joueur[1]);
                printf("%c \n", jeton[1]);

        }

        ////////////////////////////////////////////////////////////


            // Si on a 4 joueurs :

         else
         {

             printf( "Nom du premier joueur : ");
             scanf("%s", joueur[0]);
             printf("\n");
             fflush(stdin);

             printf("Nom du deuxieme joueur : ");
             scanf("%s", joueur[1]);
             printf("\n");
             fflush(stdin);

             printf( "Nom du troisieme joueur : ");
             scanf("%s", joueur[2]);
             printf("\n");
             fflush(stdin);

             printf("Nom du quatrieme joueur : ");
             scanf("%s", joueur[3]);
             printf("\n");
             fflush(stdin);
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

    printf("    -Le joueur %s est : ", joueur[0]);
    printf("%s \n", tablordre[index1]);
    printf("    -Le joueur %s est : ", joueur[1]);
    printf("%s \n", tablordre[index2]);
    printf("    -Le joueur %s est : ", joueur[2]);
    printf("%s \n", tablordre[index3]);
    printf("    -Le joueur %s est : ", joueur[3]);
    printf("%s \n", tablordre[index4]);

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




    index1 = rand() % 8;
    do{
        index2 = rand() % 8;
    }while(index2 == index1);

    do{
        index3 = rand() % 8;
    }while(index3 == index1 || index3 == index2);

    do{
            index4 = rand() % 8;
    }while((index4 == index1) || (index4 == index2) || (index4 == index3));


    printf("    -Le joueur %s a le jeton : ", joueur[0]);
    printf("%c \n", jeton[index1]);
    printf("    -Le joueur %s a le jeton : ", joueur[1]);
    printf("%c \n", jeton[index2]);
    printf("    -Le joueur %s a le jeton : ", joueur[2]);
    printf("%c \n", jeton[index3]);
    printf("    -Le joueur %s a le jeton : ", joueur[3]);
    printf("%c \n", jeton[index4]);

 }
}
