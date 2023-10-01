#include <stdio.h>
int main(){
    int nilai;
    printf("masukkan nilai : ");
    scanf("%i", &nilai);

    if (nilai >= 60){
        printf("\nlulus");
    }
    else{
        printf("\ngagal");
    }
}