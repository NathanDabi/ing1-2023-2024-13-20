#include <stdio.h>
#include <unistd.h>
#include "snoopy.h"

int main() {

    int nombre;
    int choix;


        choix = menu();
    switch (choix) {
        case 1: {
            Menu1();
            break;
        }
        case 2: {
            Menu2();
            break;
        }

    }
    while (choix != 5);

    printf("l'entier vaut desormais %d", nombre);
    return 0;
}