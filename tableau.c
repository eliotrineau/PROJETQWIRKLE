#include "tableau.h"


void pioche(Tuile pioche[PIOCHETP]){
    printf("Vous jouez en mode degrade ou en mode normal ?\n(degrade : 0)\n(normal : 1)\n");
    int choix = 0;
    Tuile temporaire;
    int variable = 36;
    //int resultat = 1;
    scanf("%d",&choix);
    printf("choix : %d\n",choix);

    switch (choix) {
        case 0: {
           initPiocheDegrade(pioche);
            for (int i = 0; i < TDEGRADE - 1; ++i) {
                        int resultat = rand() % variable;
                        temporaire = pioche[PIOCHETP-i];
                        pioche[PIOCHETP-i] = pioche[resultat];
                        pioche[resultat] = temporaire;
                        variable--;
            }
            for (int i = 0; i < TDEGRADE - 1; ++i) {
                int compteur = i;
                printf("%s %s %d\n", pioche[i].symbole,pioche[i].couleur,compteur);
            }break;
        }
        case 1:
            initPiocheNormal(pioche);
            for (int i = 0; i < TNORMALE - 1; ++i) {
                        int resultat = rand() % variable;
                        temporaire = pioche[PIOCHETP-i];
                        pioche[PIOCHETP-i] = pioche[resultat];
                        pioche[resultat] = temporaire;
                        variable--;
            }
            for (int i = 0; i < TNORMALE - 1; ++i) {
                int compteur = i;
                printf("%s %s %d\n",pioche[i].symbole,pioche[i].couleur,compteur);
            }break;
        default:break;
    }
}

void initPiocheDegrade(Tuile pioche[PIOCHETP]){
    for (int i = 0; i < SYMBOLE ;++i) {
        strcpy(pioche[i].symbole,"rond");
        strcpy(pioche[i+6].symbole,"croix");
        strcpy(pioche[i+12].symbole,"losange");
        strcpy(pioche[i+18].symbole,"carre");
        strcpy(pioche[i+24].symbole,"etoile");
        strcpy(pioche[i+30].symbole,"trefle");
    }

    for (int i = 0; i < COULEUR ;++i) {
        strcpy(&pioche[i * 6].couleur[COULEUR], "\033[31m\033[0m");
        strcpy(&pioche[i * 6 + 1].couleur[COULEUR], "\033[38;2;255;165;0m\033[0m");
        strcpy(&pioche[i * 6 + 2].couleur[COULEUR], "\033[33m\033[0m");
        strcpy(&pioche[i * 6 + 3].couleur[COULEUR], "\033[32m\033[0m");
        strcpy(&pioche[i * 6 + 4].couleur[COULEUR], "\033[34m\033[0m");
        strcpy(&pioche[i * 6 + 5].couleur[COULEUR], "\033[35m\033[0m");
    }
}

void initPiocheNormal(Tuile pioche[PIOCHETP]){
    for (int i = 0; i < NORMAL; ++i) {
        for (int j = 0; j < SYMBOLE ;++j) {
            strcpy(pioche[j+36*i].symbole,"rond");
            strcpy(pioche[j+6+36*i].symbole,"croix");
            strcpy(pioche[j+12+36*i].symbole,"losange");
            strcpy(pioche[j+18+36*i].symbole,"carre");
            strcpy(pioche[j+24+36*i].symbole,"etoile");
            strcpy(pioche[j+30+36*i].symbole,"trefle");
        }
        for (int k = 0; k < COULEUR ;++k) {
            strcpy(&pioche[k * 6+36*i].couleur[COULEUR], "\033[31m\033[0m");
            strcpy(&pioche[k * 6 + 1+36*i].couleur[COULEUR], "\033[38;2;255;165;0m\033[0m");
            strcpy(&pioche[k * 6 + 2+36*i].couleur[COULEUR], "\033[33m\033[0m");
            strcpy(&pioche[k * 6 + 3+36*i].couleur[COULEUR], "\033[32m\033[0m");
            strcpy(&pioche[k * 6 + 4+36*i].couleur[COULEUR], "\033[34m\033[0m");
            strcpy(&pioche[k * 6 + 5+36*i].couleur[COULEUR], "\033[35m\033[0m");
        }
    }
}

