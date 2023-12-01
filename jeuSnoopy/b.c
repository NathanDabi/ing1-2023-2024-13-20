//
// Created by sacha on 14/11/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "snoopy.h"

void ibo(char matrice[lignes][colonnes]) { //initiatlisation des blocks et oiseaux
    //  LES OISEAUX
    matrice[8][1] = oiseau;
    matrice[1][18] = oiseau;
    matrice[1][1] = oiseau;
    matrice[8][18] = oiseau;

    /*matrice[3][11] = bloc;
    matrice[7][14] = bloc;
    matrice[8][11] = bloc;
    matrice[2][18] = bloc;
    matrice[4][9] = bloc;
    matrice[3][11] = bloc;
    matrice[7][14] = bloc;
    matrice[3][11] = bloc;
    matrice[7][14] = bloc;*/

    matrice[6][10] = nobreak;
    matrice[3][7] = nobreak;
    matrice[8][12] = nobreak;
    matrice[2][10] = nobreak;
    matrice[8][17] = nobreak;
    matrice[5][18] = nobreak;
    matrice[3][4] = nobreak;
    matrice[2][15] = nobreak;
}


void bk(char matrice[lignes][colonnes]) {


    // Ajout du bloc incassable
    int rowH;  // Choisissez la position du bloc incassable
    int colH;
    if (rowH >= 0 && rowH < lignes && colH >= 0 && colH < colonnes) {
        matrice[6][10] = nobreak;
        matrice[3][7] = nobreak;
        matrice[8][12] = nobreak;
        matrice[2][10] = nobreak;
        matrice[8][17] = nobreak;
        matrice[5][18] = nobreak;
        matrice[3][4] = nobreak;
        matrice[2][15] = nobreak;// 'H' pour le bloc incassable
    }
}
