#include <stdio.h>
#include <windows.h>
#include "interruption.h"
#include "malloc.h"
#include <stdlib.h>
#include <string.h>

  ////////////////////////////////////////////////////////
    //===========STRUCTURE JOUEUR ========/////
typedef struct joueur
 {
    char* nom;
    char* pion;
    int barriere;
    int* Xposition;
    int* Yposition;
}t_joueur;

  ////////////////////////////////////////////////////////
    //===========VARIABBLE ET INITILALISATION========/////

void interruption (int*X1, int*Y1,int*X2, int*Y2,int*X3, int*Y3, int*X4, int*Y4,char* pjeton1, char* pjeton2, char* pjeton3, char* pjeton4,char*pjoueur1[20], char*pjoueur2[20], char*pjoueur3[20], char*pjoueur4[20])
{


FILE*sauvegarde=NULL;
int choix; float val;
t_joueur N1;
t_joueur N2;
t_joueur N3;
t_joueur N4;
char *j1s[20];
char *j1s2[20];
char *j1s3[20];
char *j1s4[20];
N1.nom = malloc(256);
N2.nom = malloc(256);
N3.nom = malloc(256);
N4.nom = malloc(256);

strcpy (j1s, pjoueur1);
strcpy (j1s2, pjoueur2);
strcpy (j1s3, pjoueur3);
strcpy (j1s4, pjoueur4);
strcpy (N1.nom, j1s);
strcpy (N2.nom, j1s2);
strcpy (N3.nom, j1s3);
strcpy (N4.nom, j1s4);

N1.Xposition=*X1;
N2.Xposition=*X2;
N3.Xposition=*X3;
N4.Xposition=*X4;
N1.Yposition=*Y1;
N2.Yposition=*Y2;
N3.Yposition=*Y3;
N4.Yposition=*Y4;
N1.pion=*pjeton1;
N1.pion=*pjeton1;
N2.pion=*pjeton2;
N3.pion=*pjeton3;
N4.pion=*pjeton4;
//system("cls");
 printf("                   VOUS AVEZ SUSPDENDUE LA PARTIE\n");
 printf("\n");
 printf("\n");
 printf("pour ENREGISTRER la partie faites : 1\npour QUITTER la partie faites : 2\n");
 do
{
scanf("%d",&choix);
}while (choix<1 || choix>2);
    switch(choix)
    {
    case 1 :
     ////////////////////////////////////////////////////////
    //===========SAUVEGARDE FICHIER CHAQUE DONNEES A LA LIGNE ========/////

        sauvegarde=fopen("fichiersauvegarde.txt","w");
        if (sauvegarde==NULL)
        {
        printf("ECHEC OUVERTURE SAUVEGARDE\n");
        }
        else
        {
        fprintf(sauvegarde,"%s\n",pjoueur1);
        fprintf(sauvegarde,"%d\n",N1.Xposition);
        fprintf(sauvegarde,"%d\n",N1.Yposition);
        fprintf(sauvegarde,"%c\n",N1.pion);
        fprintf(sauvegarde,"%s\n",N2.nom);
        fprintf(sauvegarde,"%d\n",N2.Xposition);
        fprintf(sauvegarde,"%d\n",N2.Yposition);
        fprintf(sauvegarde,"%c\n",N2.pion);
        fprintf(sauvegarde,"%s\n",N3.nom);
        fprintf(sauvegarde,"%d\n",N3.Xposition);
        fprintf(sauvegarde,"%d\n",N3.Yposition);
        fprintf(sauvegarde,"%c\n",N3.pion);
        fprintf(sauvegarde,"%s\n",N4.nom);
        fprintf(sauvegarde,"%d\n",N4.Xposition);
        fprintf(sauvegarde,"%d\n",N4.Yposition);
        fprintf(sauvegarde,"%c\n",N4.pion);
        fclose(sauvegarde);
      //  printf("%d %c", N1.Xposition,N2.pion);

        }
       menu();
     break;

    case 2 :
        menu();
        break;
}

}
  ////////////////////////////////////////////////////////
    //===========SAUVEGARDE FICHIER CHAQUE DONNEES BARRIERE A LA LIGNE ========/////

void interruption_plateau (char tab[18][37])
{
        FILE*sauvegarde=NULL;
        sauvegarde=fopen("fichiersauvegardeplateau.txt","w");
        if (sauvegarde==NULL)
        {
        printf("ECHEC OUVERTURE SAUVEGARDE\n");
        }
        else
        {
        for (int i=0;i<18;i++)
        {
            for (int j=0;j<37;j++)
            {
                if(tab[i][j]=='b')   // a chaque barriere trouver dans le tableau on stock ses coordonnées
                {
                fprintf(sauvegarde,"%d\n",i);
                fprintf(sauvegarde,"%d\n",j);
                }

            }
        }
        fclose(sauvegarde);
}

}
 ////////////////////////////////////////////////////////
    //===========STOCK A PARTIR DU FICHIER CHAQUE DONNEES BARRIERE A LA LIGNE ========/////

void Recip_Save_plateau (char tab[18][37])
{
    int i,j;
        FILE*sauvegarde=NULL;
        sauvegarde=fopen("fichiersauvegardeplateau.txt","r");
        if (sauvegarde==NULL)
        {
        printf("ECHEC OUVERTURE SAUVEGARDE\n");
        }
        else
        {
        while(!feof(sauvegarde))
            {
                fscanf(sauvegarde,"%d\n",&i);  // a chaque barriere trouver dans le tableau on stock ses coordonnées
                fscanf(sauvegarde,"%d\n",&j);
                tab[i][j]='b';
            }
        }
        fclose(sauvegarde);
}


  ////////////////////////////////////////////////////////
    //===========RECUPERE DANS LE FICHIER CHAQUE DONNEES A LA LIGNE ========/////

void Recip_Save(int*X1, int*Y1,int*X2,int*Y2,int*X3, int*Y3, int*X4, int*Y4,char* pjeton1, char* pjeton2, char* pjeton3, char* pjeton4,char*pjoueur1[20], char*pjoueur2[20], char*pjoueur3[20], char*pjoueur4[20])
{
t_joueur N1;
t_joueur N2;
t_joueur N3;
t_joueur N4;
char *j1s[20];
char *j1s2[20];
char *j1s3[20];
char *j1s4[20];
N1.nom = malloc(256);
N2.nom = malloc(256);
N3.nom = malloc(256);
N4.nom = malloc(256);

    FILE*sauvegarde=NULL;
    sauvegarde=fopen("fichiersauvegarde.txt","r");
    if (sauvegarde==NULL)
            printf("ECHEC OUVERTURE SAUVEGARDE\n");
        else
        {
        fscanf(sauvegarde,"%s\n", N1.nom);
        fscanf(sauvegarde,"%d\n",&N1.Xposition);
        fscanf(sauvegarde,"%d\n",&N1.Yposition);
        fscanf(sauvegarde,"%c\n",&N1.pion);
        fscanf(sauvegarde,"%s\n", N2.nom);
        fscanf(sauvegarde,"%d\n",&N2.Xposition);
        fscanf(sauvegarde,"%d\n",&N2.Yposition);
        fscanf(sauvegarde,"%c\n",&N2.pion);
        fscanf(sauvegarde,"%s\n", N3.nom);
        fscanf(sauvegarde,"%d\n",&N3.Xposition);
        fscanf(sauvegarde,"%d\n",&N3.Yposition);
        fscanf(sauvegarde,"%c\n",&N3.pion);
        fscanf(sauvegarde,"%s\n", N4.nom);
        fscanf(sauvegarde,"%d\n",&N4.Xposition);
        fscanf(sauvegarde,"%d\n",&N4.Yposition);
        fscanf(sauvegarde,"%c\n",&N4.pion);
        fclose(sauvegarde);
         }


*X1=N1.Xposition;
*X2=N2.Xposition;
*X3=N3.Xposition;
*X4=N4.Xposition;
*Y4=N4.Yposition;
*Y1=N1.Yposition;
*Y2=N2.Yposition;
*Y3=N3.Yposition;
*pjeton1=N1.pion;
*pjeton2=N2.pion;
*pjeton3=N3.pion;
*pjeton4=N4.pion;
strcpy(j1s,N1.nom);
strcpy(pjoueur1,j1s);
strcpy(j1s2,N2.nom);
strcpy(pjoueur2,j1s2);
strcpy(j1s3,N3.nom);
strcpy(pjoueur3,j1s3);
strcpy(j1s4,N4.nom);
strcpy(pjoueur4,j1s4);

}
