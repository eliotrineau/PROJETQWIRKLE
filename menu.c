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
