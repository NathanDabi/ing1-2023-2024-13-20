//
// Created by sacha on 14/11/2023.
//
#include <stdio.h>
#include <unistd.h>
#include <time.h>

/*void Te(int* t) { // tentative du chrono
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
*/
int Temps() {
int t = 120;
    while (t > 0) {
printf("           Temps = %d", t);
fflush(stdout);
sleep(1);

printf("\r");
for (int i = 0; i < 10; i++) {
printf(" ");
}
printf("\r");
t--;
}
printf("Temps = 0\n");
}


