#include "tableau.h"


void pioche(Tuile pioche[PIOCHETP]){
    printf("Vous jouez en mode degrade ou en mode normal ?\n(degrade : 0)\n(normal : 1)\n");
    int choix = 0;
    Tuile temporaire;
    int variableDegrade = 36;
    int variableNormal = 108;
    int tailleDegrade = TDEGRADE;
    int tailleNormal = TNORMALE;
    scanf("%d",&choix);
    printf("choix : %d\n",choix);

    switch (choix) {
        case 0: {
            DegradeInit(pioche);
            for (int i = 0; i < TDEGRADE; ++i) {
                        int resultat = rand() % variableDegrade;
                        temporaire = pioche[TDEGRADE-i-1];
                        pioche[TDEGRADE-i-1] = pioche[resultat];
                        pioche[resultat] = temporaire;
                        variableDegrade--;
            }
            Tuile tuileAPiocher;
            PiocherUneTuile(&tuileAPiocher, pioche, &tailleDegrade);   ///TEMPORAIRETEST
            printf("Tuile piochée : %s\n", tuileAPiocher.couleurSymbole);   ///TEMPORAIRETEST
            break;
        }
        case 1:
            normalInit(pioche);
            for (int i = 0; i < TNORMALE; ++i) {
                        int resultat = rand() % variableNormal;
                        temporaire = pioche[TNORMALE-i-1];
                        pioche[TNORMALE-i-1] = pioche[resultat];
                        pioche[resultat] = temporaire;
                        variableNormal--;
            }
            Tuile tuileAPiocher;
            PiocherUneTuile(&tuileAPiocher, pioche, &tailleNormal);   ///TEMPORAIRETEST
            printf("Tuile piochée : %s\n", tuileAPiocher.couleurSymbole);   ///TEMPORAIRETEST
            break;
        default:break;
    }
}



void DegradeInit(Tuile tuile[TDEGRADE]){
    strcpy(tuile[0].couleurSymbole,"\033[31m1\033[0m");
    strcpy(tuile[1].couleurSymbole,"\033[31m2\033[0m");
    strcpy(tuile[2].couleurSymbole,"\033[31m3\033[0m");
    strcpy(tuile[3].couleurSymbole,"\033[31m4\033[0m");
    strcpy(tuile[4].couleurSymbole,"\033[31m5\033[0m");
    strcpy(tuile[5].couleurSymbole,"\033[31m6\033[0m");
    strcpy(tuile[6].couleurSymbole,"\033[38;2;255;165;0m1\033[0m");
    strcpy(tuile[7].couleurSymbole,"\033[38;2;255;165;0m2\033[0m");
    strcpy(tuile[8].couleurSymbole,"\033[38;2;255;165;0m3\033[0m");
    strcpy(tuile[9].couleurSymbole,"\033[38;2;255;165;0m4\033[0m");
    strcpy(tuile[10].couleurSymbole,"\033[38;2;255;165;0m5\033[0m");
    strcpy(tuile[11].couleurSymbole,"\033[38;2;255;165;0m6\033[0m");
    strcpy(tuile[12].couleurSymbole,"\033[33m1\033[0m");
    strcpy(tuile[13].couleurSymbole,"\033[33m2\033[0m");
    strcpy(tuile[14].couleurSymbole,"\033[33m3\033[0m");
    strcpy(tuile[15].couleurSymbole,"\033[33m4\033[0m");
    strcpy(tuile[16].couleurSymbole,"\033[33m5\033[0m");
    strcpy(tuile[17].couleurSymbole,"\033[33m6\033[0m");
    strcpy(tuile[18].couleurSymbole,"\033[32m1\033[0m");
    strcpy(tuile[19].couleurSymbole,"\033[32m2\033[0m");
    strcpy(tuile[20].couleurSymbole,"\033[32m3\033[0m");
    strcpy(tuile[21].couleurSymbole,"\033[32m4\033[0m");
    strcpy(tuile[22].couleurSymbole,"\033[32m5\033[0m");
    strcpy(tuile[23].couleurSymbole,"\033[32m6\033[0m");
    strcpy(tuile[24].couleurSymbole,"\033[34m1\033[0m");
    strcpy(tuile[25].couleurSymbole,"\033[34m2\033[0m");
    strcpy(tuile[26].couleurSymbole,"\033[34m3\033[0m");
    strcpy(tuile[27].couleurSymbole,"\033[34m4\033[0m");
    strcpy(tuile[28].couleurSymbole,"\033[34m5\033[0m");
    strcpy(tuile[29].couleurSymbole,"\033[34m6\033[0m");
    strcpy(tuile[30].couleurSymbole,"\033[35m1\033[0m");
    strcpy(tuile[31].couleurSymbole,"\033[35m2\033[0m");
    strcpy(tuile[32].couleurSymbole,"\033[35m3\033[0m");
    strcpy(tuile[33].couleurSymbole,"\033[35m4\033[0m");
    strcpy(tuile[34].couleurSymbole,"\033[35m5\033[0m");
    strcpy(tuile[35].couleurSymbole,"\033[35m6\033[0m");
    //for (int i = 0; i < 36; ++i) {
    //    printf("%s\n",tuile[i].couleurSymbole);
    //}

}

void verifCouleurDegrade(Tuile tuile[TDEGRADE],Tuile t){
    DegradeInit(tuile);
    for (int i = 0; i < TDEGRADE; ++i) {
        tuile[i].couleurRouge = false;
        tuile[i].couleurOrange = false;
        tuile[i].couleurJaune = false;
        tuile[i].couleurVert = false;
        tuile[i].couleurBleu = false;
        tuile[i].couleurViolet = false;
    }

    for (int i = 0; i < COULEUR; ++i) {
        tuile[i].couleurRouge=true;
    }
    for (int i = COULEUR; i < 2*COULEUR; ++i) {
        tuile[i].couleurOrange=true;
    }
    for (int i = 2*COULEUR; i < 3*COULEUR; ++i) {
        tuile[i].couleurJaune=true;
    }
    for (int i = 3*COULEUR; i < 4*COULEUR; ++i) {
        tuile[i].couleurVert=true;
    }
    for (int i = 4*COULEUR; i < 5*COULEUR; ++i) {
        tuile[i].couleurBleu=true;
    }
    for (int i = 5*COULEUR; i < 6*COULEUR; ++i) {
        tuile[i].couleurViolet=true;
    }
    for (int i = 0; i < TDEGRADE; ++i) {
        if (tuile[i].couleurRouge==true){
            printf("rouge\n");
        }
        else if (tuile[i].couleurOrange==true){
            printf("orange\n");
        }
        else if (tuile[i].couleurJaune==true){
            printf("jaune\n");
        }
        else if (tuile[i].couleurVert==true){
            printf("vert\n");
        }
        else if (tuile[i].couleurBleu==true){
            printf("bleu\n");
        }
        else if (tuile[i].couleurViolet==true){
            printf("violet\n");
        }
    }
}

void normalInit(Tuile tuile[TNORMALE]){
    strcpy(tuile[0].couleurSymbole,"\033[31m1\033[0m");
    strcpy(tuile[1].couleurSymbole,"\033[31m2\033[0m");
    strcpy(tuile[2].couleurSymbole,"\033[31m3\033[0m");
    strcpy(tuile[3].couleurSymbole,"\033[31m4\033[0m");
    strcpy(tuile[4].couleurSymbole,"\033[31m5\033[0m");
    strcpy(tuile[5].couleurSymbole,"\033[31m6\033[0m");
    strcpy(tuile[6].couleurSymbole,"\033[38;2;255;165;0m1\033[0m");
    strcpy(tuile[7].couleurSymbole,"\033[38;2;255;165;0m2\033[0m");
    strcpy(tuile[8].couleurSymbole,"\033[38;2;255;165;0m3\033[0m");
    strcpy(tuile[9].couleurSymbole,"\033[38;2;255;165;0m4\033[0m");
    strcpy(tuile[10].couleurSymbole,"\033[38;2;255;165;0m5\033[0m");
    strcpy(tuile[11].couleurSymbole,"\033[38;2;255;165;0m6\033[0m");
    strcpy(tuile[12].couleurSymbole,"\033[33m1\033[0m");
    strcpy(tuile[13].couleurSymbole,"\033[33m2\033[0m");
    strcpy(tuile[14].couleurSymbole,"\033[33m3\033[0m");
    strcpy(tuile[15].couleurSymbole,"\033[33m4\033[0m");
    strcpy(tuile[16].couleurSymbole,"\033[33m5\033[0m");
    strcpy(tuile[17].couleurSymbole,"\033[33m6\033[0m");
    strcpy(tuile[18].couleurSymbole,"\033[32m1\033[0m");
    strcpy(tuile[19].couleurSymbole,"\033[32m2\033[0m");
    strcpy(tuile[20].couleurSymbole,"\033[32m3\033[0m");
    strcpy(tuile[21].couleurSymbole,"\033[32m4\033[0m");
    strcpy(tuile[22].couleurSymbole,"\033[32m5\033[0m");
    strcpy(tuile[23].couleurSymbole,"\033[32m6\033[0m");
    strcpy(tuile[24].couleurSymbole,"\033[34m1\033[0m");
    strcpy(tuile[25].couleurSymbole,"\033[34m2\033[0m");
    strcpy(tuile[26].couleurSymbole,"\033[34m3\033[0m");
    strcpy(tuile[27].couleurSymbole,"\033[34m4\033[0m");
    strcpy(tuile[28].couleurSymbole,"\033[34m5\033[0m");
    strcpy(tuile[29].couleurSymbole,"\033[34m6\033[0m");
    strcpy(tuile[30].couleurSymbole,"\033[35m1\033[0m");
    strcpy(tuile[31].couleurSymbole,"\033[35m2\033[0m");
    strcpy(tuile[32].couleurSymbole,"\033[35m3\033[0m");
    strcpy(tuile[33].couleurSymbole,"\033[35m4\033[0m");
    strcpy(tuile[34].couleurSymbole,"\033[35m5\033[0m");
    strcpy(tuile[35].couleurSymbole,"\033[35m6\033[0m");


    strcpy(tuile[36].couleurSymbole,"\033[31m1\033[0m");
    strcpy(tuile[37].couleurSymbole,"\033[31m2\033[0m");
    strcpy(tuile[38].couleurSymbole,"\033[31m3\033[0m");
    strcpy(tuile[39].couleurSymbole,"\033[31m4\033[0m");
    strcpy(tuile[40].couleurSymbole,"\033[31m5\033[0m");
    strcpy(tuile[41].couleurSymbole,"\033[31m6\033[0m");
    strcpy(tuile[42].couleurSymbole,"\033[38;2;255;165;0m1\033[0m");
    strcpy(tuile[43].couleurSymbole,"\033[38;2;255;165;0m2\033[0m");
    strcpy(tuile[44].couleurSymbole,"\033[38;2;255;165;0m3\033[0m");
    strcpy(tuile[45].couleurSymbole,"\033[38;2;255;165;0m4\033[0m");
    strcpy(tuile[46].couleurSymbole,"\033[38;2;255;165;0m5\033[0m");
    strcpy(tuile[47].couleurSymbole,"\033[38;2;255;165;0m6\033[0m");
    strcpy(tuile[48].couleurSymbole,"\033[33m1\033[0m");
    strcpy(tuile[49].couleurSymbole,"\033[33m2\033[0m");
    strcpy(tuile[50].couleurSymbole,"\033[33m3\033[0m");
    strcpy(tuile[51].couleurSymbole,"\033[33m4\033[0m");
    strcpy(tuile[52].couleurSymbole,"\033[33m5\033[0m");
    strcpy(tuile[53].couleurSymbole,"\033[33m6\033[0m");
    strcpy(tuile[54].couleurSymbole,"\033[32m1\033[0m");
    strcpy(tuile[55].couleurSymbole,"\033[32m2\033[0m");
    strcpy(tuile[56].couleurSymbole,"\033[32m3\033[0m");
    strcpy(tuile[57].couleurSymbole,"\033[32m4\033[0m");
    strcpy(tuile[58].couleurSymbole,"\033[32m5\033[0m");
    strcpy(tuile[59].couleurSymbole,"\033[32m6\033[0m");
    strcpy(tuile[60].couleurSymbole,"\033[34m1\033[0m");
    strcpy(tuile[61].couleurSymbole,"\033[34m2\033[0m");
    strcpy(tuile[62].couleurSymbole,"\033[34m3\033[0m");
    strcpy(tuile[63].couleurSymbole,"\033[34m4\033[0m");
    strcpy(tuile[64].couleurSymbole,"\033[34m5\033[0m");
    strcpy(tuile[65].couleurSymbole,"\033[34m6\033[0m");
    strcpy(tuile[66].couleurSymbole,"\033[35m1\033[0m");
    strcpy(tuile[67].couleurSymbole,"\033[35m2\033[0m");
    strcpy(tuile[68].couleurSymbole,"\033[35m3\033[0m");
    strcpy(tuile[69].couleurSymbole,"\033[35m4\033[0m");
    strcpy(tuile[70].couleurSymbole,"\033[35m5\033[0m");
    strcpy(tuile[71].couleurSymbole,"\033[35m6\033[0m");


    strcpy(tuile[72].couleurSymbole,"\033[31m1\033[0m");
    strcpy(tuile[73].couleurSymbole,"\033[31m2\033[0m");
    strcpy(tuile[74].couleurSymbole,"\033[31m3\033[0m");
    strcpy(tuile[75].couleurSymbole,"\033[31m4\033[0m");
    strcpy(tuile[76].couleurSymbole,"\033[31m5\033[0m");
    strcpy(tuile[77].couleurSymbole,"\033[31m6\033[0m");
    strcpy(tuile[78].couleurSymbole,"\033[38;2;255;165;0m1\033[0m");
    strcpy(tuile[79].couleurSymbole,"\033[38;2;255;165;0m2\033[0m");
    strcpy(tuile[80].couleurSymbole,"\033[38;2;255;165;0m3\033[0m");
    strcpy(tuile[81].couleurSymbole,"\033[38;2;255;165;0m4\033[0m");
    strcpy(tuile[82].couleurSymbole,"\033[38;2;255;165;0m5\033[0m");
    strcpy(tuile[83].couleurSymbole,"\033[38;2;255;165;0m6\033[0m");
    strcpy(tuile[84].couleurSymbole,"\033[33m1\033[0m");
    strcpy(tuile[85].couleurSymbole,"\033[33m2\033[0m");
    strcpy(tuile[86].couleurSymbole,"\033[33m3\033[0m");
    strcpy(tuile[87].couleurSymbole,"\033[33m4\033[0m");
    strcpy(tuile[88].couleurSymbole,"\033[33m5\033[0m");
    strcpy(tuile[89].couleurSymbole,"\033[33m6\033[0m");
    strcpy(tuile[90].couleurSymbole,"\033[32m1\033[0m");
    strcpy(tuile[91].couleurSymbole,"\033[32m2\033[0m");
    strcpy(tuile[92].couleurSymbole,"\033[32m3\033[0m");
    strcpy(tuile[93].couleurSymbole,"\033[32m4\033[0m");
    strcpy(tuile[94].couleurSymbole,"\033[32m5\033[0m");
    strcpy(tuile[95].couleurSymbole,"\033[32m6\033[0m");
    strcpy(tuile[96].couleurSymbole,"\033[34m1\033[0m");
    strcpy(tuile[97].couleurSymbole,"\033[34m2\033[0m");
    strcpy(tuile[98].couleurSymbole,"\033[34m3\033[0m");
    strcpy(tuile[99].couleurSymbole,"\033[34m4\033[0m");
    strcpy(tuile[100].couleurSymbole,"\033[34m5\033[0m");
    strcpy(tuile[101].couleurSymbole,"\033[34m6\033[0m");
    strcpy(tuile[102].couleurSymbole,"\033[35m1\033[0m");
    strcpy(tuile[103].couleurSymbole,"\033[35m2\033[0m");
    strcpy(tuile[104].couleurSymbole,"\033[35m3\033[0m");
    strcpy(tuile[105].couleurSymbole,"\033[35m4\033[0m");
    strcpy(tuile[106].couleurSymbole,"\033[35m5\033[0m");
    strcpy(tuile[107].couleurSymbole,"\033[35m6\033[0m");
    //for (int i = 0; i < 108; ++i) {
    //    printf("%s\n",tuile[i].couleurSymbole);
    //}
}


void verifCouleurNormal(Tuile tuile[TNORMALE],Tuile t){
    normalInit(tuile);
    for (int i = 0; i < TNORMALE; ++i) {
        tuile[i].couleurRouge = false;
        tuile[i].couleurOrange = false;
        tuile[i].couleurJaune = false;
        tuile[i].couleurVert = false;
        tuile[i].couleurBleu = false;
        tuile[i].couleurViolet = false;
    }

    for (int i = 0; i < COULEUR; ++i) {
        tuile[i].couleurRouge=true;
    }
    for (int i = COULEUR; i < 2*COULEUR; ++i) {
        tuile[i].couleurOrange=true;
    }
    for (int i = 2*COULEUR; i < 3*COULEUR; ++i) {
        tuile[i].couleurJaune=true;
    }
    for (int i = 3*COULEUR; i < 4*COULEUR; ++i) {
        tuile[i].couleurVert=true;
    }
    for (int i = 4*COULEUR; i < 5*COULEUR; ++i) {
        tuile[i].couleurBleu=true;
    }
    for (int i = 5*COULEUR; i < 6*COULEUR; ++i) {
        tuile[i].couleurViolet=true;
    }

    for (int i = 6*COULEUR; i < 7*COULEUR; ++i) {
        tuile[i].couleurRouge=true;
    }
    for (int i = 7*COULEUR; i < 8*COULEUR; ++i) {
        tuile[i].couleurOrange=true;
    }
    for (int i = 8*COULEUR; i < 9*COULEUR; ++i) {
        tuile[i].couleurJaune=true;
    }
    for (int i = 9*COULEUR; i < 10*COULEUR; ++i) {
        tuile[i].couleurVert=true;
    }
    for (int i = 10*COULEUR; i < 11*COULEUR; ++i) {
        tuile[i].couleurBleu=true;
    }
    for (int i = 11*COULEUR; i < 12*COULEUR; ++i) {
        tuile[i].couleurViolet=true;
    }

    for (int i = 12*COULEUR; i < 13*COULEUR; ++i) {
        tuile[i].couleurRouge=true;
    }
    for (int i = 13*COULEUR; i < 14*COULEUR; ++i) {
        tuile[i].couleurOrange=true;
    }
    for (int i = 14*COULEUR; i < 15*COULEUR; ++i) {
        tuile[i].couleurJaune=true;
    }
    for (int i = 15*COULEUR; i < 16*COULEUR; ++i) {
        tuile[i].couleurVert=true;
    }
    for (int i = 16*COULEUR; i < 17*COULEUR; ++i) {
        tuile[i].couleurBleu=true;
    }
    for (int i = 17*COULEUR; i < 18*COULEUR; ++i) {
        tuile[i].couleurViolet=true;
    }

    for (int i = 0; i < TNORMALE; ++i) {
        if (tuile[i].couleurRouge==true){
            printf("rouge\n");
        }
        else if (tuile[i].couleurOrange==true){
            printf("orange\n");
        }
        else if (tuile[i].couleurJaune==true){
            printf("jaune\n");
        }
        else if (tuile[i].couleurVert==true){
            printf("vert\n");
        }
        else if (tuile[i].couleurBleu==true){
            printf("bleu\n");
        }
        else if (tuile[i].couleurViolet==true){
            printf("violet\n");
        }
    }
}

void test(Tuile tuile[DEGRADE],Tuile t){
    verifCouleurDegrade(tuile,t);
        verifCouleurNormal(tuile,t);
}


void PiocherUneTuile(Tuile* tuileAPiocher, Tuile pioche[], int* taille) {
    if (*taille <= 0) {
        printf("La pioche est vide\n");
    }
    int tuileAleatoireAPiocher = rand() % *taille;
    *tuileAPiocher = pioche[tuileAleatoireAPiocher];
    for (int i = tuileAleatoireAPiocher; i < *taille - 1; i++) {
        pioche[i] = pioche[i + 1];
    }
    (*taille)--;
}



void distribuerTuiles(Joueur joueurs[], Tuile pioche[], int* taille, DonneesJeu jeu) {
    Tuile tuileAPiocher;
    DegradeInit(pioche);
    int remplissage = 0;
    int maxPupitre = PUPITRE;
    for (int i = 0; i < jeu.nbJoueur; i++) {
        printf("Joueur : %d\n",i+1);
        for (int j = 0; j < PUPITRE; j++) {
            do {
                PiocherUneTuile(&tuileAPiocher, pioche, taille);
                printf("%s\n",tuileAPiocher.couleurSymbole);
                remplissage++;
                if (remplissage >= jeu.nbJoueur*6){
                    printf("Tous les pupitres de joueur sont pleins\n");
                }
            }
            while (tuileAPiocher.tuileDistribue == -1);
            tuileAPiocher.tuileDistribue = -1;
            strcpy(&joueurs[i].pupitre[j],tuileAPiocher.couleurSymbole);
        }
    }
}

