#include "stdlib.h"
#include "stdio.h"
void EcritureScore(char *Joueurgagnant[20]) //pas sur
{
    #define TailleMax 15
    int Numeroligne = 0;
    int estdedans = 0;
    char NomJoueur[TailleMax] = "";
    int Score[TailleMax] = {0};
    int result1;


    FILE*FichierJoueur = NULL;
    FichierJoueur = fopen("FichierJoueur.txt","r+");
    if(FichierJoueur == NULL)
        {printf("Erreur d'ouverture du fichier");}
    else
    {

    while((!feof(FichierJoueur)) && (estdedans == 0)) // On parcourt toutes les lignes du fichier
    {
        fscanf(FichierJoueur, "%s", NomJoueur);
        result1 = strcmp(NomJoueur, *Joueurgagnant); // On localise le joueur dans le fichier.
        Numeroligne += 1;

            if(result1 == 0) //Si le joueur inscrit est dans l'historique
            {
                estdedans = 1;

            }
    }

        if (estdedans == 1)
        {
            FILE*FichierScore = NULL;
            FichierScore = fopen("FichierScore.txt","r+");
            if(FichierScore == NULL)
            {printf("Erreur d'ouverture du fichier");}

            else
            {
                fscanf("%d", &Score[Numeroligne]); // On enregistre le score actuel du gagnant.
                fseek(FichierScore, Numeroligne, SEEK_CUR); //On place notre curseur pour écrire par dessus l'ancien score
                fprintf(FichierScore, "%d \n", Score[Numeroligne] + 5); //On ecrit l'ancien score + 5 points.
            }
        }
}
}
