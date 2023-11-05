# ing1-2023-2024-13-20


// LE NOUVEAU CODE POUR LE CHRONO

#include <stdio.h>
#include <unistd.h>

int main() {
    int Temps = 60;

    while (Temps > 0) {
        printf("Temps = %d", Temps);
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

    return 0;
}
