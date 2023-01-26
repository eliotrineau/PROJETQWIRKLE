//
// Created by malic on 25/01/2023.
//

#include "menu.h"
#include "Bibliotheques.h"


void nouvellepartie(){

    int nombre;

    printf("Vous souhaitez jouez en mode degrade ou normal?,\n");


    printf(" Entrez le nombre de joueur,\n");
    scanf("%d",&nombre);
    switch (nombre)
    {

        case 2:
        {
            printf("Entrez votre pseudo,\n");
        }
            break;
        case 3:
        {
            printf("Entrez votre pseudo,\n");}
            break;
            {
                case 4:
                {
                    printf("Entrez votre pseudo,\n");
                }
                break;

            }default:
            break;
    }
        

}
void reglesdujeu() {

    printf("Voici les regles du jeu:\n");
    printf("Dans Qwirkle, vous devez aligner des tuiles ayant des simboles\n"
           "De formes ou de couleurs identiques de facon a realiser\n"
           " des combinaisons qui vous rapporteront des points\n"

           " Au debut de la partie,chaque joueur pioche 6 tuiles de facon aleatoire\n"
           "dans le sac de tissu,les autres tuiles formeront la reserve\n"

           " A son tour , chaque joueur a le choix entre 3 actions :\n"
           "- Completer une ligne en y ajoutant une tuile puis piocher une tuile afin de toujours en avoir 6\n"
           "- Completer une ligne en y ajoutant 2 tuiles puis piocher 2 tuiles dans la reserve\n"
           "- Echanger une partie ou l’ensemble de ses tuiles contre celles de la reserve.\n");
}

void credits(){

    printf("Voici les credits du jeu:\n");
    printf("Developpeur : Eliot,Louis,Malick,\n");

}

void quitter_le_jeu(){

    exit(0);


}







