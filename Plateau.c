#include "Plateau.h"

void afficherPlateau(Tuile Plateau[12][26]) {
    printf("  ");
    for (int i = 0; i <= 9; i++) {
        printf("  %d  ", i);
    }
    for (int i = 10; i <= 25; i++) {
        printf("  %d ", i);
    }
    printf("\n");
    for (int i = 0; i <= 11; i++) {
        printf(" %d ", i);
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
            strcpy(Plateau[i][j].symbole, ' ');
        }
    }
}


/* int verifierTuile(Tuile Plateau[12][26], int x, int y) {
    int res = 1;
    // Vérifie si la case est deja occupe
    if (Plateau[x][y].vide == 1) {
        printf("Cette case est deja occupee!\n");
        res = 0;
    }
    // Vérifie si la tuile est adjacente à une tuile de meme couleur ou symbole
    if (x < x-1 && (Plateau[x-1][y].couleur == Plateau[x][y].couleur || Plateau[x-1][y].symbole == Plateau[x][y].symbole)) {
        res = 1;
    }

    if (x < x+1 && (Plateau[x+1][y].couleur == Plateau[x][y].couleur || Plateau[x+1][y].symbole == Plateau[x][y].symbole)) {
        res = 1;
    }
    if (y < y-1 && (Plateau[x][y-1].couleur == Plateau[x][y].couleur || Plateau[x][y-1].symbole == Plateau[x][y].symbole)) {
        res = 1;
    }
    if (y < y+1 && (Plateau[x][y+1].couleur == Plateau[x][y].couleur || Plateau[x][y+1].symbole == Plateau[x][y].symbole)) {
        res = 1;
    }
    if(res == 0){
        printf("La tuile n'est pas adjacente a une tuile de meme couleur ou forme\n");
    }
    return res;
}


int verifierTuile6max(Tuile Plateau[12][26], int x, int y) {
    int res = 1;
    int nbTuilesVoisines = 0;

    // Vérifier si la case est déjà occupée
    if (Plateau[x][y].vide == 1) {
        printf("Cette case est deja occupee!\n");
        res = 0;
    }
    // Vérifier le nombre de tuiles voisines
    if (x > 0 && (Plateau[x-1][y].vide )) {
        nbTuilesVoisines++;
    }
    if (x < x-1 && (Plateau[x+1][y].vide)) {
        nbTuilesVoisines++;
    }
    if (y > 0 && (Plateau[x][y-1].vide)) {
        nbTuilesVoisines++;
    }
    if (y < y-1 && (Plateau[x][y+1].vide)) {
        nbTuilesVoisines++;
    }
    if (y > 0 && (Plateau[x][y-1].vide)) {
        nbTuilesVoisines++;
    }
// Vérifier si le nombre de tuiles voisines est supérieur à 6
    if (nbTuilesVoisines > 6) {
        printf("Il y a plus de 6 tuiles voisines!\n");
        res = 0;
    }

    return res;
}
---------------------------------------------------------------------------------


 void ajouterTuile (Tuile Plateau[12][26], int x, int y, Tuile TuileUT) {
    if (Plateau[x][y].vide == 1) {
        printf("Cette case est déjà occupée!\n");
    } else {
        strcpy(Plateau[x][y].couleur, TuileUT.couleur);
        Plateau[x][y].symbole = TuileUT.symbole;
    }
}
 */


void poserTuile(Tuile Plateau[12][26], int x, int y, Tuile TuileUV) {
    if (verifiePoseTuile(Plateau,x,y,TuileUV)== 1) {
        strcpy(Plateau[x][y].couleur, TuileUV.couleur);
        strcpy(Plateau[x][y].symbole,TuileUV.symbole);
        TuileUV.vide = 1;
        printf("Tuile posée avec succès!\n");
    } else {
        printf("Impossible de poser la tuile ici!\n");
    }
}

int verifiePoseTuile(Tuile Plateau[26][12], int x, int y, Tuile tuile) {
    int nbTuilesVoisines = 0;
    int res = 1;
    if (x > 0 && Plateau[x-1][y].vide) {
        if(Plateau[x-1][y].couleur == tuile.couleur || Plateau[x-1][y].symbole == tuile.symbole)
            nbTuilesVoisines++;
    }
    if (x < 25 && Plateau[x+1][y].vide) {
        if(Plateau[x+1][y].couleur == tuile.couleur || Plateau[x+1][y].symbole == tuile.symbole)
            nbTuilesVoisines++;
    }
    if (y > 0 && Plateau[x][y-1].vide) {
        if(Plateau[x][y-1].couleur == tuile.couleur || Plateau[x][y-1].symbole == tuile.symbole)
            nbTuilesVoisines++;
    }
    if (y < 11 && Plateau[x][y+1].vide) {
        if(Plateau[x][y+1].couleur == tuile.couleur || Plateau[x][y+1].symbole == tuile.symbole)
            nbTuilesVoisines++;
    }
    if (nbTuilesVoisines >= 7) {
        printf("Il y a plus de 6 tuiles voisines!\n");
        res = 0;
        return  res;
    }
    return res;
}


Tuile prendreTuilePioche(Tuile pioche[], int taillePioche) {
    if (taillePioche == 0) {
        printf("La pioche est vide, impossible de prendre une tuile.\n");
        return;
    }
    // On récupère la dernière tuile de la pioche
    Tuile tuile = pioche[taillePioche - 1];
    // On décrémente la taille de la pioche
    taillePioche--;
    printf("La tuile suivante a été prise de la pioche :\n");
    afficherPupitre(tuile);
    return tuile;
}


void attribuerPupitre(Joueur* joueur, Tuile* tuilesPupitre, int nbTuiles) {
    Joueur->t = tuilesPupitre;
    joueur->nbTuilesPupitre = nbTuiles;
}

void afficherPupitre(Tuile pupitre[]) {
    int i;
    printf("Tuiles dans le pupitre :\n");
    for (i = 0; i < 6; i++) {
        printf("%d. Couleur : %c, Forme : %c\n", i+1, pupitre[i].couleur, pupitre[i].forme);
    }
}