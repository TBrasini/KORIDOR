#include <stdio.h>
#include <windows.h>


void affichageLancement()
{
    char c ,d;

    while (c== NULL)
    {

    Color1(4, 0);
    gotoligcol(2, 20);
    printf("                                                                                               dddddddd   \n");
    gotoligcol(3, 20);
    printf("     QQQQQQQQQ                                                               iiii              d::::::d \n");
    gotoligcol(4, 20);
    printf("   QQ:::::::::QQ                                                            i::::i             d::::::d  \n");
    gotoligcol(5, 20);
    printf(" QQ:::::::::::::QQ                                                           iiii              d::::::d \n");
    gotoligcol(6, 20);
    printf("Q:::::::QQQ:::::::Q                                                                            d:::::d     \n");
    gotoligcol(7, 20);
    printf("Q::::::O   Q::::::Q uuuuuu    uuuuuu     ooooooooooo   rrrrr   rrrrrrrrr   iiiiiii     ddddddddd:::::d    ooooooooooo   rrrrr   rrrrrrrrr\n");
    gotoligcol(8, 20);
    printf("Q:::::O     Q:::::Q u::::u    u::::u   oo:::::::::::oo r::::rrr:::::::::r  i:::::i   dd::::::::::::::d  oo:::::::::::oo r::::rrr:::::::::r\n");
    gotoligcol(9, 20);
    printf("Q:::::O     Q:::::Q u::::u    u::::u  o:::::::::::::::or:::::::::::::::::r  i::::i  d::::::::::::::::d o:::::::::::::::or:::::::::::::::::r\n");
    gotoligcol(10, 20);
    printf("Q:::::O     Q:::::Q u::::u    u::::u  o:::::ooooo:::::orr::::::rrrrr::::::r i::::i d:::::::ddddd:::::d o:::::ooooo:::::orr::::::rrrrr::::::r\n");
    gotoligcol(11, 20);
    printf("Q:::::O     Q:::::Q u::::u    u::::u  o::::o     o::::o r:::::r     r:::::r i::::i d::::::d    d:::::d o::::o     o::::o r:::::r     r:::::r\n");
    gotoligcol(12, 20);
    printf("Q:::::O     Q:::::Q u::::u    u::::u  o::::o     o::::o r:::::r     rrrrrrr i::::i d:::::d     d:::::d o::::o     o::::o r:::::r     rrrrrrr\n");
    gotoligcol(13, 20);
    printf("Q:::::O  QQQQ:::::Q u::::u    u::::u  o::::o     o::::o r:::::r             i::::i d:::::d     d:::::d o::::o     o::::o r:::::r\n");
    gotoligcol(14, 20);
    printf("Q::::::O Q::::::::Q u:::::uuuu:::::u  o::::o     o::::o r:::::r             i::::i d:::::d     d:::::d o::::o     o::::o r:::::r\n");
    gotoligcol(15, 20);
    printf("Q:::::::QQ::::::::Q u:::::::::::::::uuo:::::ooooo:::::o r:::::r            i::::::id::::::ddddd::::::ddo:::::ooooo:::::o r:::::r\n");
    gotoligcol(16, 20);
    printf(" QQ::::::::::::::Q   u:::::::::::::::uo:::::::::::::::o r:::::r            i::::::i d:::::::::::::::::do:::::::::::::::o r:::::r\n");
    gotoligcol(17, 20);
    printf("   QQ:::::::::::Q     uu::::::::uu:::u oo:::::::::::oo  r:::::r            i::::::i  d:::::::::ddd::::d oo:::::::::::oo  r:::::r\n");
    gotoligcol(18, 20);
    printf("     QQQQQQQQ::::QQ     uuuuuuuu  uuuu   ooooooooooo    rrrrrrr            iiiiiiii   ddddddddd   ddddd   ooooooooooo    rrrrrrr\n");
    gotoligcol(19, 20);
    printf("             Q:::::Q\n");
    Color1(15, 0);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\t\t\t\t\t\t\t\t APPUYER SUR UNE TOUCHE POUR LANCER LE JEU");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    c = getch();
    }
    while(d == NULL)
    {
        system("cls");
        gotoligcol(10, 0);
        printf("||                                         AJUSTER LA TAILLE COMME CECI                                      ||");
        d = getch();
    }


}
