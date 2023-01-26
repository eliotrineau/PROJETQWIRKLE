#include "tableau.h"


void pioche(Tuile pioche[PIOCHETP]){
    printf("Vous jouez en mode degrade ou en mode normal ?\n(degrade : 0)\n(normal : 1)\n");
    int choix = 0;
    Tuile temporaire;
    int variable = 36;
    scanf("%d",&choix);
    printf("choix : %d\n",choix);

    switch (choix) {
        case 0: {
            DegradeInit(pioche);
            for (int i = 0; i < TDEGRADE; ++i) {
                        int resultat = rand() % variable;
                        temporaire = pioche[PIOCHETP-i-1];
                        pioche[PIOCHETP-i-1] = pioche[resultat];
                        pioche[resultat] = temporaire;
                        variable--;
            }
            for (int i = 0; i < TDEGRADE; ++i) {
                printf("%s %d\n",pioche[i].couleurSymbole,i);
            }break;
        }
        case 1:
            //NormalInit(pioche);
            for (int i = 0; i < TNORMALE - 1; ++i) {
                        int resultat = rand() % variable;
                        temporaire = pioche[PIOCHETP-i];
                        pioche[PIOCHETP-i] = pioche[resultat];
                        pioche[resultat] = temporaire;
                        variable--;
            }
            for (int i = 0; i < TNORMALE - 1; ++i) {
                printf("%s %d\n",pioche[i].couleurSymbole,i);
            }break;
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
    for (int i = 0; i < 36; ++i) {
        printf("%s\n",tuile[i].couleurSymbole);
    }

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

void test(Tuile tuile[DEGRADE],Tuile t){
        verifCouleurDegrade(tuile,t);
}

