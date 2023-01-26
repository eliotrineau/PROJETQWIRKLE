#ifndef PROJETQWIRKLE_TABLEAU_H
#define PROJETQWIRKLE_TABLEAU_H

#include "Macro.h"
#include "Structures.h"
#include "Bibliotheques.h"

void pioche(Tuile pioche[PIOCHETP]);
void DegradeInit(Tuile tuile[36]);
void verifCouleurDegrade(Tuile tuile[DEGRADE],Tuile t);
void test(Tuile tuile[DEGRADE],Tuile t);

#endif

