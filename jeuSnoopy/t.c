//
// Created by sacha on 14/11/2023.
//
#include <stdio.h>

#include <time.h>

void Te(int* t) { // tentative du chrono
    time_t debut = time(NULL);
    time_t maintenant;
    int duree = 120;  // 120 secondes

    while (1) {
        maintenant = time(NULL);
        *t = duree - (maintenant - debut);

        if (*t <= 0) {
            printf("\nLe temps est écoulé!\n");
            break;
        }
    }
}


