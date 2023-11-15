//
// Created by sacha on 14/11/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include "snoopy.h"

int Menu2() {
    char matrice[lignes][colonnes];
    int X = 5, Y = 10; // Position de départ de l'utilisateur
    int vies=3;

    im(matrice); // affichage de la matrice initialisé ( au début)

    ibo(matrice); // affichage des oiseaux au début

    ib(matrice); //affichage des blocks cassable au début

    matrice[X][Y] = 'S'; //initialisation de la position de Snoopy

    char mouvement;
    int jeu_en_cour = 1;

    while (jeu_en_cour) { // while(1) pour dire "tant que c'est vrai" (parce que 1 = VRAI et 0 = FAUX)

        mb(matrice); // Affichage de la matrice.
        printf("\nil vous reste %d vies !\n\n", vies); //tentative d'affichage des vies mais j'ai pas réussi
        printf("deplacement vers (h, b, g, d (ou q pour quitter): "); //demande du déplacement que tu veux faire (faudra utilisé le code ASCII pour mettre les flèches
        scanf(" %c", &mouvement); //pour entrer le mouvement


        if (mouvement == 'q') { // si tu appuies sur q ça quitte le jeu
            jeu_en_cour = 0;
        }

        system("cls"); //pour "clear la page" (éviter que la matrice se re affiche a chaque fois)

        dp(matrice, &X, &Y, mouvement); // Affichage de la matrice avec ses modifications
    }
    printf("le jeu est fini. \n");

    return 0;
}
