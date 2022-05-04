#include"menu.h"

void regle ()
{
    system("cls");
    int choix;
    char j;
    printf("Souhaitez vous un rappel sur les regles du jeu ?\n");
    printf("rentrer 1 pour oui, sinon faites 0\n");
    scanf("%d",&choix);
    if (choix ==1)
    {
        system("cls");
        gotoligcol(0, 42);
        Color1(4, 0);
        printf("REGLES DU JEU\n\n\n");
        Color1(14, 0);
        printf("                                        ====BUT DU JEU==== ");
        Color1(15, 0);
        printf("\n Il s'agit d'atteindre le premier la ligne opposee a sa ligne de depart.");
        printf("\n En debut de partie, les barrieres sont remises dans leur zone de stockage.\n Chaque joueur pose son pion au centre de sa ligne de depart (la premiere ligne face a lui).\n Un tirage au sort determine qui commence.\n\n");
        Color1(14, 0);
        printf("                                       ====DEPLACEMENTS====");
        Color1(15, 0);
        printf("\n A tour de role, chaque joueur choisit :\n de DEPLACER son pion d'une case verticalement ou horizontalement, en avant ou en arriere, \n OU de poser une de ses BARRIERES.\n Une barriere doit etre posee exactement entre deux blocs de 2 cases.\n Lorsqu'il n'a plus de barrieres, un joueur est oblige de deplacer son pion.\n");
        printf(" La pose des barrieres a pour but de se creer son propre chemin ou de ralentir d'adversaire, \n mais il est interdit de lui fermer totalement l'acces a sa ligne de but.\n");
        printf(" Quand 2 pions se retrouvent en face à face non separes par une barriere,\n le joueur dont c'est le tour peut sauter par-dessus son adversaire et se retrouver derriere lui.\n Si une barriere se trouve derriere le pion saute,\n le joueur peut choisir de bifurquer a droite ou a gauche du pion saute.\n");
        printf(" REGLE POUR 4 JOUEURS\n En debut de partie, les 4 pions sont disposes au centre de chacun des 4 cotes du plateau\n et chaque joueur dispose de 5 barrieres.\n Les regles sont strictement identiques,\n mais on ne peut sauteur plus d'un pion a la fois.");
        printf("\n\n");
        printf("Appuyer sur une touche pour continuer\n");
        j = getch();
        menu();

     }
     else if (choix == 0)
        menu();

}

