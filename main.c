#include "Plateau.h"
#include "tableau.h"
#include "stdbool.h"
#include "Macro.h"
#include "Bibliotheques.h"



int main(){
    srand(time(NULL));
    Tuile a[TNORMALE];
    DonneesJeu j;
    j.nbJoueur = 2;
    Joueur joueurs[4];
    int* taille = NULL;
    int degrade = TDEGRADE;
    taille = &degrade;
    //Tuile t;
    //fonctionPiocheDegrade();
    //DegradeInit(a);
    //char couleur[CHARCOULEUR];
    //char symbole;
    //pioche(a);
    distribuerTuiles(joueurs,a,taille,j);
    //test(a,t);
    //normalInit(a);
    //initPiocheDegrade(a);
    //pioche2(a,PIOCHETP,&couleur,&symbole,COULEUR,SYMBOLE);
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