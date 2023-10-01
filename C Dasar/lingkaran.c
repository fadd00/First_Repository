#include <stdio.h>
void main(){
    int JariJari;
    float luas, keliling;

    printf("masukkan jari-jari : ");
    scanf("%i", JariJari);
    luas = 3.14 * JariJari * JariJari;
    keliling = 2 * 3.14 * JariJari;

    printf("\nluas lingkaran adalah : %f", &luas);
    printf("\nkeliling lingkaran adalah : %f", &keliling);
}