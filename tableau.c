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
                printf("%c %s %d\n", pioche[i].symbole,pioche[i].couleur,compteur);
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
                printf("%c %s %d\n",pioche[i].symbole,pioche[i].couleur,compteur);
            }break;
        default:break;
    }
}

void initPiocheDegrade(Tuile pioche[PIOCHETP]){
    for (int i = 0; i < SYMBOLE ;++i) {
        pioche[i].symbole = '1';
        pioche[i+6].symbole = '2';
        pioche[i+12].symbole = '3';
        pioche[i+18].symbole = '4';
        pioche[i+24].symbole = '5';
        pioche[i+30].symbole = '6';
    }

    for (int i = 0; i < COULEUR ;++i) {
        strcpy(pioche[i * 6].couleur, "\033[31m\033[0m");
        strcpy(pioche[i * 6 + 1].couleur, "\033[38;2;255;165;0m\033[0m");
        strcpy(pioche[i * 6 + 2].couleur, "\033[33m\033[0m");
        strcpy(pioche[i * 6 + 3].couleur, "\033[32m\033[0m");
        strcpy(pioche[i * 6 + 4].couleur, "\033[34m\033[0m");
        strcpy(pioche[i * 6 + 5].couleur, "\033[35m\033[0m");
    }
}

void initPiocheNormal(Tuile pioche[PIOCHETP]){
    for (int i = 0; i < NORMAL; ++i) {
        for (int j = 0; j < SYMBOLE ;++j) {
            pioche[j+36*i].symbole = '1';
            pioche[j+6+36*i].symbole = '2';
            pioche[j+12+36*i].symbole = '3';
            pioche[j+18+36*i].symbole = '4';
            pioche[j+24+36*i].symbole = '5';
            pioche[j+30+36*i].symbole = '6';
        }
        for (int k = 0; k < COULEUR ;++k) {
            strcpy(&pioche[k * 6+36*i].couleur[COULEUR], "\033[31m\033[0m");
            strcpy(pioche[k * 6 + 1+36*i].couleur, "\033[38;2;255;165;0m\033[0m");
            strcpy(pioche[k * 6 + 2+36*i].couleur, "\033[33m\033[0m");
            strcpy(pioche[k * 6 + 3+36*i].couleur, "\033[32m\033[0m");
            strcpy(pioche[k * 6 + 4+36*i].couleur, "\033[34m\033[0m");
            strcpy(pioche[k * 6 + 5+36*i].couleur, "\033[35m\033[0m");
        }
    }
}

