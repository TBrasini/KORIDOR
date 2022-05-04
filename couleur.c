/*
SOURCE DU CODE :
RESSOURCE PAGE WEB DU CAMPUS : https://pedago-ece.campusonline.me/course/view.php?id=5939&section=2
*/


#include "plateau.h"
#include<windows.h>

void Color1(int couleurDuTexte,int couleurDeFond) // fonction d'affichage de couleurs
{
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}
