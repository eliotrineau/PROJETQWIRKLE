#include "Plateau.h"
#include "tableau.h"
#include "stdbool.h"
#include "Macro.h"
#include "Bibliotheques.h"



int main(){
    srand(time(NULL));
    Tuile a[TNORMALE];
    Tuile b[TDEGRADE];
    DonneesJeu j;
    j.nbJoueur = 2;
    Joueur joueurs[NBJMAX];
    int* taille = NULL;
    int* taille2 = NULL;
    int degrade = TDEGRADE;
    int normal = TNORMALE;
    taille = &degrade;
    taille2 = &normal;
    //Tuile t;
    //fonctionPiocheDegrade();
    //DegradeInit(a);
    //char couleur[CHARCOULEUR];
    //char symbole;
    //pioche(a);
    //distribuerTuilesNormal(joueurs,a,taille2,j);
    distribuerTuilesDegrade(joueurs,a,taille,j);
    afficherMainJoueur(joueurs[0],b);
    //remplirPupitreDegrade(joueurs,b,taille,1);
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