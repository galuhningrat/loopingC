#include <stdio.h>
#include <stdlib.h>

int main() {
    char karakter;

    printf("Tekan 'X' untuk menghentikan program.\n");

    while (1) { // Loop tak terbatas
        karakter = getchar();

        if (karakter == 'X') {
            exit(0); // Program dihentikan saat 'X' ditekan
        }

        printf("Anda menekan: %c\n", karakter);
    }

    return 0;
}
