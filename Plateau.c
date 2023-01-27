#include "Plateau.h"
#include "Structures.h"
#include "tableau.h"
#include "stdlib.h"

void afficherPlateau(Tuile Plateau[12][26]) {
    //normalInit(*Plateau);
    // DegradeInit(*Plateau);
    // verifCouleurDegrade(Plateau[12][26],)

    printf("  ");
    for (int i = 0; i <= 9; i++) {
        printf("  %d", i);
    }
    for (int i = 10; i <= 25; i++) {
        printf(" %d", i);
    }
    printf("\n");
    for (int i = 0; i <= 11; i++) {
        printf(" %d ", i);
        for (int j = 0; j < 26; j++) {
            printf("[%s]", Plateau[i][j].couleurSymbole);
        }
        printf("\n");
    }
}

void initialiserPlateau(Tuile Plateau[12][26]) {
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 26; j++) {
            strcpy(Plateau[i][j].couleurSymbole, " ") ;
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


void poserTuile(Tuile Plateau[12][26], int x, int y, Tuile a[TNORMALE]){
    int pasdetest = 1;
    if (pasdetest == 1) {
        strcpy(Plateau[x][y].couleurSymbole, a[0].couleurSymbole);
        a->vide = 1;
        printf("Tuile posee avec succes!\n");
    } else {
        printf("Impossible de poser la tuile ici!\n");
    }
}
/*void poserTuile(Tuile Plateau[12][26], int x, int y, Tuile a[TNORMALE]){
    int pasdetest = 1;
    if (pasdetest == 1) {
        strcpy(Plateau[x][y].couleurSymbole, a[0].couleurSymbole);
        a->vide = 1;
        printf("Tuile posee avec succes!\n");
    } else {
        printf("Impossible de poser la tuile ici!\n");
    }
}
 */








int verifiePoseTuile(Tuile Plateau[26][12], int x, int y, Tuile a[TNORMALE]) {
    int nbTuilesVoisines = 0;
    int res = 1;
    if (x > 0 && Plateau[x-1][y].vide) {
        if(Plateau[x-1][y].couleurSymbole == a->couleurSymbole)
            nbTuilesVoisines++;
    }
    if (x < 25 && Plateau[x+1][y].vide) {
        if(Plateau[x+1][y].couleurSymbole == a->couleurSymbole)
            nbTuilesVoisines++;
    }
    if (y > 0 && Plateau[x][y-1].vide) {
        if(Plateau[x][y-1].couleurSymbole== a->couleurSymbole)
            nbTuilesVoisines++;
    }
    if (y < 11 && Plateau[x][y+1].vide) {
        if(Plateau[x][y+1].couleurSymbole == a->couleurSymbole)
            nbTuilesVoisines++;
    }
    if (nbTuilesVoisines >= 7) {
        printf("Il y a plus de 6 tuiles voisines!\n");
        res = 0;
        return  res;
    }
    return res;
}


bool verifierTuilesAdjacentes(Tuile Plateau[12][26], int x, int y) {
    // Vérifie les tuiles adjacentes en haut
    if (x > 0 && (Plateau[x-1][y].couleurSymbole == Plateau[x][y].couleurSymbole)) {
        return true;
    }
    // Vérifie les tuiles adjacentes à gauche
    if (y > 0 && (Plateau[x][y-1].couleurSymbole == Plateau[x][y].couleurSymbole)) {
        return true;
    }
    // Vérifie les tuiles adjacentes en bas
    if (x < 11 && (Plateau[x+1][y].couleurSymbole == Plateau[x][y].couleurSymbole)) {
        return true;
    }
    // Vérifie les tuiles adjacentes à droite
    if (y < 25 && (Plateau[x][y+1].couleurSymbole == Plateau[x][y].couleurSymbole)) {
        return true;
    }
    return false;
}


void emplacementXY(Tuile Plateau[12][26], Tuile tuileChoisie) {
    int x, y;
    printf("Ou souhaitez-vous poser la tuile? Entrez les coordonnees x et y :\n");
    scanf("%d %d", &x, &y);
    if (Plateau[x][y].vide == 0) {
        Plateau[x][y] = tuileChoisie;
        printf("Tuile posee avec succes!\n");
    } else {
        printf("Cette case n est pas vide, veuillez choisir une autre case.\n");
    }
}


void choisirTuilePupitre(Joueur pupitre[PUPITRE], int nbTuiles, Joueur nom[PSEUDO]) {
    int choix;
    printf("%c Choisissez une tuile à poser (1-6) : ", PSEUDO);
    scanf("%d", &choix);
    while (choix < 1 || choix > nbTuiles) {
        printf("Choix incorrect, merci de choisir une tuile valide (1-6) : " );
        scanf("%d", &choix);
    }
}

void tourJoueur(Tuile Plateau[12][26], Tuile pupitre[TNORMALE]) {
    int choix;
    printf("Choisissez une action :\n1. Afficher le pupitre\n2. Poser une tuile\n3. Echanger sa Tuile dans la pioche\n4. Passez son tour");
    scanf("%d", &choix);
    switch (choix) {
        case 1:
            afficherMainJoueur((Joueur) pupitre[PUPITRE]);
            break;
        case 2:
            choisirTuilePupitre(pupitre);
            poserTuile(Plateau,x,y,);
            break;
        case 3:
            echangerTuiles(Joueur pupitre[PUPITRE], Tuile pioche[TNORMALE], Tuile temp[1]);
            break;
        case 4:
            printf("Vous avez passé votre tour.\n");
            break;

        default:
            printf("Choix incorrect.\n");
            break;
    }
}


void echangerTuiles(Joueur pupitre[PUPITRE], Tuile pioche[TNORMALE], Tuile temp[1]) {
    int tuileChoisie;
    printf("Quelle tuile voulez-vous echanger (entrez un numero de 0 à 6) ?\n");
    scanf("%d", &tuileChoisie);
    // Vérifie que le choix est valide
    if (tuileChoisie >= 0 && tuileChoisie <= 6) {
        // Choisit une tuile au hasard dans la pioche
        int tuileEchange = rand() % TNORMALE;
        // Echange les tuiles
        Tuile temp[1] = pupitre[tuileChoisie];
        pupitre[tuileChoisie] = pioche[tuileEchange];
        pioche[tuileEchange] = temp;
    } else {
        printf("Choix de tuile non valide.\n");
    }
}

