//
// Created by sacha on 14/11/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void ibo(char matrice[10][20]) {

//  LES OISEAUX
    matrice[8][1] = 'B';
    matrice[1][18] = 'B';
    matrice[1][1] = 'B';
    matrice[8][18] = 'B';

}

void ib(char matrice[10][20]) {   //les blocks cassables

   matrice[4][8]='X';
   matrice[3][9]='X';
   matrice[7][14]='X';
   matrice[2][6]='X';

}