
// MATERI ALGORITMA PEMROGRAMAN PERTEMUAN 3 : PERULANGAN

#include <iostream>
using namespace std;

void perulangan_1(){ // Penggunaan loop for 
    for(int i=0; i<4; i++){
        cout << i << endl;
    }
    for(int i=3;i>0;i--){
        cout<<i<<endl;
    }
    for(int i=0; i <= 10 ; i += 2){
        cout<<i << " ";
    }
    cout << endl;
        for(int i=10; i >= 0 ; i -= 2){
    cout<<i << " ";
    }
}

void perulangan_2(){ // Mencari sigma(i) menggunakan loop for
    int n; 
    int sigma = 0;
    cout << "Masukkan bilangan integer positif : "; 
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sigma += i;
    }
    cout << "Total penjumlahan dari bilangan " << n << " adalah : " << 
    sigma << endl;
}

void perulangan_3(){ // Mencari sigma(i) menggunakan loop while
    int i = 1, n, sigma = 0;
    cout << "Masukkan bilangan integer positif : "; 
    cin >> n;
    while (i<=n) {
        sigma += i;
        i++;
    }
    cout << "Total penjumlaham dari bilangan " << n << " adalah : " << sigma << endl;
}

void perulangan_4(){ // Menghitung fungsi Faktorial n menggunakan do while
    int n, f = 1;
    cout << "Masukkan bil integer positif : "; 
    cin >> n;
    do {
        f *= n;
        n--;
    } 
    while (n >= 1);
    cout <<"Faktorial dari " << n <<  " adalah : " << f << endl;
}

void perulangan_5(){ // menghitung sigma(i) menggunakan while dan break
    int i=1, n, sigma = 0;
    cout << "Masukkan bilangan integer positif : "; 
    cin >> n;
    while (1) {
        if (i > n) break; // loop berhenti disini ketika i>n
        sigma +=i;
        i++;
    }
    cout << "total penjumlahan dari bilangan " << n << " adalah: " << sigma << endl;
}    

void perulangan_6(){ // 
    int n;
    for (; ;) {
    cout << "Masukkan integer : "; 
    cin >> n;
    if (n % 2 ==0) continue;
    else if (n % 3 == 0) break;
    cout << "\tAkhir loop" << endl;
    }
    cout << "\tLuar loop" << endl;
}

void perulangan_7(){ // Membuat bintang menggunakan Nested loop
    for (int i=1; i<=3; i++) {
        for (int j=1; j<=5; j++) {
            cout << " * ";
        }
        cout << endl;
    }
}
    
void perulangan_8(){ // Membuat bintang menggunakan Nested loop while
    int i=1;
    while(i<=3) {
        int j=1;
        while (j<=5 ) {
            cout << " * ";
            j++;
        }
        cout << endl;
        i++;
    }
}

void perulangan_9(){ // studi kasus Mencetak Bintang 1
    for (int i=1; i<=5; i++) {
        for (int j=1; j<=5; j++) {
            if (i==j || (i+j==6)){
                cout << " * ";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void perulangan_10(){ // studi kasus Mencetak Bintang 2
    for (int i=1; i<=7; i++) {
        for (int j=1; j<=7; j++) {
            if ((i+j<=8 && i<=j)||(i+j>=8 && i>=j)){
                cout << " * ";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void perulangan_11(){ // studi kasus Membalikkan angka
    long m, d, n=0;
    cout << "Masukkan satu bilangan integer positif :"; 
    cin >> m;
    while (m > 0) {
        d = m % 10;
        m /= 10;
        n = 10*n + d;
    }
    cout << "Hasil pembalikan bilangan adalah : " << n;
}


int main(){
    // perulangan_1();
    // perulangan_2();
    // perulangan_3();
    // perulangan_4();
    // perulangan_5();
    // perulangan_6();
    // perulangan_7();
    // perulangan_8();
    // perulangan_9();
    // perulangan_10();
    // perulangan_11();

    cin.get();
    return 0;
}

