#ifndef PROJETQWIRKLE_TABLEAU_H
#define PROJETQWIRKLE_TABLEAU_H

#include "Macro.h"
#include "Structures.h"
#include "Bibliotheques.h"

void pioche(Tuile pioche[PIOCHETP]);
void DegradeInit(Tuile tuile[TDEGRADE]);
void verifCouleurDegrade(Tuile tuile[DEGRADE],Tuile t);
void normalInit(Tuile tuile[TNORMALE]);
void PiocherUneTuile(Tuile* tuileAPiocher, Tuile pioche[], int* taille);
void distribuerTuiles(Joueur joueurs[], Tuile pioche[], int* taille, DonneesJeu jeu);
void distribuerTuilesDegrade(Joueur joueurs[NBJMAX], Tuile pioche[TDEGRADE], int* taille, DonneesJeu jeu);
void distribuerTuilesNormal(Joueur joueurs[NBJMAX], Tuile pioche[TNORMALE], int* taille, DonneesJeu jeu);
void remplirPupitreDegrade(Joueur* joueur, Tuile pioche[], int* taillePioche, int nbTuilesPosees);
void remplirPupitreNormal(Joueur* joueur, Tuile pioche[], int* taillePioche, int nbTuilesPosees);
void copierTuileJoueur(Tuile tuile, Joueur* joueur, int index);
void afficherMainJoueur(Joueur joueur,Tuile tuile[TDEGRADE]);
void afficherMainJoueurActualisation(Joueur joueur, Tuile tuiles[TNORMALE], int nbTuiles);

void test(Tuile tuile[DEGRADE],Tuile t);

#endif

