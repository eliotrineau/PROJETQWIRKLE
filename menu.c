#include "menu.h"
#include "tableau.h"

void menuAction(){
    Joueur* joueur;
    DonneesPlateau plateau;
    int i,j;
    int choix = 0;
    printf("Voulez-vous mettre fin à la partie ?\n");
    printf("Deposer tuile(s)\n");
    printf("Afficher score & classement\n");
    switch (choix) {
        case 0:{
            exit(1);
        }break;
        case 2:{
            printf("Quelle tuile(s) voulez-vous déposer ? (0-5)\n");
            scanf("%d",&choix);
            switch (choix) {
                case 0:{
                    choixTuile(joueur,&plateau,i,j);
                }
            }
        }break;

    }

}


void jeu(DonneesJeu* jeu) {
    int nbJ = 0;
    int mode = 0;
    Tuile pioche1[TDEGRADE];
    Tuile pioche2[TNORMALE];
    printf("-----------------------------------------------------------------------\n");
    printf("-----------------------------------------------------------------------\n");
    printf("-----------------------------------------------------------------------\n");
    printf("Vous voulez jouer a combien de joueur ? (2 a 4)\n");
    scanf("%d", &nbJ);
    switch (nbJ) {
        case 1: {
            printf("choix du nombre de joueur invalide\n");
            scanf("%d", &nbJ);
        }
            break;
        case 2: {
            nbJ = 2;
            printf("Mode normal (1) ou degrade (0)?\n");
            scanf("%d", &mode);
            switch (mode) {
                case 0: {
                    mode = 0;
                    printf("Vous avez choisi le mode degrade");
                    Tuile temporaire;
                    int variableDegrade = 36;
                    int tailleDegrade = TDEGRADE;
                    DegradeInit(pioche1);
                    for (int i = 0; i < TDEGRADE; ++i) {
                        int resultat = rand() % variableDegrade;
                        temporaire = pioche1[TDEGRADE-i];
                        pioche1[TDEGRADE-i] = pioche1[resultat];
                        temporaire = pioche1[TDEGRADE-i-1];
                        pioche1[TDEGRADE-i-1] = pioche1[resultat];
                        pioche1[resultat] = temporaire;
                        variableDegrade--;
                    }
                    for (int i = 0; i < TDEGRADE; ++i) {
                        printf("%s %d\n",pioche1[i].couleurSymbole,i);
                    }
                    break;
                    case 1: {
                        mode = 1;
                        printf("Vous avez choisi le mode normal");
                        int variableNormal = 108;
                        int tailleNormal = TNORMALE;
                        normalInit(pioche2);
                        for (int i = 0; i < TNORMALE; ++i) {
                            int resultat = rand() % variableNormal;
                            temporaire = pioche2[TNORMALE - i - 1];
                            pioche2[TNORMALE - i - 1] = pioche2[resultat];
                            pioche2[resultat] = temporaire;
                            variableNormal--;
                        }
                        for (int i = 0; i < TNORMALE; ++i) {
                            printf("%s %d\n",pioche2[i].couleurSymbole,i);
                        }
                    }
                    break;
                }
                default:
                    printf("mode invalide\n");
                    scanf("%d", &mode);
            }
            break;
            case 3: {
                nbJ = 3;
                printf("Mode normal (1) ou degrade (0)?\n");
                scanf("%d", &mode);
                switch (mode) {
                    case 0: {
                        mode = 0;
                        printf("Vous avez choisi le mode degrade");
                        Tuile temporaire;
                        int variableDegrade = 36;
                        int tailleDegrade = TDEGRADE;
                        DegradeInit(pioche1);
                        for (int i = 0; i < TDEGRADE; ++i) {
                            int resultat = rand() % variableDegrade;
                            temporaire = pioche1[TDEGRADE-i];
                            pioche1[TDEGRADE-i] = pioche1[resultat];
                            temporaire = pioche1[TDEGRADE-i-1];
                            pioche1[TDEGRADE-i-1] = pioche1[resultat];
                            pioche1[resultat] = temporaire;
                            variableDegrade--;
                        }
                        for (int i = 0; i < TDEGRADE; ++i) {
                            printf("%s %d\n",pioche1[i].couleurSymbole,i);
                        }
                        break;
                        case 1: {
                            mode = 1;
                            printf("Vous avez choisi le mode normal");
                            int variableNormal = 108;
                            int tailleNormal = TNORMALE;
                            normalInit(pioche2);
                            for (int i = 0; i < TNORMALE; ++i) {
                                int resultat = rand() % variableNormal;
                                temporaire = pioche2[TNORMALE - i - 1];
                                pioche2[TNORMALE - i - 1] = pioche2[resultat];
                                pioche2[resultat] = temporaire;
                                variableNormal--;
                            }
                            for (int i = 0; i < TNORMALE; ++i) {
                                printf("%s %d\n",pioche2[i].couleurSymbole,i);
                            }
                        }
                        break;
                    }
                    default:
                        printf("mode invalide\n");
                        scanf("%d", &mode);
                }
                break;
            }
            break;
            case 4: {
                nbJ = 4;
                printf("Mode normal (1) ou degrade (0)?\n");
                scanf("%d", &mode);
                switch (mode) {
                    case 0: {
                        mode = 0;
                        printf("Vous avez choisi le mode degrade");
                        Tuile temporaire;
                        int variableDegrade = 36;
                        int tailleDegrade = TDEGRADE;
                        DegradeInit(pioche1);
                        for (int i = 0; i < TDEGRADE; ++i) {
                            int resultat = rand() % variableDegrade;
                            temporaire = pioche1[TDEGRADE-i];
                            pioche1[TDEGRADE-i] = pioche1[resultat];
                            temporaire = pioche1[TDEGRADE-i-1];
                            pioche1[TDEGRADE-i-1] = pioche1[resultat];
                            pioche1[resultat] = temporaire;
                            variableDegrade--;
                        }
                        for (int i = 0; i < TDEGRADE; ++i) {
                            printf("%s %d\n",pioche1[i].couleurSymbole,i);
                        }

                        break;
                        case 1: {
                            mode = 1;
                            printf("Vous avez choisi le mode normal");
                            int variableNormal = 108;
                            int tailleNormal = TNORMALE;
                            normalInit(pioche2);
                            for (int i = 0; i < TNORMALE; ++i) {
                                int resultat = rand() % variableNormal;
                                temporaire = pioche2[TNORMALE - i - 1];
                                pioche2[TNORMALE - i - 1] = pioche2[resultat];
                                pioche2[resultat] = temporaire;
                                variableNormal--;
                            }
                            for (int i = 0; i < TNORMALE; ++i) {
                                printf("%s %d\n",pioche2[i].couleurSymbole,i);
                            }
                        }
                        break;
                    }
                    default:
                        printf("mode invalide\n");
                        scanf("%d", &mode);
                }
                break;
            }
            break;
            case 5: {
                printf("choix du nombre de joueur invalide\n");
                scanf("%d", &jeu->nbJoueur);
            }
            break;
        }
    }
}
/*
void menuActionsJoueur(Plateau plateau, Tuile* tuilesJoueur, int nbTuilesJoueur) {
    int choix;
    do {
        printf("Menu actions joueur :\n");
        printf("1. Poser une tuile\n");
        printf("2. Prendre une tuile de la pioche\n");
        printf("3. Passer son tour\n");
        printf("4. Quitter la partie\n");
        printf("Votre choix : \n");
        scanf("%d", &choix);

        switch(choix) {
            case 1:
                poserTuile(plateau, tuilesJoueur, nbTuilesJoueur);
                break;
            case 2:
                prendreTuilePioche(tuilesJoueur, nbTuilesJoueur);
                break;
            case 3:
                printf("Vous avez passé votre tour\n");
                break;
            case 4:
                printf("Vous avez quitté la partie\n");
                exit(1);
                break;
            default:
                printf("Choix non valide\n");
                break;
        }
    } while (choix != 4);
}
 */
/*
    void nouvellepartie() {

        int nombre;
        char j1, j2, j3, j4;
        char mode;

        printf("Vous souhaitez jouez en mode degrade ou normal?,\n");
        scanf("%s", &mode);


        printf(" Entrez le nombre de joueur,\n");
        scanf("%d", &nombre);


        switch (nombre) {

            case 2: {
                printf("Entrez votre pseudo,\n");
                printf("Entrez le  pseudo du joueur 1 ,\n");
                scanf("%s", &j1);
                printf("Entrez le pseudo du joueur 2,\n");
                scanf("%s", &j2);
            }
                break;
            case 3: {
                printf("Entrez le pseudo du joueur 1,\n");
                scanf("%s", &j1);
                printf("Entrez le pseudo du joueur 2,\n");
                scanf("%s", &j2);
                printf("Entrez le pseudo du joueur 3,\n");
                scanf("%s", &j3);
            }
                break;
                {
                    case 4: {
                        printf("Entrez votre pseudo,\n");
                        printf("Entrez le pseudo du joueur 1,\n");
                        scanf("%s", &j1);
                        printf("Entrez le pseudo du joueur 2,\n");
                        scanf("%s", &j2);
                        printf("Entrez le pseudo du joueur 3,\n");
                        scanf("%s", &j3);
                        printf("Entrez le pseudo du joueur 4,\n");
                        scanf("%s", &j4);
                    }
                    break;


                }
        }
    }

    void sauvegarder_partie() {
        char filename[100];
        printf("Entrez votre fichier a sauvegarder: \n");
        scanf("%s", &filename);
    }

    void afficher_score(Joueur j) {
        j.nom;
        j.score;
        printf("Pour le joueur %s le score est %d ", &j.nom, j.score);
    }

    void charger_partie() {
        char filename[100];
        printf("Entrez le nom du fichier a charger : ");
        scanf("%d", &filename);
    }
//-70,6 +90,37  void quitter_le_jeu(){
*/

void reglesdujeu(){
    printf("Voici les regles du jeu:\n");
    printf("Dans Qwirkle, vous devez aligner des tuiles ayant des simboles\n"
           "De formes ou de couleurs identiques de facon a realiser\n"
           " des combinaisons qui vous rapporteront des points\n"

           " Au debut de la partie,chaque joueur pioche 6 tuiles de facon aleatoire\n"
           "dans le sac de tissu,les autres tuiles formeront la reserve\n"

           " A son tour , chaque joueur a le choix entre 3 actions :\n"
           "- Completer une ligne en y ajoutant une tuile puis piocher une tuile afin de toujours en avoir 6\n"
           "- Completer une ligne en y ajoutant 2 tuiles puis piocher 2 tuiles dans la reserve\n"
           "- Echanger une partie ou l’ensemble de ses tuiles contre celles de la reserve.\n"


           "La partie se poursuit jusqu'à ce que la réserve soit vide \n"
           "Et que un joueur ait épuisé toutes ses tuiles\n"
           "Le joueur ayant accumulé un maximum de points remporte la partie\n");


}