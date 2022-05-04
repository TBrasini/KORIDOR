
#include "verifjoueur.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void VerifierJoueur(char *joueurselec[20])
{
    int l;
    int result1, result2;
    #define TailleMax 15
    char NomJoueur[TailleMax] = ""; //Création d'une chaine de caractère de la taille de TailleMax
    int estdedans = 0;
    int Score[TailleMax] = {0};
    int Numeroligne = 0;
    int ScoreInit;
    int j;


///////////////////////////////////////////////////////////////////////////

//Ouverture FichierJoueur :

    FILE * FichierJoueur = NULL;
    FichierJoueur = fopen("C:\\Users\\arnau\\OneDrive\\Bureau\\FichierJoueur.txt","r+");
    if(FichierJoueur == NULL)
        {printf("Erreur d'ouverture de fichier\n");}
    else
    {

        while((!feof(FichierJoueur)) && (estdedans == 0)) // On parcourt toutes les lignes du fichier
        {
            fscanf(FichierJoueur, "%s", NomJoueur);
            result1 = strcmp(NomJoueur, *joueurselec);
            Numeroligne += 1;

                if(result1 == 0) //Si le joueur inscrit est dans l'historique
                {
                    estdedans = 1;

                }
        }


    if (estdedans == 1) // Si on a trouvé le joueur
    {
        printf("Ce joueur existe deja \n");
        FILE * FichierScore = NULL;
        FichierScore = fopen("C:\\Users\\arnau\\OneDrive\\Bureau\\FichierScore.txt","r+");
        if(FichierScore == NULL)
            {printf("Erreur d'ouverture de fichier\n");}
        else
        {
            for (j = 0; j < 15; j++)
            {
                fscanf(FichierScore, "%d", &Score[j]);
            }
            printf("Votre score est : ");
            printf("%d\n", Score[Numeroligne - 1]);
        }
        fclose(FichierScore);
    }
    else
    {
        //fseek(FichierJoueur, 0, SEEK_END); //On se place à la fin du fichier
        fprintf(FichierJoueur,"%s\n",*joueurselec); //On inscrit le nom du nouveau joueur dans le fichier
        printf("Creation du nouveau joueur... \n");
        printf("Votre score est de 0 \n");

        //Ajout du score dans le fichier score
        FILE * FichierScore = NULL;
        FichierScore = fopen("C:\\Users\\arnau\\OneDrive\\Bureau\\FichierScore.txt","r+");
        if(FichierScore == NULL)
            {printf("Erreur d'ouverture de fichier\n");}
        else
        {
            fseek(FichierScore, 0, SEEK_END);
            fprintf(FichierScore, "\n");
            ScoreInit = 0;
            fprintf(FichierScore,"%d", ScoreInit); // Peut-etre modifier la valeur 0 et mettre un pointeur que l'on modifie plus tard.
    }
    fclose(FichierScore);
}

}
fclose(FichierJoueur);
}

