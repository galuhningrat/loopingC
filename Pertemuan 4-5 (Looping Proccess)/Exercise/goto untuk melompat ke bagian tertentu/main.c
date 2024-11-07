#include <stdio.h>

/*
 *Bayangkan goto seperti seorang pemandu yang berkata, "Lompat ke sini,
 *lewati bagian ini!" Jadi, kita bisa membuat program agar melewatkan
 *pencetakan angka 3 dan melanjutkan ke angka 4.
 */

int main(void) {
    int i = 1;

    mulai: // Label untuk mulai cetak angka
    if (i > 5) {
        goto udahan; // Jika i lebih besar dari 5, lompat ke akhir program
    }

    if (i == 3) {
        i++; // Naikkan angka ke 4 sebelum lompat
        goto mulai; // Lompat ke label 'start', lewati pencetakan 3
    }

    printf("%d\n", i); // Cetak angka jika tidak sama dengan 3
    i++;
    goto mulai; // Kembali ke 'start' untuk angka berikutnya

    udahan: // Label untuk mengakhiri program
    printf("Program selesai!\n");
    return 0;
}
