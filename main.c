#include "Plateau.h"
#include "tableau.h"
#include "stdbool.h"
#include "Macro.h"




int main(){
    //srand(time(NULL));
    //Tuile a[PIOCHETP];
    //pioche(a);
    //char a = 'c';
    //printf("\033[33m%c\033[0m",a);
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
    */ //pioche(pioche);
    Tuile a[PIOCHETP];
    DegradeInit(a);
    //normalInit(a);
    Tuile Plateau[12][26];
    a[1].couleurSymbole;
    a[2].couleurSymbole;
    initialiserPlateau(Plateau);
    afficherPlateau(Plateau);
    poserTuile(Plateau,1,0,&a[0]);
    poserTuile(Plateau,2,0,&a[1]);
    afficherPlateau(Plateau);

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