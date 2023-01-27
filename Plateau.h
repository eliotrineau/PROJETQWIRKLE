//
// Created by louis on 25/01/2023.
//

#ifndef PROJETQWIRKLE_PLATEAU_H
#define PROJETQWIRKLE_PLATEAU_H
#include "Structures.h"


// void ajouterTuile (Tuile Plateau[12][26], int x, int y, Tuile);
void afficherPlateau(Tuile Plateau[12][26]);
void initialiserPlateau(Tuile Plateau[12][26]);
// int verifierTuile(Tuile Plateau[12][26], int x, int y);
void poserTuile(Tuile Plateau[12][26], int x, int y, Tuile);
int verifiePoseTuile(Tuile Plateau[26][12], int x, int y, Tuile tuile);
void afficherPupitre(Tuile pupitre[]);
void attribuerPupitre(Joueur* joueur, Tuile* tuilesPupitre, int nbTuiles);
Tuile prendreTuilePioche(Tuile pioche[], int taillePioche);




#endif //PROJETQWIRKLE_PLATEAU_H
