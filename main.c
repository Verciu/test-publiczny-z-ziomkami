#include <stdio.h>
#include "jasiu.h"
#include "polak.h"
#include "polityk.h"
#include "informatyk.h"
int main() {
    int a;
    int joke;

    puts("Jakei zart chcesz uslyszec 1-o jasiu 2-o polaku 3-o polityce 4-o informatykach");
    scanf(" %d",&joke);
    switch (joke) {
        case 1:
            zart();
            break;
        case 2:
            zart2();
            break;
        case 3:
            zart3();
            break;
        case 4:
            zart4();
            break;
    }

    return 0;
}
