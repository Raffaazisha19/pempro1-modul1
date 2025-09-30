#include <stdio.h>

int main() {
    int jumlahpahlawan = 5;
    int pasukan = 191746;
    long totalpasukan = (long)jumlahpahlawan * pasukan;
 
    printf("Jumlah pasukan yang dibawa Yu Zhong = %ld\n", totalpasukan);
    printf("Jumlah pahlawan = %d\n", jumlahpahlawan);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan\n", pasukan);
    
    return 0;
}