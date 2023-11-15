//
// Created by sacha on 14/11/2023.
//
#include "snoopy.h"

void dp(char matrice[10][20], int* X, int* Y, char direction) { //deplacement de snoopy
    matrice[*X][*Y] = ' ';

    switch (direction) {
        case 'h':
            if (*X > 1) (*X)--;
            break;
        case 'b':
            if (*X < 8) (*X)++;
            break;
        case 'g':
            if (*Y > 1) (*Y)--;
            break;
        case 'd':
            if (*Y < 18) (*Y)++;

            break;
    }
    matrice[*X][*Y] = 'S';

}









