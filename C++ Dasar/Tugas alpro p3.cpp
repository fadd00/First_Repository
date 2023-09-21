#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n){
        if (n <= 1) {
            return false;
        }
         for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                return false;
            }
        }
    return true;
    }

void Tugas_perulangan_1(){ // menampilkan bilangan prima 
    int n;
    cout << "Masukkan Nilai n : " ;
            cin >> n;
            for (int a = 1 ; a < n; a++)
            {   
                int bil = 0;
                for (int b = 1; b <= a; b++)
                {
                   if (a % b == 0)
                    {
                        bil=bil +1;
                    }
                }
                if (bil == 2)
                {
                    cout << "bilangan prima : " << a << endl;
                }
            }
}

void Tugas_perulangan_2(){ // menampilkan faktorial
    int n, f = 1;
    cout << "masukkan bilangan integer positif : ";
    cin >> n;
    for (int i = 1; i <= n; i++){
        f *= i;
    }
    cout << "faktorial dari " << n << " adalah : " << f << endl;

}

void Tugas_perulangan_3(){ // menampilkan luas persegi panjang
    int panjang, lebar, luas;
    cout << "masukkan panjang persegi panjang : ";
    cin >> panjang;
    cout << "masukkan lebar persegi panjang : ";
    cin >> lebar;
    luas = panjang * lebar;
    cout << "luas persegi panjang adalah : " << luas << endl;
}

void Tugas_perulangan_4(){ // menampilkan luas segitiga
    int alas, tinggi, luas;
    cout << "masukkan alas segitiga : ";
    cin >> alas;
    cout << "masukkan tinggi segitiga : ";
    cin >> tinggi;
    luas = 0.5 * alas * tinggi;
    cout << "luas segitiga adalah : " << luas << endl;
}

void Tugas_perulangan_5(){ // menampilkan bintang
    int n;
    cout << "masukkan nilai n : ";
    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void Tugas_perulangan_6(){ // menampilkan bintang terbalik
    int n;
    cout << "masukkan nilai n : ";
    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = n; j >= i; j--){
            cout << "*";
        }
        cout << endl;
    }
}

void Tugas_perulangan_7(){ // menampilkan apakah bilangan prima atau bukan
    int n;
    cout << "Masukkan suatu bilangan: ";
    cin >> n;

    if (isPrime(n)) {
        cout << n << " adalah bilangan prima." << endl;
    } else {
        cout << n << " bukan bilangan prima." << endl;
    }
}

int main(){
    int pilih;
    while (true) {
        cout << "Selamat datang di tugas Alpro" << endl;
        cout << "1. Menampilkan bilangan prima" << endl;
        cout << "2. Menampilkan faktorial" << endl;
        cout << "3. Menampilkan luas persegi panjang" << endl;
        cout << "4. Menampilkan luas segitiga" << endl;
        cout << "5. Menampilkan Bintang" << endl;
        cout << "6. Menampilkan Bintang terbalik" << endl;
        cout << "7. Menampilkan apakah bilangan prima atau bukan" << endl;
        cout << "0. Keluar" << endl;
        cout << "Masukkan pilihan Anda : ";
        cin >> pilih;

        switch (pilih) {
            case 1:
                Tugas_perulangan_1();
                break;
            case 2:
                Tugas_perulangan_2();
                break;
            case 3:
                Tugas_perulangan_3();
                break;
            case 4:
                Tugas_perulangan_4();
                break;
            case 5:
                Tugas_perulangan_5();
                break;
            case 6:
                Tugas_perulangan_6();
                break;
            case 7:
                Tugas_perulangan_7();
                break;
            case 0:
                cout << "Terima kasih." << endl;
                return 0;
            default:
                cout << "Kode yang Anda masukkan salah. Silakan coba lagi." << endl;
                break;
        }
    }


    cin.get();
    return 0;
}