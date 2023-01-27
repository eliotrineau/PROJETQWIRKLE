#ifndef PROJETQWIRKLE_STRUCTURES_H
#define PROJETQWIRKLE_STRUCTURES_H

#include <stdbool.h>
#include "Macro.h"
#include "Bibliotheques.h"

typedef struct {
    int i,j;
    int couleurchoix;
    int symbolechoix;
    char couleur[CHARCOULEUR];
    char symbole[SYMBOLE]; // symbole de la tuile
    char couleurSymbole[CHARCOULEUR]; // couleur de la tuile
    bool vide; // si la case du plateau est vide
    int tuileDistribue;
}Tuile;

typedef struct{
    Tuile plateau[12][26];
}DonneesPlateau;
typedef struct {
    Tuile* pioche;
}DonneesPioche;
typedef struct {
    int mode;
    int nbJoueur;
}DonneesJeu;




typedef struct {
    char pupitre[PUPITRE]; // tableau auto de taille 6 (main du joueur)
    int score; // score du joueur
    char nom[PSEUDO]; // pseudo du joueur
    Tuile main[6];
}Joueur;


#endif
