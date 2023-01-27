//
// Created by louis on 27/01/2023.
//

#include "Menud'action.h"
#include "stdio.h"
#include "Structures.h"
#include "Plateau.h"





void menuActionsJoueur(Plateau plateau, Tuile* tuilesJoueur, int nbTuilesJoueur) {
    int choix;
    do {
        printf("Menu actions joueur :\n");
        printf("1. Poser une tuile\n");
        printf("2. Prendre une tuile de la pioche\n");
        printf("3. Passer son tour\n");
        printf("4. Quitter la partie\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch(choix) {
            case 1:
                poserTuile(plateau, tuilesJoueur, nbTuilesJoueur);
                break;
            case 2:
                prendreTuilePioche(tuilesJoueur, &nbTuilesJoueur);
                break;
            case 3:
                printf("Vous avez passé votre tour\n");
                break;
            case 4:
                printf("Vous avez quitté la partie\n");
                break;
            default:
                printf("Choix non valide\n");
                break;
        }
    } while (choix != 4);
}
