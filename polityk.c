
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include "polityk.h"
void zart3(void){
    int a;
    srand ( time(NULL) );
    a=rand() % 4 +1;

    switch (a) {
        case 1:
            puts("Puk puk! Kto tam\n"
                 "POLITYK");
            break;
        case 2:
            puts("Lekcja biologii.\n"
                 "- Jak się nazywa największy zwierz mieszkający w naszych lasach?\n"
                 "- Pyta sie pani Jasia.\n"
                 "- Dźwiedź.\n"
                 "- Chyba niedźwiedź?\n"
                 "- Jeśli nie dźwiedź, to ja nie wiem.");
            break;
        case 3:
            puts("U dentysty mama prosi Jasia:\n"
                 "- A teraz bądź grzeczny i powiedz ładnie \"aaa\", żeby pan doktor mógł wyjąc palce z twojej buzi.");
            break;
        case 4:
            puts("Rodzice leża w łóżku a Jaś podsłuchuje co mówią:\n"
                 "- Kochany - chciałabym aby to była dziewczynka...\n"
                 "- Tak kochanie - dostaniesz dziewczynkę...\n"
                 "Jaś wbiega do pokoju rodziców:\n"
                 "- A ja chce żołnierzyki, klocki i rower!");
            break;
    }


}
