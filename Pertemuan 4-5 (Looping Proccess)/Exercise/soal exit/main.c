#include <stdio.h>
#include <stdlib.h>

int main() {
    int posisi = 0;
    char lanjut;

    naik_tangga:
        printf("\nKamu ada di anak tangga ke-%d\n", posisi);

    if(posisi >= 5) {
        printf("Horee! Kamu sudah sampai di puncak!\n");
        exit(0);  // Program selesai ketika sampai puncak
    }

    printf("Mau naik 1 anak tangga? (y/n): ");
    scanf(" %c", &lanjut);

    if(lanjut == 'y') {
        posisi++;
        goto naik_tangga;  // Lanjut naik tangga
    } else {
        printf("Yaah... kamu berhenti di tengah jalan!\n");
    }

    return 0;
}