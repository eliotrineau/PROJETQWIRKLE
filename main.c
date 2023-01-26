#include "Plateau.h"
#include "tableau.h"
#include "stdbool.h"
#include "Macro.h"




int main(){
    //srand(time(NULL));
    //Tuile a[35];
    //pioche(a);
    /*char a = 'c';
    printf("\033[33m%c\033[0m",a);
    //printf("\033[31mTEXTEAECRIRE\033[0m\n");
    //printf("\033[38;2;255;165;0mTEXTEAECRIRE\033[0m\n");
    //printf("\033[33mTEXTEAECRIRE\033[0m\n");
    //printf("\033[32mTEXTEAECRIRE\033[0m\n");
    //printf("\033[34mTEXTEAECRIRE\033[0m\n");
    //printf("\033[35mTEXTEAECRIRE\033[0m\n");
    printf("\033[31mBonjour, monde!\033[0m\n");
    //Tuile pioche[35];
    //pioche(pioche);
    Tuile Plateau[12][26];
    initialiserPlateau(Plateau);
    afficherPlateau(Plateau);
    poserTuile(Plateau,0,0,"jaune",'x');
    afficherPlateau(Plateau);
    poserTuile(Plateau,0,8,"Jaune",'M');

    return 0;
}

//int x, y;
//Tuile Plateau[12][26];
//initialiserPlateau(Plateau);
//afficherPlateautest(Plateau);
//printf("x");
//scanf("%d", &x)
//printf("y");
//scanf("%d", &y)
//ajouterTuile(Plateau,x,y,couleur, M)