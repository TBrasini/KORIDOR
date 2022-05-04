#include <stdio.h>

#ifndef DEPLACEMENT_H_INCLUDED
#define DEPLACEMENT_H_INCLUDED


void SetupDeplacement(int*X1, int*Y1,int*X2, int*Y2, char tab[18][37], char PJ1, char PJ2);
void SetupDeplacement4J(int*X1, int*Y1,int*X2, int*Y2,int*X3, int*Y3,int*X4, int*Y4, char tab[18][37], char PJ1, char PJ2, char PJ3, char PJ4);
void Deplacement(int*X1, int*Y1, char tab[18][37], char PJ);

#endif // DEPLACEMENT_H_INCLUDED
