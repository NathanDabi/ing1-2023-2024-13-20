//personnage.c
void deplacerPersonnage(char matrice[20][10], int* posX, int* posY, char mouvement) {
    matrice[*posX][*posY] = ' ';

    switch (mouvement) {
        case 'h':
            if (*posX > 0) (*posX)--;
            break;
        case 'b':
            if (*posX < 19) (*posX)++;
            break;
        case 'g':
            if (*posY > 0) (*posY)--;
            break;
        case 'd':
            if (*posY < 9) (*posY)++;
            break;
    }

    matrice[*posX][*posY] = 'S';
}
