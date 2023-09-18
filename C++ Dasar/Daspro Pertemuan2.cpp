// TUGAS 

#include <iostream>
using namespace std;

int main(){

    
    int uts = 70, uas = 75, tugas = 85, max, total, rata_rata;

    string input;

    cout << "Masukkan nim: ";
    cin >> input;

    if (input.empty()) {
        cout << "nim kosong." << endl;
        return 0;
    }

    char lastChar = input.back(); // Mengambil karakter terakhir dari string
    int lastDigit = lastChar - '0'; // Mengonversi karakter ke bilangan bulat

    if (lastDigit % 2 == 0) {
        cout << "genap (" << lastDigit << ")." << endl;
    } else {
        cout << "ganjil (" << lastDigit << ")." << endl;
    }


    if (uts > uas && uts > tugas) max = uts;
    if (uas > uts && uas > tugas) max = uas;
    if (tugas > uts && tugas > uas) max = tugas;
    cout << "nilai maksimum anda adalah" << max << endl;

    total = uts + uas + tugas;
    rata_rata = total / 3;
    cout << "nilai rata rata anda adalah : " << rata_rata << endl;

    if (rata_rata >= 90) {
    cout << "A" << endl;
} else if (rata_rata >= 80 && rata_rata < 90) {
    cout << "A-" << endl;
} else if (rata_rata >= 75 && rata_rata < 80) {
    cout << "B+" << endl;
} else if (rata_rata >= 70 && rata_rata < 75) {
    cout << "B" << endl;
} else if (rata_rata >= 65 && rata_rata < 70) {
    cout << "C+" << endl;
} else if (rata_rata >= 60 && rata_rata < 65) {
    cout << "C" << endl;
} else if (rata_rata >= 55 && rata_rata < 60) {
    cout << "D" << endl;
} else {
    cout << "E" << endl;
}


cin.get();
return 0;
}

