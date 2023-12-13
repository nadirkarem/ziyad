#include <stdio.h>
#include "heure.h"
#include "salut.h"

int main() {
    salutation();
    return 0;
}

int salutation() {
    int h = heure();

    if (h >= 6 && h < 12) {
        printf("Bonjour !\n");
    } else if (h >= 12 && h < 18) {
        printf("Bon après-midi !\n");
    } else {
        printf("Bonsoir !\n");
    }

    return 0;
}
