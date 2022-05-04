#ifndef REPRENDRE_PARTIE_H_INCLUDED
#define REPRENDRE_PARTIE_H_INCLUDED

void SetupDeplacement_reprendrepartie(char tab[18][37],int*X1, int*Y1,int*X2,int*Y2,int*X3, int*Y3, int*X4, int*Y4,char* pjeton1, char* pjeton2, char* pjeton3, char* pjeton4,char*pjoueur1[20], char*pjoueur2[20], char*pjoueur3[20], char*pjoueur4[20]);
void SetupDeplacement_reprendrepartie_4j(char tab[18][37],int*X1, int*Y1,int*X2,int*Y2,int*X3, int*Y3, int*X4, int*Y4,char* pjeton1, char* pjeton2, char* pjeton3, char* pjeton4,char*pjoueur1[20], char*pjoueur2[20], char*pjoueur3[20], char*pjoueur4[20]);
void Reprendre_partie();

#endif // REPRENDRE_PARTIE_H_INCLUDED
