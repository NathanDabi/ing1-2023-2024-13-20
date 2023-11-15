//
// Created by sacha on 14/11/2023.
//
#include <stdio.h>

void im(char matrice[10][20]) {     //initialisation de la matrice
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 20; j++)  {
            if (j == 0 || j == 19)
            {
                matrice[i][j] = '0';
            } else if (i == 0 || i == 9) {
                matrice[i][j] = '0';
            } else {
                matrice[i][j] = ' ';
            }
        }
    }
}


void mb(char matrice[10][20]) { //affichage de la matrice avec les blocks
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 20; j++) {
            printf("%c ", matrice[i][j]);
        }
        printf("\n");
    }
}
