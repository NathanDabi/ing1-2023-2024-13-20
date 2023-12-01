#include "snoopy.h"
#include <stdio.h>


int dp(char matrice[lignes][colonnes], int* X, int* Y, char direction) {
    int retour = rien;

    matrice[*X][*Y] = case_vide;

    int newX = *X;
    int newY = *Y;

    switch (direction) {
        case 'z':
            newX = *X - 1;
            break;
        case 's':
            newX = *X + 1;
            break;
        case 'q':
            newY = *Y - 1;
            break;
        case 'd':
            newY = *Y + 1;
            break;
    }

    // Vérification de la validité de la nouvelle position
    if (newX >= 0 && newX < lignes && newY >= 0 && newY < colonnes) {
        char newCell = matrice[newX][newY];

        if (newCell != mur && newCell != nobreak) {
            if (newCell == oiseau) {
                // Gérer ici les points
                retour = point;

            }else if (newCell == bloc) {
                // Perdre une vie si on rencontre un bloc


                retour = vie_en_moins;
            }

            // Mettre à jour les nouvelles coordonnées
            *X = newX;
            *Y = newY;

            matrice[*X][*Y] = snoopy;

            printf("Deplacement reussi. Nouvelles coordonnees : X=%d, Y=%d\n", *X, *Y);
        } else {
            printf("Deplacement bloque. Nouvelles coordonnees : X=%d, Y=%d, Valeur de la cellule : %c\n", newX, newY, newCell);
            matrice[*X][*Y] = snoopy;
        }
    }

    return retour;
}












