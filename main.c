#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "plateau.h"
#include "deplacement.h"
#include "barriere.h"
#include "partiedejeu.h"
#include "lancement.h"
#include "interruption.h"

/*
void changement (int *x1,int*x2,int*x3,int*x4,int*y1,int*y2,int*y3,int*y4,char* p1,char* p2,char* p3,char* p4,char* j1,char *j2,char *j3,char *j4)
{
   *x1=3;*x2=4;*x3=19;*x4=42;*y1=12;*y2=14;*y3=6;*y4=7;
    *p1='%';*p2='@'; *p3='&';*p4='#';
}


int main()
{
    int *x1=1;int*x2=1;int*x3=1;int*x4=1;int*y1=1;int*y2=1;int*y3=1;int* y4=1;
    char *p1='#';char* p2='#'; char* p3='#';char* p4='#';
    char*j4="max";char*j1="max";char*j2="max";char*j3="max";
    changement(&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4,&p1,&p2,&p3,&p4,&j1,&j2,&j3,&j4);
    printf("%d %c ", x1, p2);
    interruption(&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4,&p1,&p2,&p3,&p4,&j1,&j2,&j3,&j4);
}
*/



int main()
{
    HWND hwnd=GetForegroundWindow();
    ShowWindow(hwnd,SW_MAXIMIZE);

    affichageLancement();
    menu();
    return 0;
}

