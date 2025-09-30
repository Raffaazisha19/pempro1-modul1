#include <stdio.h>

int main() {
    int jumlah_putaran = 5;
    float total_jarak_km = 14.0f;
    float phi = 3.14f;
    float keliling_taman_km = total_jarak_km / jumlah_putaran;
    float jari_jari_km = keliling_taman_km / (2 * (float)phi);
    
    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %d Putaran\n", jumlah_putaran);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n", total_jarak_km);
    printf("\n");
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", jari_jari_km);
    return 0;
}