
// MATERI PERCABANGAN

#include <iostream>
using namespace std;


void percabangan_1() { // menentukan jawaban benar atau salah menggunakan if
    int a;
    cout << "Berapakah 3 + 3?" << endl;
    cin >> a;
    if (a == 6) {
        cout << "Jawaban benar" << endl;
    }
    else {
        cout << "Salah" << endl;
    }
}

void percabangan_2() { // menentukan genap atau ganjil menggunakan if
    int nilai;
    cout << "Masukkan nilai: ";
    cin >> nilai;
    if (nilai % 2 == 0) {
        cout << "Nilai " << nilai << " adalah nilai genap." << endl;
    }
    else {
        cout << "Nilai " << nilai << " adalah nilai ganjil." << endl;
    }
}

void percabangan_3() { // menentukan golongan gaji menggunakan switch
    int gol;
    cout << "Masukkan gol: ";
    cin >> gol;
    switch (gol) {
    case 1:
        cout << "Gaji = 100" << endl;
        break;
    case 2:
        cout << "Gaji = 200" << endl;
        break;
    case 3:
        cout << "Gaji = 300" << endl;
        break;
    default:
        cout << "Gak dapat gaji" << endl;
    }
}

void percabangan_4() { // menentukan nilai maksimum menggunakan if
    int a, b, c, max;
    cout << "Masukkan 3 buah bilangan: ";
    cin >> a >> b >> c;
    max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    cout << "Maksimum adalah: " << max << endl;
}

void percabangan_5() { // menentukan nilai minimum menggunakan if
    int a, b, c, min;
    cout << "Masukkan 3 buah bilangan: ";
    cin >> a >> b >> c;
    min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    cout << "Minimum adalah: " << min << endl;
}

void percabangan_6() { // menentukan nilai tertinggi menggunakan if dan logika AND
    int a, b, c;
    cout << "Masukkan 3 buah bilangan: ";
    cin >> a >> b >> c;
    cout << "Nilai tertinggi adalah: ";
    if (a >= b && a >= c) cout << a << endl;
    else if (b >= a && b >= c) cout << b << endl;
    else cout << c << endl;
}

void percabangan_7() { // menentukan jawaban benar atau salah menggunakan if dan logika OR
    char jawab;
    cout << "Yakin (y/t): ";
    cin >> jawab;
    if (jawab == 'Y' || jawab == 'y')
        cout << "Ok, Anda yakin?" << endl;
    else
        cout << "Maaf, Anda tidak yakin." << endl;
}

void percabangan_8() { // menentukan jawaban benar atau salah menggunakan if dan logika OR
    string jawab;
    cout << "Yakin (y/t): ";
    cin >> jawab;
    if (jawab == "Ya" || jawab == "ya") {
        // Tindakan jika Y atau y
    }
    else {
        // Tindakan jika selain Y atau y
    }
}

void percabangan_9() {
    // Percabangan 9
    char status;
    int grade = 80;
    cout << "Masukkan Grade: ";
    cin >> grade;
    status = (grade >= 60) ? 'L' : 'G';
    cout << status << endl;
}

void percabangan_10() { // menentukan status lulus atau gagal menggunakan shortcut if
    string status;
    int grade;
    cout << "Masukkan Grade: ";
    cin >> grade;
    status = (grade >= 60) ? "L" : "G";
    cout << status << endl;
}

void percabangan_11() { // menentukan nilai minimum menggunakan shortcut if
    int m = 26, n = 82;
    int min = m < n ? m : n;
    cout << "Bilangan terkecil adalah: " << min << endl;
}

void percabangan_12() { // menentukan nilai maksimum menggunakan shortcut if
    int m = 100, n = 4;
    int max = m > n ? m : n;
    cout << "Bilangan terbesar adalah: " << max << endl;
}

int main() {
    // percabangan_1();
    // percabangan_2();
    // percabangan_3();
    // percabangan_4();
    // percabangan_5();
    // percabangan_6();
    // percabangan_7();
    // percabangan_8();
    // percabangan_9();
    // percabangan_10();
    // percabangan_11();
    // percabangan_12();

    cin.get();
    return 0;
}    

