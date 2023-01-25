//
// Created by louis on 25/01/2023.
//
#include "stdio.h"
#include "Plateau.h"
#include "string.h"


void ajouterTuile (Tuile Plateau[12][26], int x, int y, char couleur[COULEUR], char symbole) {
    if (Plateau[x][y].couleur != ' ' || Plateau[x][y].symbole != ' ') {
        printf("Cette case est déjà occupée!\n");
    } else {
        strcpy(Plateau[x][y].couleur, couleur);
        Plateau[x][y].symbole = symbole;
    }
}

void afficherPlateau(Tuile Plateau[12][26]) {
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 26; j++) {
            printf("[%c,%c]", Plateau[i][j].couleur, Plateau[i][j].symbole);
        }
        printf("\n");
    }
}


void afficherPlateautest(Tuile Plateau[12][26]) {
    printf("  ");
    for (int i = 1; i <= 9; i++) {
        printf("  %d  ", i);
    }
    for (int i = 10; i <= 26; i++) {
        printf("  %d ", i);
    }
    printf("\n");
    for (int i = 0; i < 12; i++) {
        printf("%d ", i+1);
        for (int j = 0; j < 26; j++) {
            printf("[%s,%c]", Plateau[i][j].couleur, Plateau[i][j].symbole);
        }
        printf("\n");
    }
}

void initialiserPlateau(Tuile Plateau[12][26]) {
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 26; j++) {
            strcpy(Plateau[i][j].couleur, " ") ;
            Plateau[i][j].symbole = ' ';
        }
    }
}


int verifierTuile(Tuile Plateau[12][26], int x, int y) {
    int res = 1;
    // Vérifie si la case est deja occupe
    if (Plateau[x][y].couleur != ' ' || Plateau[x][y].symbole != ' ') {
        printf("Cette case est déjà occupée!\n");
        res = 0;
    }
    // Vérifie si la tuile est adjacente à une tuile de meme couleur ou symbole
    if (x > 0 && (Plateau[x-1][y].couleur == Plateau[x][y].couleur || Plateau[x-1][y].symbole == Plateau[x][y].symbole)) {
        res = 1;
    }
    if (x < x-1 && (Plateau[x+1][y].couleur == Plateau[x][y].couleur || Plateau[x+1][y].symbole == Plateau[x][y].symbole)) {
        res = 1;
    }
    if (y > 0 && (Plateau[x][y-1].couleur == Plateau[x][y].couleur || Plateau[x][y-1].symbole == Plateau[x][y].symbole)) {
        res = 1;
    }
    if (y < y-1 && (Plateau[x][y+1].couleur == Plateau[x][y].couleur || Plateau[x][y+1].symbole == Plateau[x][y].symbole)) {
        res = 1;
    }
    if(res == 0){
        printf("La tuile n'est pas adjacente à une tuile de même couleur ou forme\n");
    }
    return res;
}


