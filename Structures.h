#ifndef PROJETQWIRKLE_STRUCTURES_H
#define PROJETQWIRKLE_STRUCTURES_H

#include "Macro.h"

typedef struct {
    char symbole;
    char couleur[COULEUR];
    bool vide;
}Tuile;

typedef struct {
    int pupitre[PUPITRE];
    int score;
    char nom[PSEUDO];
}Joueur;


#endif
