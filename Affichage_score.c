#include "Affichage_score.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>





void LectureScore() //Mettre surement les joueurs en paramètres.?
{
    char NomJoueur[20][10];
    int Score[15];
    int i = 0, j = 0, k; //compteurs
    char JoueurAffiche[15];
    char result1;
    int y,z; //compteurs
    int temp;
    int Place[15];
    char tempnom[20];


    //Ouverture FichierJoueur

    printf("                                                                       \n");
    printf("  / /   ___   __ _   __| |  ___  _ __ | |__    ___    __ _  _ __  __| |\n");
    printf(" / /   / _ \\ / _` | / _` | / _ \\| '__|| '_ \\  / _ \\  / _` || '__|/ _` |\n");
    printf("/ /___|  __/| (_| || (_| ||  __/| |   | |_) || (_) || (_| || |  | (_| |\n");
    printf("\\____/ \\___| \\__,_| \\__,_| \\___||_|   |_.__/  \\___/  \\__,_||_|   \\__,_|\n");
    printf("------------------------------------------------------------------------- \n");
    printf("                                                                       \n");

    printf("\n");
    printf("\n");
    printf("\n");

    FILE * FichierJoueur = NULL;
    FichierJoueur = fopen("C:\\Users\\arnau\\OneDrive\\Bureau\\FichierJoueur.txt","r+");

    if(FichierJoueur == NULL)
    {printf("Erreur d'ouverture du fichier");}

    else
    {

        while(!feof(FichierJoueur))
        {
            fscanf(FichierJoueur, "%s", NomJoueur[i]);
            i++;
            //printf("%s \n", NomJoueur);

        }
    }

            fclose(FichierJoueur);

    // Ouverture FichierScore

    FILE * FichierScore = NULL;
    FichierScore = fopen("C:\\Users\\arnau\\OneDrive\\Bureau\\FichierScore.txt","r+");

    if(FichierScore == NULL)
    {printf("Erreur d'ouverture du fichier");}

    else
    {
        while(!feof(FichierScore))
        {
            fscanf(FichierScore, "%d", &Score[j]);
            //printf("            %d", Score[j]);
            j++;

        }
    }

    printf("            PLACE :              SCORE :             JOUEUR :\n");
    printf("            -------              -------             -------- \n");
    printf("\n");



    for(y = 0; y < i-1; y++)
    {
        for(z = 0; z < i - 2; z++)
        {
            if(Score[z] < Score[z+1])
            {
                temp = Score[z];
                Score[z] = Score[z+1];
                Score[z+1] = temp;


                strcpy(tempnom, NomJoueur[z]);
                strcpy(NomJoueur[z], NomJoueur[z+1]);
                strcpy(NomJoueur[z+1], tempnom);

            }
        }
    }


    for(k = 0; k < i-1; k++)
    {
        printf("            %d :", k+1);
        printf("                 %d                  %s", Score[k], NomJoueur[k]);
        printf("\n");
    }
    fclose(FichierScore);

    printf("\n");
    printf("\n");
    printf("\n");

    printf("               APPUYER SUR 1. POUR REVENIR AU MENU...");

    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

}

