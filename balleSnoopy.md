# ing1-2023-2024-13-20
Balle_Snoopy
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define HAUTEUR 10
#define LARGEUR 20

struct Position {
    int x;
    int y;
};

void afficherTableau(char tableau[HAUTEUR][LARGEUR], struct Position balle) {
    system("clear");

    for (int i = 0; i < HAUTEUR; i++) {
        for (int j = 0; j < LARGEUR; j++) {
            if (i == balle.y && j == balle.x) {
                printf("O");
            } else {
                printf(".");
            }
        }
        printf("\n");
    }
}

int main() {
    char tableau[HAUTEUR][LARGEUR];
    struct Position balle;

    srand(time(NULL));
    balle.x = LARGEUR / 2;
    balle.y = HAUTEUR / 2;

    // Définir la limite de temps en secondes (par exemple, 30 secondes)
    int limiteTemps = 30;

    // Obtenir l'heure de départ
    time_t tempsDebut = time(NULL);

    while (1) {
        afficherTableau(tableau, balle);

        int deplacement = rand() % 4;
        switch (deplacement) {
            case 0:
                if (balle.y > 0) {
                    balle.y--;
                }
                break;
            case 1:
                if (balle.y < HAUTEUR - 1) {
                    balle.y++;
                }
                break;
            case 2:
                if (balle.x > 0) {
                    balle.x--;
                }
                break;
            case 3:
                if (balle.x < LARGEUR - 1) {
                    balle.x++;
                }
                break;
        }

        // Obtenir le temps écoulé
        time_t tempsActuel = time(NULL);
        int limiteTemps=120;
        int tempsEcoule = tempsActuel - tempsDebut;

        // Si le temps écoulé atteint la limite, sortir de la boucle
        if (tempsEcoule >= limiteTemps) {
            break;
        }

        for (int i = 0; i < HAUTEUR; i++) {
            for (int j = 0; j < LARGEUR; j++) {
                tableau[i][j] = ' ';
            }
        }
    }

    return 0;
}
