#ifndef PROJETQWIRKLE_TABLEAU_H
#define PROJETQWIRKLE_TABLEAU_H

#include "Macro.h"
#include "Structures.h"
#include "Bibliotheques.h"

void pioche(Tuile pioche[PIOCHETP]);
void DegradeInit(Tuile tuile[36]);
void verifCouleurDegrade(Tuile tuile[DEGRADE],Tuile t);
void normalInit(Tuile tuile[108]);
void PiocherUneTuile(Tuile* tuileAPiocher, Tuile pioche[], int* taille);
void distribuerTuiles(Joueur joueurs[], Tuile pioche[], int* taille, DonneesJeu jeu);
void test(Tuile tuile[DEGRADE],Tuile t);

#endif

