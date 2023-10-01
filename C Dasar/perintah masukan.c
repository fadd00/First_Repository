#include <stdio.h>
void main(){
    char nim[20];
    char nama[20];
    float nilai;

    printf("masukkan nim : ");
    scanf("%s", nim);
    printf("masukkan nama : ");
    scanf("%s", nama);
    printf("masukkan nilai : ");
    scanf("%f", &nilai);

    printf("\nnim anda adalah : %s", nim);
    printf("\nnama anda adalah : %s", nama);
    printf("\nnilai anda adalah : %f", nilai);
    printf("\nnilai pembulatan anda adalah : %.1f", nilai);
}