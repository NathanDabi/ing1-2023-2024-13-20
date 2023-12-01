//
// Created by sacha on 14/11/2023.
//
#include <stdio.h>
#include "snoopy.h"

void im(char matrice[lignes][colonnes]) {     //initialisation de la matrice
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++)  {
            if (j == 0 || j == colonnes - 1)
            {
                matrice[i][j] = mur;
            } else if (i == 0 || i == lignes - 1) {
                matrice[i][j] = mur;
            } else {
                matrice[i][j] = case_vide;
            }
        }
    }
}


void mb(char matrice[lignes][colonnes]) { //affichage de la matrice avec les blocks
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            printf("%c ", matrice[i][j]);
        }
        printf("\n");
    }
}

}
