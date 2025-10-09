#include <stdio.h>
#include <stdlib.h>

void ujJatek(){
    printf("Új játék");
}

void utmutato(){
    printf("Útmutató");
}

void menu(){
    system("clear");
    int menuPont;
    int eredmeny;
    do
    {
        printf("1. Új játék \n2. Gyorstalpaló \n3. Kilépés \n\nMenü pont: ");
        eredmeny = scanf("%d", &menuPont);
        if (eredmeny != 1)
        {
            printf("Hibás menüpont!");
            continue;
        }
        
        switch (menuPont)
        {
        case 1:
            system("clear");
            ujJatek();
            break;
        case 2:
            system("clear");
            utmutato();
            break;
        case 3:
            system("clear");
            printf("Kilépett az alkamazásból!");
            exit(0);
            break;
        default:
            system("clear");
            printf("\nHibás menüpont!\n");
            break;
        }

    } while (menuPont != 1 && menuPont != 2 && menuPont != 3);
    
}

int main(void){
    menu();
    return 0;
}