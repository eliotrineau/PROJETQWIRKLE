#include "tableau.h"


void pioche(Tuile pioche[35]){
    printf("Vous jouez en mode degrade ou en mode normal ?\n(degrade : 0)\n(normal : 1)\n");
    int b;
    Tuile temporaire;
    int variable = 36;
    int resultat = 0;
    scanf("%d",&b);
    printf("choix : %d",b);

    switch (b) {
        case 0: {
           initPiocheDegrade(pioche);
            for (int i = 0; i < DEGRADE; ++i) {
                for (int j = 0; j < COULEUR; ++j) {
                    for (int k = 0; k < SYMBOLE; ++k) {
                        resultat = rand() % variable;
                        temporaire = pioche[35];
                        pioche[35] = pioche[resultat];
                        pioche[resultat] = temporaire;
                        variable--;
                        printf("%s", &pioche[i].symbole[SYMBOLE]);
                        printf("%s", &pioche[i].couleur[COULEUR]);
                    }
                }
            }break;
        }
        case 1:
            initPiocheNormal(pioche);
            for (int i = 0; i < NORMAL; ++i) {
                for (int j = 0; j < COULEUR; ++j) {
                    for (int k = 0; k < SYMBOLE; ++k) {
                        resultat = rand() % variable;
                        temporaire = pioche[35];
                        pioche[35] = pioche[resultat];
                        pioche[resultat] = temporaire;
                        variable--;
                        printf("%s",&pioche[i].symbole[SYMBOLE]);
                        printf("%s",&pioche[i].couleur[COULEUR]);
                    }
                }
            }break;
        default:break;
    }
}

void initPiocheDegrade(Tuile pioche[35]){
    for (int i = 0; i < SYMBOLE ;++i) {
        strcpy(pioche[i].symbole,"rond");
        strcpy(pioche[i+6].symbole,"croix");
        strcpy(pioche[i+12].symbole,"losange");
        strcpy(pioche[i+18].symbole,"carre");
        strcpy(pioche[i+24].symbole,"etoile");
        strcpy(pioche[i+30].symbole,"trefle");
    }

    for (int i = 0; i < COULEUR ;++i) {
        strcpy(&pioche[i * 6].couleur[COULEUR], "rouge");
        strcpy(&pioche[i * 6 + 1].couleur[COULEUR], "orange");
        strcpy(&pioche[i * 6 + 2].couleur[COULEUR], "jaune");
        strcpy(&pioche[i * 6 + 3].couleur[COULEUR], "vert");
        strcpy(&pioche[i * 6 + 4].couleur[COULEUR], "bleu");
        strcpy(&pioche[i * 6 + 5].couleur[COULEUR], "violet");
    }
}

void initPiocheNormal(Tuile pioche[35]){
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
            strcpy(&pioche[k * 6+36*i].couleur[COULEUR], "rouge");
            strcpy(&pioche[k * 6 + 1+36*i].couleur[COULEUR], "orange");
            strcpy(&pioche[k * 6 + 2+36*i].couleur[COULEUR], "jaune");
            strcpy(&pioche[k * 6 + 3+36*i].couleur[COULEUR], "vert");
            strcpy(&pioche[k * 6 + 4+36*i].couleur[COULEUR], "bleu");
            strcpy(&pioche[k * 6 + 5+36*i].couleur[COULEUR], "violet");
        }
    }
}

