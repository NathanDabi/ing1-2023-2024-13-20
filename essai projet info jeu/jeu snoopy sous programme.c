//
// Created by Nathan Dabi on 10/11/2023.
//
#include <unistd.h>
#include "jeu snoopy sous programme.h"
#include <stdio.h>
#include "jeu snoopy sous programme.h"
int menu()
{
    int choix=0;

    printf("Choisissiez un menu entre 1 et 5 compris \n\t");
    printf("Menu 1: AFFICHE LES REGLES DU JEU \n\t");
    printf("Menu 2: LANCE LE JEU AU NIVEAU 1 \n\t");
    printf("Menu 3: ECRIVEZ LE MOT DE PASSE POUR ACCEDER AU NIVEAU 3 \n\t");
    printf("Menu 4: AFFICHE LES SCORES \n\t");
    printf("Menu 5: Quitter le programme\n\t");
    printf("selectionnez le numero du menu voulu \n\t");
    scanf("%d",&choix);
    return choix;
}
int Menu1 ()
{
    printf("Le but de Snoopy est de récupérer 4 oiseaux aux 4 coins du niveau en un temps imparti. Le problème\n"
           "est que ces 4 oiseaux ne sont pas si faciles à récupérer. Une balle rebondit constamment dans le niveau\n"
           "afin de freiner Snoopy dans sa quête. Si la balle touche Snoopy, la partie est terminé, vous avez perdu... \n");

}
int Menu2 ()
{
    char matrice[10][20];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 20; j++) {

            if (j == 0 || j == 19) {
                matrice[i][j] = '|';
            } else if (i == 0 || i == 9) {
                matrice[i][j] = '-';
            }
            else {
                matrice[i][j]=' ';
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 20; j++) {
            matrice[6][9]= 'X';
            matrice[7][9]= 'X';

            printf("%c ", matrice[i][j]);
        }

        printf("\n");

    }
    int Temps = 120;

    while (Temps > 0) {
        printf("           Temps = %d", Temps);
        fflush(stdout);
        sleep(1);

        printf("\r");
        for (int i = 0; i < 10; i++) {
            printf(" ");
        }
        printf("\r");
        Temps--;
    }
    printf("Temps = 0\n");
    ;
}
int Menu3 ()
{
    ;
}
int Menu4 ()
{
    ;
}
int Menu5 ()
{
    ;
}

