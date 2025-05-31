#include <stdio.h>
#include "src/kalkulator.h"

int main() {
    int a, b, pilihan;
    float hasil;

    printf("=== Kalkulator Sederhana ===\n");
    printf("1. Tambah\n2. Kurang\n3. Kali\n4. Bagi\n");
    printf("Pilih operasi (1-4): ");
    scanf("%d", &pilihan);

    printf("Masukkan angka pertama: ");
    scanf("%d", &a);
    printf("Masukkan angka kedua: ");
    scanf("%d", &b);

    switch(pilihan) {
        case 1:
            hasil = tambah(a, b);
            printf("Hasil: %.2f\n", hasil);
            break;
        case 2:
            hasil = kurang(a, b);
            printf("Hasil: %.2f\n", hasil);
            break;
        case 3:
            hasil = kali(a, b);
            printf("Hasil: %.2f\n", hasil);
            break;
        case 4:
            if (b == 0) {
                printf("Error: pembagian dengan nol!\n");
            } else {
                hasil = bagi(a, b);
                printf("Hasil: %.2f\n", hasil);
            }
            break;
        default:
            printf("Pilihan tidak valid!\n");
    }

    return 0;
}
