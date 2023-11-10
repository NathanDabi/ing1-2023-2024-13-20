# ing1-2023-2024-13-20


// LE NOUVEAU CODE POUR LE CHRONO



#include <stdio.h>
#include <unistd.h>
#include "jeu snoopy sous programme.h"
int main() {

    int nombre;
    int choix;
    printf("Saisit un entier\n");
    scanf("%d",&nombre);
    do
    {
        choix= menu();
        switch (choix)
        {
            case 1:
            {
                Menu1();
                break;
            }
            case 2:
            {
                Menu2();
                break;
            }
            case 3:
            {
                Menu3();
                break;
            }
            case 4:
            {
                Menu4();
                break;
            }

        }

    } while (choix!=5);

    printf("l'entier vaut desormais %d",nombre);
    return 0;
}

int matrice[10][20];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 20; j++)
            matrice[i][j] = 0;

    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 20; j++) {
            printf("%d ", matrice[i][j]);
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


}