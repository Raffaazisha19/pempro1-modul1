#include <stdio.h>

int main() {
    double SepatuA = 400000;
    double diskonA = 13.0;
    double hasilA;
    double SepatuB = 350000;
    double diskonB = 21.0;
    double hasilB;

    hasilA = SepatuA - (SepatuA * (diskonA / 100.0));
    hasilB = SepatuB - (SepatuB * (diskonB / 100.0));

    printf("Harga awal Sepatu A adalah Rp %.0f\n", SepatuA);
    printf("Harga awal Sepatu B adalah Rp %.0f\n", SepatuB);
     printf("Sepatu A mendapat diskon %.0f%% sehingga harganya menjadi Rp %.0f\n", diskonA, hasilA);
    printf("Sepatu B mendapat diskon %.0f%% sehingga harganya menjadi Rp %.0f\n", diskonB, hasilB);

    return 0;
}