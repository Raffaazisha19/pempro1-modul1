#include <stdio.h>
 
int main() {
    int kelilingtanah = 16;
    int harga = 85000;
    long total = (long)kelilingtanah * harga;
    
    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah 4, 5, dan 7\n");
    printf("Keliling Tanah Pak Dengklek adalah %d\n", kelilingtanah);
    printf("Harga tanah Per Meter adalah %d\n", harga);
    printf("\n");
    printf("Jawaban :\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %ld\n", total);
    
    return 0;
}