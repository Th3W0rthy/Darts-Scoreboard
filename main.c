#include <stdio.h>
#include <stdlib.h>

void uj_jatek_menu() {
    char menu_pont;
    do {
        printf("1. X01\n2. Krikett\n3. Vissza\n\nMenüpont:");
        scanf(" %c", &menu_pont);
        switch (menu_pont)
        {
        case '1':
            printf("X01");
            break;
        case '2':
            printf("Krikett");
            break;
        case '3':
            //Vissza
            return;
            break;
        default:
            printf("\nHibás menüpont!\n");
            break;
        }
    } while (menu_pont != '3');
}

void utmutato() {
    printf("Útmutató");
    exit(0);
}

void mentett_jatekok() {
    printf("Mentett játékok");
    exit(0);
}

void fo_menu() {
    char menu_pont;
    do {
        printf("1. Új játék \n2. Útmutató \n3. Mentett játékok \n4. Kilépés\n\nMenüpont: ");
        scanf(" %c", &menu_pont);
        switch (menu_pont)
        {
        case '1':
            uj_jatek_menu();
            break;
        case '2':
            utmutato();
            break;
        case '3':
            mentett_jatekok();
            break;
        case '4':
            printf("Kilépett az alkamazásból!");
            exit(0);
            break;
        default:
            printf("\nHibás menüpont!\n");
            break;
        }

    } while (menu_pont != '4');
    
}

int main(void) {
    fo_menu();
    return 0;
}