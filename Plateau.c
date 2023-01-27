#include "Plateau.h"


void ajouterTuile (Tuile Plateau[12][26], int x, int y, char couleur[COULEUR], char symbole[SYMBOLE]) {
    if (Plateau[x][y].couleur != ' ' || Plateau[x][y].symbole != ' ') {
        printf("Cette case est déjà occupée!\n");
    } else {
        strcpy(Plateau[x][y].couleur, couleur);
        strcpy(Plateau[x][y].symbole,symbole);
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
            printf("[%s,%s]", Plateau[i][j].couleur, Plateau[i][j].symbole);
        }
        printf("\n");
    }
}

void initialiserPlateau(Tuile Plateau[12][26]) {
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 26; j++) {
            strcpy(Plateau[i][j].couleur, " ") ;
            strcpy(Plateau[i][j].symbole, ' ');
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


int verifierTuile6max(Tuile Plateau[12][26], int x, int y) {
    int res = 1;
    int nbTuilesVoisines = 0;

    // Vérifier si la case est déjà occupée
    if (Plateau[x][y].couleur != ' ' || Plateau[x][y].symbole != ' ') {
        printf("Cette case est déjà occupée!\n");
        res = 0;
    }
    // Vérifier le nombre de tuiles voisines
    if (x > 0 && (Plateau[x-1][y].couleur != ' ' || Plateau[x-1][y].symbole != ' ')) {
        nbTuilesVoisines++;
    }
    if (x < x-1 && (Plateau[x+1][y].couleur != ' ' || Plateau[x+1][y].symbole != ' ')) {
        nbTuilesVoisines++;
    }
    if (y > 0 && (Plateau[x][y-1].couleur != ' ' || Plateau[x][y-1].symbole != ' ')) {
        nbTuilesVoisines++;
    }
    if (y < y-1 && (Plateau[x][y+1].couleur != ' ' || Plateau[x][y+1].symbole != ' ')) {
        nbTuilesVoisines++;
    }
    if (y > 0 && (Plateau[x][y-1].couleur != ' ' || Plateau[x][y-1].symbole != ' ')) {
        nbTuilesVoisines++;
    }
// Vérifier si le nombre de tuiles voisines est supérieur à 6
    if (nbTuilesVoisines > 6) {
        printf("Il y a plus de 6 tuiles voisines!\n");
        res = 0;
    }

    return res;
}

void poserTuile(Tuile Plateau[12][26], int x, int y, char couleur, char symbole) {
    if (verifierTuile(Plateau, x, y) == 1) {
        strcpy(Plateau[x][y].couleur, couleur);
        strcpy(Plateau[x][y].symbole,symbole);
        printf("Tuile posée avec succès!\n");
    } else {
        printf("Impossible de poser la tuile ici!\n");
    }
}


void plateauinittest(char plateau[12][26][3]){
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 26; j++) {
            snprintf(plateau[i][j], 3, "[ ]");
        }
    }
}

void afficherplateauinittest(){
    char plateau[12][26][3];
    plateauinittest(plateau);
    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 26; ++j) {
            printf("%s\n","[ ]");
        }
    }
}

