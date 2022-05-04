#ifndef INTERRUPTION_H_INCLUDED
#define INTERRUPTION_H_INCLUDED

void interruption (int*X1, int*Y1,int*X2, int*Y2,int*X3, int*Y3, int*X4, int*Y4,char* pjeton1, char* pjeton2, char* pjeton3, char* pjeton4,char*pjoueur1[20], char*pjoueur2[20], char*pjoueur3[20], char*pjoueur4[20]);
void Recip_Save(int*X1, int*Y1,int*X2,int*Y2,int*X3, int*Y3, int*X4, int*Y4,char* pjeton1, char* pjeton2, char* pjeton3, char* pjeton4,char*pjoueur1[20], char*pjoueur2[20], char*pjoueur3[20], char*pjoueur4[20]);
void Recip_Save_plateau (char tab[18][37]);
void interruption_plateau (char tab[18][37]);


#endif // INTERRUPTION_H_INCLUDED
