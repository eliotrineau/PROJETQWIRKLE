//
// Created by malic on 25/01/2023.
//

#ifndef PROJETQWIRKLE_MENU_H
#define PROJETQWIRKLE_MENU_H

#endif //PROJETQWIRKLE_MENU_H

#include "Bibliotheques.h"
#include "Structures.h"
#include "Macro.h"

void jeu(DonneesJeu* jeu);
int afficherMenu();
void bouclejeu(int t,int* mode,Joueur* j,Tuile pioche,int* taille,DonneesJeu jeu,DonneesPlateau plateau);
int calculerScore(DonneesPlateau plateau, DonneesJeu jeu, Joueur* joueur);
void passerJSuivant(Joueur* joueurs, int nbJoueur, int* joueurActuel);
void nouvellepartie();

void reglesdujeu();

void credits();

void quitter_le_jeu();

void sauvegarder_partie();

void charger_partie();

void afficher_score(Joueur);