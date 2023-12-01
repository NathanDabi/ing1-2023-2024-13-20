//
// Created by sacha on 14/11/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include "snoopy.h"
#include <conio.h>
#include <unistd.h>
int Menu2() {
    char matrice[lignes][colonnes];
    int X = 5, Y = 10; // Position de départ de l'utilisateur
    int vies=3;
    int BIRD =4;
    int poin = 0;

    im(matrice); // affichage de la matrice initialisé ( au début)
    bk(matrice);
    ibo(matrice); // affichage des oiseaux au début

   int balleX = 2;
    int balleY = 2;
    int directionBalleX = 1;  // Direction initiale (1 pour droite, -1 pour gauche)
    int directionBalleY = 1;

    matrice[X][Y] = snoopy; //initialisation de la position de Snoopy

    char mouvement;
    int jeu_en_cours = 1;

    while (jeu_en_cours) { // while(1) pour dire "tant que c'est vrai" (parce que 1 = VRAI et 0 = FAUX)

       matrice[balleX][balleY] = ' ';

        bk(matrice);

        balleX += directionBalleX;
        balleY += directionBalleY;

        // Gérer les rebonds lorsque la balle atteint les bords du plateau
        if (balleX <= 1 || balleX >= lignes - 2) {
            directionBalleX *= -1;  // Inverser la direction horizontale
        }

        if (balleY <= 1 || balleY >= colonnes - 2) {
            directionBalleY *= -1;  // Inverser la direction verticale
        }
        matrice[balleX][balleY] = balle;

        mb(matrice); // Affichage de la matrice.
      
        printf("\nil vous reste %d vies !\n\n", vies);
        printf("\n\n vous avez %d points", poin);

        mouvement = _getch(); //z,q,s,d pour se déplacer

        if (mouvement == 'e') { // si tu appuies sur e ça quitte le jeu
            jeu_en_cours = 0;
        }

        system("cls"); //pour "clear la page" (éviter que la matrice se re affiche a chaque fois)

        int resultat = dp(matrice, &X, &Y, mouvement); // Affichage de la matrice avec ses modifications

        if (resultat == vie_en_moins)
        {
            vies--;
            if (vies <= 0) {
                jeu_en_cours = 0;
                printf("\nVous avez perdu... :(\n\n");
            }
        }
       if (resultat == point)
       {
           poin = poin + 200;
           BIRD--;

           if (BIRD<=0){
               jeu_en_cours = 0;
               printf("\nVous avez accumule %d points !\n\n", poin);
               printf("Bravo, vous passez au niveau 2 ! :)\n\n");
               void niveau2();
               niveau2();
               sleep(2);
           }
       }

    }

    return 0;
}

