#include <stdio.h>
#include <stdlib.h>

int main() {
    char karakter;

    printf("Tekan 'X' untuk menghentikan program.\n");

    for ( ; ;)
        while ((karakter = getchar()) == 'X') {
            exit(0);
    }
}
