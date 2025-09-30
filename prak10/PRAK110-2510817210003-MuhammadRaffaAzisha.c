#include <stdio.h>
#include <math.h> //untuk fungsi sqrt() (akar kuadrat)

int main() {
    double alas = 5.0;
    double tinggi = 12.0;
    double sisi_c;
    double luas;
    double keliling;
    sisi_c = sqrt((alas * alas) +  (tinggi * tinggi));
    keliling = alas + tinggi + sisi_c;
    luas = 0.5 * alas * tinggi;
        
    printf("Diketahui :\n");
    printf("Alas = %.0f cm\n", alas);
    printf("Tinggi = %.0f cm\n\n", tinggi);    
    printf("Jawab :\n");
    printf("Sisi A = %.0f cm\n", alas);
    printf("Sisi B = %.0f cm\n", tinggi);
    printf("Sisi C = %.0f cm\n", sisi_c);
    printf("Keliling = %.0f cm\n", keliling);
    printf("Luas = %.0f cm\n", luas);
    
    return 0;
}