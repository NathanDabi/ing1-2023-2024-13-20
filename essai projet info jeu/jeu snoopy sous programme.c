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
int Menu1 () // ICI C LE CODE DU NIVEAU 1
{                                                    // LA C LES REGLES DU JEU
    printf("==================================================================================================\n\n"
           "                REGLES DU JEU:\n\n"
           "==================================================================================================\n\n"
           "          Le but de Snoopy est de récupérer 4 oiseaux aux 4 coins du niveau en un temps imparti de 120 secondes !!!. Le problème\n"
           "                est que ces 4 oiseaux ne sont pas si faciles à récupérer...\n\n"
           "==================================================================================================\n\n"
           "            Des blocs sont positionnés sur le terrain pour compliquer vos deplacements.\n\n"
           "==================================================================================================\n\n"
           "            De plus, dans les  niveaux superieurs vous trouverez une balle qui rebondit constamment entres les bords sur plateau\n\n"
           "                afin de freiner Snoopy dans sa quête. Si la balle touche Snoopy, la partie est terminé, vous avez perdu...\n\n"
           "==================================================================================================\n\n"
           "            vous avez la possibilités si vous connaissez le mdp de sauter le niveau 1 et 2 et d'atterrir directement au niveau 3. \n\n"
           "==================================================================================================\n\n"
           " les touches de deplacement sont Z pour aller en haut, S pour aller en bas, Q pour aller a gauche et D pour aller à droite, pour interagir avec les objets, c'est la rouche P qu'il faut saisir.\n\n\n\n\n");


}
int Menu2 ()                    //LA C LA MATRICE
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

    for (int i = 0; i < 10; i++) {                    //ICI C LES COORDONNEES DES BLOCS
        for (int j = 0; j < 20; j++) {
            matrice[6][9]= 'X';
            matrice[7][9]= 'X';
            matrice[7][10]='X';
            matrice[5][9]= 'X';
            matrice[4][9]= 'X';
            matrice[3][9]= 'X';
            matrice[5][5]= 'X';
            matrice[5][6]= 'X';
            matrice[5][8]= 'X';
            matrice[5][7]= 'X';
            matrice[6][12]= 'X';
            matrice[6][11]= 'X';
            matrice[6][10]= 'X';
            matrice[6][13]= 'X';
            matrice[6][14]= 'X';
            matrice[6][15]= 'X';
            matrice[6][16]= 'X';
            matrice[5][16]= 'X';
            matrice[4][16]= 'X';
            matrice[4][16]= 'X';
            matrice[3][16]= 'X';
            matrice[2][16]= 'X';
            matrice[8][2]= 'X';
            matrice[7][2]= 'X';
            matrice[6][3]= 'X';
            matrice[4][14]= 'X';
            matrice[6][4]= 'X';

            printf("%c ", matrice[i][j]);
        }
        int j;   //LES OISEAUX OUUUU QUOI LA TEAM
            matrice[1][1] = 'B';
            matrice[1][18] = 'B';
            matrice[8][1] = 'B';
            matrice[8][18] = 'B';

            if (matrice[i][j] == 'S') {

                if ((i == 1 && j == 1) || (i == 1 && j == 18) || (i == 8 && j == 1) || (i == 8 && j == 18)) {
                    matrice[i][j] = ' ';  
                }
            }


        printf("\n");

    }
    int Temps = 120;                // ET LA C LE TIMER

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
int Menu3 ()            // CA ON S'EN FOU
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

