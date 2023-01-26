#ifndef PROJETQWIRKLE_STRUCTURES_H
#define PROJETQWIRKLE_STRUCTURES_H

#include <stdbool.h>
#include "Macro.h"
#include "Bibliotheques.h"

typedef struct {
    char couleur[CHARCOULEUR];
    char symbole[SYMBOLE];
    char couleurSymbole[CHARCOULEUR]; // couleur de la tuile
    bool vide; // si la case du plateau est vide
    bool couleurRouge; // bool pour verifier la couleur || l'attribuer
    bool couleurOrange; // bool pour verifier la couleur || l'attribuer
    bool couleurJaune; // bool pour verifier la couleur || l'attribuer
    bool couleurVert; // bool pour verifier la couleur || l'attribuer
    bool couleurBleu; // bool pour verifier la couleur || l'attribuer
    bool couleurViolet; // bool pour verifier la couleur || l'attribuer
}Tuile;



typedef struct {
    int pupitre[PUPITRE]; // tableau auto de taille 6 (main du joueur)
    int score; // score du joueur
    char nom[PSEUDO]; // pseudo du joueur
}Joueur;


#endif
