#ifndef PROJETQWIRKLE_STRUCTURES_H
#define PROJETQWIRKLE_STRUCTURES_H

#include <stdbool.h>
#include "Macro.h"
#include "Bibliotheques.h"

typedef struct {
    char symbole; // symbole de la tuile
    char couleur[COULEUR]; // couleur de la tuile
    bool vide; // si la case du plateau est vide
}Tuile;



typedef struct {
    int pupitre[PUPITRE]; // tableau auto de taille 6 (main du joueur)
    int score; // score du joueur
    char nom[PSEUDO]; // pseudo du joueur
}Joueur;


#endif
