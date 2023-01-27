#include "menu.h"
#include "tableau.h"

int afficherMenu(){
    int choix;
    printf("1 Piocher\n"
           "2 Echanger tuiles\n"
           "3 Abandonner\n"
           "4 Afficher scores\n"
           "5 Tour terminé\n"
           "6 Afficher regles\n");
    scanf("%d", &choix);
    return choix;
}

void regles(){
    printf("1.Matériel  •Mode normal: 108 tuiles pour 6 formes et 6 couleurs. \nChaque forme est donc présente 3 fois dans une même couleur dans la pioche. \n•Mode dégradé: 36 tuiles pour 6 formes et 6 couleurs. Chaque forme n’est présente qu’une fois dans une même couleur dans la pioche. \n•Zone de jeu de 12 x 26 cases 2.\nBut du Jeu Aligner des tuiles ayant des symboles de formes ou de couleurs identiques (mais pas les deux)\n de façon à réaliser des combinaisons rapportant un maximum de points.\n");
    printf("2022-23Projet B1 S1 Paris 53.\nPréparation La pioche contient les 108 tuilesqui seront prises au hasard par les joueurs pour compléter leur pupitre après chaque tour.\n 4.Début de partie\n L’ordinateur demande si on joue en mode dégradé ou normal (contenu de la pioche différent)\n ainsi que le nombre de joueurs pour la partie, entre 2, 3 et 4. \nIl enregistre les pseudos pour chaque joueur. \nL’ordinateur pioche au hasard six tuiles dans la pioche et les place sur le pupitre de chaque joueur,\n en les maintenant cachées de façon à ce qu’aucun autre joueur ne puisse voir les symboles. Ces  tuiles forment la « main» du joueur.\n Les tuiles restantes forment la « pioche».  \nL’ordinateur démarre la partie avec le joueur 1 (premier pseudo enregistré).\n Il révèle le pupitre du joueur concerné et lance la partie\n en permettant au joueur concerné de poser une ou plusieurs tuiles à l’endroit de son choix sur la zone de jeu. \n Après la pose des tuiles par le joueur sur la zone de jeu, l’ordinateur calcule les points obtenus,\n affiche les points du coup et le cumul depuis le début de partie pour ce joueur.\n L’ordinateur prélève aléatoirement de nouvelles tuiles dans la pioche pour avoir ànouveau 6 tuiles sur le pupitre du joueur, tout en masquant de nouveau les 6 tuiles.\n Le joueur ne voit donc pas les nouvelles tuiles piochées. \n En appuyant sur la barre d’espace, l’ordinateur passe au joueur suivant.\n Lorsque tous les joueurs ont joué,\n l’ordinateur demande si on veut arrêter la partie ou passer au tour suivant pour l’ensemble des joueurs. \n Les joueurs jouent à tour de rôle dans le sens des aiguilles d’une montre (ou le sens croissant et cyclique des numéros de joueur).\n 5.Déroulement de la partie A son tour,\n un joueur voit son pupitre révélé à l’écran.\n Il peut effectuer l’une de ces trois actions :\n 1.Ajouter une tuile à une ligne ou à une colonne.\n L’ordinateur masque les tuiles restantes sur le\n pupitre et pioche une tuile dans la réserve pour en avoir à nouveau six tuiles sur le pupitre du joueur. \n2.Ajouter  deux  tuiles  ou  plus  à  une  ligne  (ou  colonne).\n  Toutes  les  tuiles  jouées  à  partir\n  de  la main  du  joueur  doivent  partager  une  caractéristique,\n  à  savoir  la  couleur  ou  la  forme.  \nLes  tuiles  du joueur doivent toujours être posées sur la même ligne (ou colonne) (il se peut qu’elles ne se touchent pas). Ensuite, \nl’ordinateur masque les tuiles restantes sur le\n pupitre et pioche une ou plusieurs tuiles dans la réserve pour en avoir à nouveau six sur le pupitre du joueur. \n3.Échanger tout ou partie des tuiles de sa main contre différentes tuiles de la réserve, et passer son tour (sans jouer de tuile).\nAjouter des tuiles à une ligne (ou colonne) Chacun  à  leur  tour,  \nles  joueurs  ajoutent  des  tuiles  à  la  ligne  créée  au  premier  tour  sans  déborder l’espace de jeu. \nTous les coups joués doivent être liés à la ligne existante. \n Il  existe  six  formes  et  six  couleurs.  \nLes  joueurs  créent  des  lignes  de  formes  et  de  couleurs.  \nDeux  ou plusieurs tuiles qui se touchent créent une ligne de formes ou une ligne de couleurs.\n Les tuiles qui sont\n");
    printf("ajoutées à cette ligne doivent avoir la même caractéristique que les tuiles qui se trouvent déjà sur la ligne. \nIl peut arriver qu’il y ait des places sur la ligne où aucune tuile ne peut être ajoutée.\n  Une ligne de formes ne peut avoir qu’une tuile de chacune des six couleurs. Par exemple,\n il ne peut y avoir qu’un seul carré orange dans une ligne de carrés.\n Une ligne de couleur ne peut avoir qu’une tuile de chacune des six formes. Parexemple,\n il ne peut y avoir qu’un rond jaune dans une ligne de jaune.\n Echanger des tuiles Lorsque c’est votre tour,\n vous pouvez choisir d’échanger tout ou partie de vos tuiles au lieu de les ajouter à une ligne. \nDans ce cas, vous devez indiquer les tuiles à échanger, puis tirer le même nombre de tuiles de la réserve (l’interface de votre jeu devra permettre cela).\n Si vous ne pouvez pas ajouter de tuiles à une ligne, vous devez échanger tout ou partie de vos tuiles et passer votre tour.\n Calcul des points Quand  vous  créez  une  ligne, \n vous marquez 1  point  pour  chaque  tuile  présente dans  la  ligne.\n  Quand vous ajoutez une tuile à une ligne existante, vous marquez 1 point pour chaque tuile de cette ligne, y compris les tuiles qui se trouvaient au préalable sur cette ligne.\n Une tuile peut rapporter 2 points si elle appartient à deux lignes différentes. \nVoir Exemples de parties pour  des  explications  détaillées.\n  Vous  marquez  6  points  supplémentaires  chaque  fois  que  vous terminez une ligne de six tuiles.\n Les six tuiles doivent être de même couleur, tout en ayant une forme différente OU de même forme, tout en ayant une couleur différente.\n Une ligne de six tuiles est appelée un Qwirkle(6 points supplémentaires).\n  Les  lignes  de  plus  de  six  tuiles  sont  interdites.\n  Le  joueur  qui  termine  la  partie  obtient  6  points supplémentaires. ");
}


void jeu(DonneesJeu* jeu) {
    int nbJ = 0;
    int mode = 0;
    Tuile pioche1[TDEGRADE];
    Tuile pioche2[TNORMALE];
    DegradeInit(pioche1);
    normalInit(pioche2);
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
                    printf("Distribution ...\n");
                    Tuile temporaire;
                    int variableDegrade = 36;
                    int tailleDegrade = TDEGRADE;
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
                        printf("Distribution ...\n");
                        int variableNormal = 108;
                        int tailleNormal = TNORMALE;
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
                        printf("Distribution ...\n");
                        Tuile temporaire;
                        int variableDegrade = 36;
                        int tailleDegrade = TDEGRADE;
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
                            printf("Distribution ...\n");
                            int variableNormal = 108;
                            int tailleNormal = TNORMALE;
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
                        printf("Distribution ...\n");
                        Tuile temporaire;
                        int variableDegrade = 36;
                        int tailleDegrade = TDEGRADE;
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
                            printf("Distribution ...\n");
                            int variableNormal = 108;
                            int tailleNormal = TNORMALE;
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
    printf("Dans Qwirkle, vous devez aligner des tuiles ayant des symboles\n"
           "De formes ou de couleurs identiques de facon a realiser\n"
           " des combinaisons qui vous rapporteront des points\n"

           " Au debut de la partie,chaque joueur pioche 6 tuiles de facon aleatoire\n"
           "dans le sac de tissu,les autres tuiles formeront la reserve\n"

           " A son tour , chaque joueur a le choix entre 3 actions :\n"
           "- Completer une ligne en y ajoutant une tuile puis piocher une tuile afin de toujours en avoir 6\n"
           "- Completer une ligne en y ajoutant 2 tuiles puis piocher 2 tuiles dans la reserve\n"
           "- Echanger une partie ou l’ensemble de ses tuiles contre celles de la reserve.\n"


           "La partie se poursuit jusqu'a ce que la réserve soit vide \n"
           "Et que un joueur ait épuise toutes ses tuiles\n"
           "Le joueur ayant accumule un maximum de points remporte la partie\n");


}