#include "Plateau.h"
#include "tableau.h"


int main(){
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
//afficherPlateau(Plateau);
//printf("x");
//scanf("%d", &x)
//printf("y");
//scanf("%d", &y)
//ajouterTuile(Plateau,x,y,couleur, M)