#include <stdio.h>

int main() {
    int i = 1;

    cetak: // Label 'cetak'
    printf("Iterasi ke-%d\n", i);
    i++;

    if (i <= 10) {
        goto cetak; // Lompat kembali ke label 'cetak'
    }

    printf("Selesai\n");
    return 0;
}
