//
// Created by louis on 25/01/2023.
//

#ifndef PROJETQWIRKLE_PLATEAU_H
#define PROJETQWIRKLE_PLATEAU_H

#include "Macro.h"
#include "Structures.h"
#include "Bibliotheques.h"




// void ajouterTuile (Tuile Plateau[12][26], int x, int y, Tuile);
void afficherPlateau(Tuile Plateau[12][26]);
void initialiserPlateau(Tuile Plateau[12][26]);
// int verifierTuile(Tuile Plateau[12][26], int x, int y);
void poserTuile(Tuile Plateau[12][26], int x, int y, Tuile[TNORMALE]);
int verifiePoseTuile(Tuile Plateau[26][12], int x, int y, Tuile a[TNORMALE]);
void atest(Tuile Plateau[12][26]);
bool verifierTuilesAdjacentes(Tuile Plateau[12][26], int x, int y);
void choisirEmplacementTuile(Tuile Plateau[12][26], Tuile tuileChoisie);



#endif //PROJETQWIRKLE_PLATEAU_H
