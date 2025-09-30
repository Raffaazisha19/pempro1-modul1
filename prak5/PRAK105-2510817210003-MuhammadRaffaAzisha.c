#include <stdio.h>

int main() {
    int a = 9;
    int b = 5;
    int x = 8;
    int y = 8;

    int sisa_ab = a % b; 
    int sisa_xy = x % y; 
    int total_sisa = sisa_ab + sisa_xy;
    
    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel x bernilai %d\n", x);
    printf("Variabel y bernilai %d\n", y);
    printf("\n"); // Baris baru untuk spasi

    printf("Sisa bagi dari a / b (%d %% %d) adalah %d\n", a, b, sisa_ab);
    printf("Sisa bagi dari x / y (%d %% %d) adalah %d\n", x, y, sisa_xy);
    printf("\n"); // Baris baru untuk spasi
    
    printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %d\n", total_sisa);

    return 0;
}