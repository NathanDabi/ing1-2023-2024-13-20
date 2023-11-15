//
// Created by sacha on 14/11/2023.
//
#include <stdio.h>
#include "snoopy.h"

int menu()
{
    int choix=0;

    printf("Choisssez le menu qui vous convient  :\n\n\t");
    printf("Menu 1: AFFICHE LES REGLES DU JEU \n\t");
    printf("Menu 2: LANCE LE JEU AU NIVEAU 1 \n\t");
    printf("Menu 3: ECRIVEZ LE MOT DE PASSE POUR ACCEDER AU NIVEAU 3 \n\t");
    printf("Menu 4: AFFICHE LES SCORES \n\t");
    printf("Menu 5: Quitter le programme\n\n\t");
    printf("Je veux acceder au menu : \n\t");
    scanf("%d",&choix);
    return choix;
}