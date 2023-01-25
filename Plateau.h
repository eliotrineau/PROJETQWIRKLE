//
// Created by louis on 25/01/2023.
//

#ifndef PROJETQWIRKLE_PLATEAU_H
#define PROJETQWIRKLE_PLATEAU_H
#include "Structures.h"


void ajouterTuile (Tuile Plateau[12][26], int x, int y, char couleur[COULEUR], char symbole);
void afficherPlateau(Tuile Plateau[12][26]);
void afficherPlateautest(Tuile Plateau[12][26]);
void initialiserPlateau(Tuile Plateau[12][26]);
int verifierTuile(Tuile Plateau[12][26], int x, int y);

#endif //PROJETQWIRKLE_PLATEAU_H
