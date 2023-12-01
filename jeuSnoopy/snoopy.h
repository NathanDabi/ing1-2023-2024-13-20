//
// Created by sacha on 14/11/largeur23.
//

#ifndef UNTITLED13_SNOOPY_H
#define UNTITLED13_SNOOPY_H

#endif //UNTITLED13_SNOOPY_H

int menu();
int Menu1();

const int lignes = 10;
const int colonnes = 20;


int Menu2();
void im(char matrice[lignes][colonnes]); //initialisation de la matrice
int dp(char matrice[lignes][colonnes], int* X, int* Y, char direction); //déplacement de Snoopy
void ibo(char matrice[lignes][colonnes]); //initialisation des oiseaux
void ibo2(char matrice[lignes][colonnes]); //initialisation des oiseaux niveau 2
void ib(char matrice[lignes][colonnes]); //initialisation des blocks cassables
void mb(char matrice[lignes][colonnes]); //affichage de la matrice avec les blocks
void bk(char matrice[lignes][colonnes]); //bloc incassable
void bk2(char matrice[lignes][colonnes]);//bloc incassable niveau2
void ib2(char matrice[lignes][colonnes]); //initialisation des blocks cassables niveau2
//int ball(char matrice[lignes][colonnes]);















void Te(int* t); //tentative de faire le chrono
