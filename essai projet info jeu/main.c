#include <stdio.h>
#include <unistd.h>
#include "jeu snoopy sous programme.h"

int main() {

    int nombre;
    int choix;

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


