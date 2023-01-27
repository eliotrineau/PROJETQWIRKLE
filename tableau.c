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
void verifSymboleDegrade(Tuile tuile[TDEGRADE],Tuile t){
    DegradeInit(tuile);
    for (int i = 0; i < TDEGRADE; ++i) {
        tuile[i].symbolechoix = 0;
    }

    for (int i = 0; i < SYMBOLE; ++i) {
        tuile[i].symbolechoix=1;
    }
    for (int i = SYMBOLE; i < 2*SYMBOLE; ++i) {
        tuile[i].symbolechoix=2;
    }
    for (int i = 2*SYMBOLE; i < 3*SYMBOLE; ++i) {
        tuile[i].symbolechoix=3;
    }
    for (int i = 3*SYMBOLE; i < 4*SYMBOLE; ++i) {
        tuile[i].symbolechoix=4;
    }
    for (int i = 4*SYMBOLE; i < 5*SYMBOLE; ++i) {
        tuile[i].symbolechoix=5;
    }
    for (int i = 5*SYMBOLE; i < 6*SYMBOLE; ++i) {
        tuile[i].symbolechoix=6;
    }
    for (int i = 0; i < TDEGRADE; ++i) {
        if (tuile[i].symbolechoix==1){
            printf("1\n");
        }
        else if (tuile[i].symbolechoix==2){
            printf("2\n");
        }
        else if (tuile[i].symbolechoix==3){
            printf("3\n");
        }
        else if (tuile[i].symbolechoix==4){
            printf("4\n");
        }
        else if (tuile[i].symbolechoix==5){
            printf("5\n");
        }
        else if (tuile[i].symbolechoix==6){
            printf("6\n");
        }
    }
}

void verifCouleurDegrade(Tuile tuile[TDEGRADE],Tuile t){
    DegradeInit(tuile);
    for (int i = 0; i < TDEGRADE; ++i) {
        tuile[i].couleurchoix = 0;
    }

    for (int i = 0; i < SYMBOLE; ++i) {
        tuile[i].couleurchoix=1;
    }
    for (int i = SYMBOLE; i < 2*SYMBOLE; ++i) {
        tuile[i].couleurchoix=2;
    }
    for (int i = 2*SYMBOLE; i < 3*SYMBOLE; ++i) {
        tuile[i].couleurchoix=3;
    }
    for (int i = 3*SYMBOLE; i < 4*SYMBOLE; ++i) {
        tuile[i].couleurchoix=4;
    }
    for (int i = 4*SYMBOLE; i < 5*SYMBOLE; ++i) {
        tuile[i].couleurchoix=5;
    }
    for (int i = 5*SYMBOLE; i < 6*SYMBOLE; ++i) {
        tuile[i].couleurchoix=6;
    }
    for (int i = 0; i < TDEGRADE; ++i) {
        if (tuile[i].couleurchoix==1){
            printf("rouge\n");
        }
        else if (tuile[i].couleurchoix==2){
            printf("orange\n");
        }
        else if (tuile[i].couleurchoix==3){
            printf("jaune\n");
        }
        else if (tuile[i].couleurchoix==4){
            printf("vert\n");
        }
        else if (tuile[i].couleurchoix==5){
            printf("bleu\n");
        }
        else if (tuile[i].couleurchoix==6){
            printf("violet\n");
        }
    }
}

void normalInit(Tuile tuile[TNORMALE]){
    strcpy(tuile[0].couleurSymbole,"");
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

void verifSymboleNormal(Tuile tuile[TDEGRADE],Tuile t){
    normalInit(tuile);
    for (int i = 0; i < TNORMALE; ++i) {
        tuile[i].symbolechoix=0;
    }

    for (int i = 0; i < SYMBOLE; ++i) {
        tuile[i].symbolechoix==1;
    }
    for (int i = SYMBOLE; i < 2*SYMBOLE; ++i) {
        tuile[i].symbolechoix==2;
    }
    for (int i = 2*SYMBOLE; i < 3*SYMBOLE; ++i) {
        tuile[i].symbolechoix==3;
    }
    for (int i = 3*SYMBOLE; i < 4*SYMBOLE; ++i) {
        tuile[i].symbolechoix==4;
    }
    for (int i = 4*SYMBOLE; i < 5*SYMBOLE; ++i) {
        tuile[i].symbolechoix==5;
    }
    for (int i = 5*SYMBOLE; i < 6*SYMBOLE; ++i) {
        tuile[i].symbolechoix==6;
    }

    for (int i = 6*SYMBOLE; i < 7*SYMBOLE; ++i) {
        tuile[i].symbolechoix==1;
    }
    for (int i = 7*SYMBOLE; i < 8*SYMBOLE; ++i) {
        tuile[i].symbolechoix==2;
    }
    for (int i = 8*SYMBOLE; i < 9*SYMBOLE; ++i) {
        tuile[i].symbolechoix==3;
    }
    for (int i = 9*SYMBOLE; i < 10*SYMBOLE; ++i) {
        tuile[i].symbolechoix==4;
    }
    for (int i = 10*SYMBOLE; i < 11*SYMBOLE; ++i) {
        tuile[i].symbolechoix==5;
    }
    for (int i = 11*SYMBOLE; i < 12*SYMBOLE; ++i) {
        tuile[i].symbolechoix==6;
    }

    for (int i = 12*SYMBOLE; i < 13*SYMBOLE; ++i) {
        tuile[i].symbolechoix==1;
    }
    for (int i = 13*SYMBOLE; i < 14*SYMBOLE; ++i) {
        tuile[i].symbolechoix==2;
    }
    for (int i = 14*SYMBOLE; i < 15*SYMBOLE; ++i) {
        tuile[i].symbolechoix==3;
    }
    for (int i = 15*SYMBOLE; i < 16*SYMBOLE; ++i) {
        tuile[i].symbolechoix==4;
    }
    for (int i = 16*SYMBOLE; i < 17*SYMBOLE; ++i) {
        tuile[i].symbolechoix==5;
    }
    for (int i = 17*SYMBOLE;i < 18*SYMBOLE; ++i) {
        tuile[i].symbolechoix==6;
    }

    for (int i = 0; i < TNORMALE; ++i) {
        if (tuile[i].symbolechoix==1){
            printf("1\n");
        }
        else if (tuile[i].symbolechoix==2){
            printf("2\n");
        }
        else if (tuile[i].symbolechoix==3){
            printf("3\n");
        }
        else if (tuile[i].symbolechoix==4){
            printf("4\n");
        }
        else if (tuile[i].symbolechoix==5){
            printf("5\n");
        }
        else if (tuile[i].symbolechoix==6){
            printf("6\n");
        }
    }
}

void verifCouleurNormal(Tuile tuile[TNORMALE],Tuile t){
    normalInit(tuile);
    for (int i = 0; i < TNORMALE; ++i) {
        tuile[i].couleurchoix=0;
    }

    for (int i = 0; i < SYMBOLE; ++i) {
        tuile[i].couleurchoix==1;
    }
    for (int i = SYMBOLE; i < 2*SYMBOLE; ++i) {
        tuile[i].couleurchoix==2;
    }
    for (int i = 2*SYMBOLE; i < 3*SYMBOLE; ++i) {
        tuile[i].couleurchoix==3;
    }
    for (int i = 3*SYMBOLE; i < 4*SYMBOLE; ++i) {
        tuile[i].couleurchoix==4;
    }
    for (int i = 4*SYMBOLE; i < 5*SYMBOLE; ++i) {
        tuile[i].couleurchoix==5;
    }
    for (int i = 5*SYMBOLE; i < 6*SYMBOLE; ++i) {
        tuile[i].couleurchoix==6;
    }

    for (int i = 6*SYMBOLE; i < 7*SYMBOLE; ++i) {
        tuile[i].couleurchoix==1;
    }
    for (int i = 7*SYMBOLE; i < 8*SYMBOLE; ++i) {
        tuile[i].couleurchoix==2;
    }
    for (int i = 8*SYMBOLE; i < 9*SYMBOLE; ++i) {
        tuile[i].couleurchoix==3;
    }
    for (int i = 9*SYMBOLE; i < 10*SYMBOLE; ++i) {
        tuile[i].couleurchoix==4;
    }
    for (int i = 10*SYMBOLE; i < 11*SYMBOLE; ++i) {
        tuile[i].couleurchoix==5;
    }
    for (int i = 11*SYMBOLE; i < 12*SYMBOLE; ++i) {
        tuile[i].couleurchoix==6;
    }

    for (int i = 12*SYMBOLE; i < 13*SYMBOLE; ++i) {
        tuile[i].couleurchoix==1;
    }
    for (int i = 13*SYMBOLE; i < 14*SYMBOLE; ++i) {
        tuile[i].couleurchoix==2;
    }
    for (int i = 14*SYMBOLE; i < 15*SYMBOLE; ++i) {
        tuile[i].couleurchoix==3;
    }
    for (int i = 15*SYMBOLE; i < 16*SYMBOLE; ++i) {
        tuile[i].couleurchoix==4;
    }
    for (int i = 16*SYMBOLE; i < 17*SYMBOLE; ++i) {
        tuile[i].couleurchoix==5;
    }
    for (int i = 17*SYMBOLE; i < 18*SYMBOLE; ++i) {
        tuile[i].couleurchoix==6;
    }

    for (int i = 0; i < TNORMALE; ++i) {
        if (tuile[i].couleurchoix==1){
            printf("rouge\n");
        }
        else if (tuile[i].couleurchoix==2){
            printf("orange\n");
        }
        else if (tuile[i].couleurchoix==3){
            printf("jaune\n");
        }
        else if (tuile[i].couleurchoix==4){
            printf("vert\n");
        }
        else if (tuile[i].couleurchoix==5){
            printf("bleu\n");
        }
        else if (tuile[i].couleurchoix==6){
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



void distribuerTuilesDegrade(Joueur joueurs[NBJMAX], Tuile pioche[TDEGRADE], int* taille, DonneesJeu jeu) {
    Tuile tuileAPiocher;
    DegradeInit(pioche);
    int remplissage = 0;
    int maxPupitre = PUPITRE;
    for (int i = 0; i < jeu.nbJoueur; i++) {
        printf("Joueur : %d\n",i+1);
        for (int j = 0; j < PUPITRE; j++) {
            do {
                PiocherUneTuile(&tuileAPiocher, pioche, taille);
                remplissage++;
                if (remplissage >= TDEGRADE) {
                    printf("Tous les pupitres de joueur sont pleins\n");
                    printf("Il reste %d tuiles dans la pioche\n",*taille);
                    break;
                }
            }
            while (tuileAPiocher.tuileDistribue == -1);
            tuileAPiocher.tuileDistribue = -1;
            joueurs[i].main[j] = tuileAPiocher;
            strcpy(joueurs->main[i].couleurSymbole,tuileAPiocher.couleurSymbole);
            printf("%s\n",joueurs->main[i].couleurSymbole);
        }
    }
}

void distribuerTuilesNormal(Joueur joueurs[NBJMAX], Tuile pioche[TNORMALE], int* taille, DonneesJeu jeu) {
    Tuile tuileAPiocher;
    normalInit(pioche);
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
                    printf("Il reste %d tuiles dans la pioche\n",*taille);
                }
            }
            while (tuileAPiocher.tuileDistribue == -1);
            tuileAPiocher.tuileDistribue = -1;
            strcpy(joueurs->main[i].couleurSymbole,tuileAPiocher.couleurSymbole);
            printf("%s\n",joueurs->main[i].couleurSymbole);

        }
    }
}

void remplirPupitreDegrade(Joueur* joueur, Tuile pioche[], int* taillePioche, int nbTuilesPosees) {
    DegradeInit(pioche);
    int tuilesManquantes = 0;
    int remplirTuilesAleatoirement = 0;
    tuilesManquantes = PUPITRE - nbTuilesPosees;
    for (int i = 0; i < nbTuilesPosees; i++) {
        if (*taillePioche <= 0) {
            printf("La pioche est vide");
        }
        remplirTuilesAleatoirement = rand() % *taillePioche;
        strcpy(&joueur->pupitre[i + tuilesManquantes],pioche[remplirTuilesAleatoirement].couleurSymbole);
        //printf("%s\n", &joueur->pupitre[i+nbTuilesPosees]);
        //printf("%s\n", pioche[remplirTuilesAleatoirement].couleurSymbole);
        //joueur->pupitre[i + nbTuilesPosees] = pioche[remplirTuilesAleatoirement];
        for (int j = remplirTuilesAleatoirement; j < *taillePioche - 1; j++) {
            pioche[j] = pioche[j + 1];
        }
        (*taillePioche)--;
    }

}

void remplirPupitreNormal(Joueur* joueur, Tuile pioche[], int* taillePioche, int nbTuilesPosees) {
    normalInit(pioche);
    int tuilesManquantes = 0;
    int remplirTuilesAleatoirement = 0;
    tuilesManquantes = PUPITRE - nbTuilesPosees;
    for (int i = 0; i < tuilesManquantes; i++) {
        if (*taillePioche <= 0) {
            printf("La pioche est vide");
        }
        remplirTuilesAleatoirement = rand() % *taillePioche;
        strcpy(&joueur->pupitre[i + nbTuilesPosees],pioche[remplirTuilesAleatoirement].couleurSymbole);
        printf("%s\n", pioche[remplirTuilesAleatoirement].couleurSymbole);
        //joueur->pupitre[i + nbTuilesPosees] = pioche[remplirTuilesAleatoirement];
        for (int j = remplirTuilesAleatoirement; j < *taillePioche - 1; j++) {
            pioche[j] = pioche[j + 1];
        }
        (*taillePioche)--;
    }
}


void afficherMainJoueur(Joueur j) {
    printf("Main du joueur : ");
    for (int i = 0; i < PUPITRE; i++) {
        printf("Tuile %d :",i);
        tuile(j.main[i]);
    }
    printf("\n");
}

void tuile(Tuile tuile) {
    switch(tuile.couleurchoix) {
        case 1: {
            switch (tuile.symbolechoix) {
                case 1:{
                    printf("\033[31m1\033[0m");
                }break;
                case 2:{
                    printf("\033[31m2\033[0m");
                }break;
                case 3:{
                    printf("\033[31m3\033[0m");
                }break;
                case 4:{
                    printf("\033[31m4\033[0m");
                }break;
                case 5:{
                    printf("\033[31m5\033[0m");
                }break;
                case 6:{
                    printf("\033[31m6\033[0m");
                }break;
            }
        }break;
        case 2:{
            switch (tuile.symbolechoix) {
                case 1:{
                    printf("\033[38;2;255;165;0m1\033[0m");
                }break;
                case 2:{
                    printf("\033[38;2;255;165;0m2\033[0m");
                }break;
                case 3:{
                    printf("\033[38;2;255;165;0m3\033[0m");
                }break;
                case 4:{
                    printf("\033[38;2;255;165;0m4\033[0m");
                }break;
                case 5:{
                    printf("\033[38;2;255;165;0m5\033[0m");
                }break;
                case 6:{
                    printf("\033[38;2;255;165;0m6\033[0m");
                }break;
            }
        }break;
        case 3:{
            switch (tuile.symbolechoix) {
                case 1:{
                    printf("\033[33m1\033[0m");
                }break;
                case 2:{
                    printf("\033[33m2\033[0m");
                }break;
                case 3:{
                    printf("\033[33m3\033[0m");
                }break;
                case 4:{
                    printf("\033[33m4\033[0m");
                }break;
                case 5:{
                    printf("\033[33m5\033[0m");
                }break;
                case 6:{
                    printf("\033[33m6\033[0m");
                }break;
            }
        }break;
        case 4:{
            switch (tuile.symbolechoix) {
                case 1:{
                    printf("\033[32m1\033[0m");
                }break;
                case 2:{
                    printf("\033[32m2\033[0m");
                }break;
                case 3:{
                    printf("\033[32m3\033[0m");
                }break;
                case 4:{
                    printf("\033[32m4\033[0m");
                }break;
                case 5:{
                    printf("\033[32m5\033[0m");
                }break;
                case 6:{
                    printf("\033[32m6\033[0m");
                }break;
            }
        }break;
        case 5:{
            switch (tuile.symbolechoix) {
                case 1:{
                    printf("\033[34m1\033[0m");
                }break;
                case 2:{
                    printf("\033[34m2\033[0m");
                }break;
                case 3:{
                    printf("\033[34m3\033[0m");
                }break;
                case 4:{
                    printf("\033[34m4\033[0m");
                }break;
                case 5:{
                    printf("\033[34m5\033[0m");
                }break;
                case 6:{
                    printf("\033[34m6\033[0m");
                }break;
            }
        }break;
        case 6:{
            switch (tuile.symbolechoix) {
                case 1:{
                    printf("\033[35m1\033[0m");
                }break;
                case 2:{
                    printf("\033[35m2\033[0m");
                }break;
                case 3:{
                    printf("\033[35m3\033[0m");
                }break;
                case 4:{
                    printf("\033[35m4\033[0m");
                }break;
                case 5:{
                    printf("\033[35m5\033[0m");
                }break;
                case 6:{
                    printf("\033[35m6\033[0m");
                }break;
            }
        }
    }
}




void choixTuile(Joueur* joueur,DonneesPlateau* plateau,int i,int j){
    int choix = 0;
    printf("Quelle tuile voulez-vous posez ?(0 a 5]\n");
    scanf("%d", &choix);
    switch (choix) {
        case 0:{
            plateau->plateau[i][j] = joueur->main[choix];
            plateau->plateau[i][j].i = i;
            plateau->plateau[i][j].j = j;
            joueur->main[choix].i = 0;
            joueur->main[choix].j = 0;
            joueur->main[choix].couleurchoix = '\0';
            joueur->main[choix].symbolechoix = '\0';
        }break;
        case 1:{
            plateau->plateau[i][j] = joueur->main[choix];
            plateau->plateau[i][j].i = i;
            plateau->plateau[i][j].j = j;
            joueur->main[choix].i = 0;
            joueur->main[choix].j = 0;
            joueur->main[choix].couleurchoix = '\0';
            joueur->main[choix].symbolechoix = '\0';
        }break;
        case 2:{
            plateau->plateau[i][j] = joueur->main[choix];
            plateau->plateau[i][j].i = i;
            plateau->plateau[i][j].j = j;
            joueur->main[choix].i = 0;
            joueur->main[choix].j = 0;
            joueur->main[choix].couleurchoix = '\0';
            joueur->main[choix].symbolechoix = '\0';
        }break;
        case 3:{
            plateau->plateau[i][j] = joueur->main[choix];
            plateau->plateau[i][j].i = i;
            plateau->plateau[i][j].j = j;
            joueur->main[choix].i = 0;
            joueur->main[choix].j = 0;
            joueur->main[choix].couleurchoix = '\0';
            joueur->main[choix].symbolechoix = '\0';
        }break;
        case 4:{
            plateau->plateau[i][j] = joueur->main[choix];
            plateau->plateau[i][j].i = i;
            plateau->plateau[i][j].j = j;
            joueur->main[choix].i = 0;
            joueur->main[choix].j = 0;
            joueur->main[choix].couleurchoix = '\0';
            joueur->main[choix].symbolechoix = '\0';
        }break;
        case 5:{
            plateau->plateau[i][j] = joueur->main[choix];
            plateau->plateau[i][j].i = i;
            plateau->plateau[i][j].j = j;
            joueur->main[choix].i = 0;
            joueur->main[choix].j = 0;
            joueur->main[choix].couleurchoix = '\0';
            joueur->main[choix].symbolechoix = '\0';
        }break;
        default:
            printf("ressaisir choix :\n");
            scanf("%d",&choix);
    }
}

void afficherMainJoueurActualisation(DonneesPioche *pioche, int nbTuiles) {
    for (int i = 0; i < PUPITRE; i++) {
        if (*pioche->pioche[i].couleurSymbole=='\0'){
            for (int j = i; j < *pioche->pioche[i].couleurSymbole=='\0'; j++) {
                pioche->pioche[j]=pioche->pioche[j+1]; // decale la pioche pour enlever la tuile
                }
            }
        }printf("Pioche a jour.\n");
}

void modeDejeu(int* mode,int* nbTuiles){
    printf("Mode degrade (36 Tuiles : TAPER 0)\nmode normal (108 Tuiles : TAPER 1)\n");
    scanf("%d",mode);
    switch (*mode) {
        case 0:{
            *nbTuiles = TDEGRADE;
        }break;
        case 1:{
            *nbTuiles = TNORMALE;
        }break;
        default:
            printf("ressaisir mode :\nMode degrade (36 Tuiles : TAPER 0)\nmode normal (108 Tuiles : TAPER 1)\n");
            scanf("%d",mode);
            break;
    }
}


//commit