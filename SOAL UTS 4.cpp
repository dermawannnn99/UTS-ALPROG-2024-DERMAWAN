#include <iostream>

using namespace std;

int main() {
    int angka;

    cout << "================================================" << endl;
    cout << "SELAMAT DATANG DI PROGRAM ANGKA GENAP DAN GANJIL" << endl;
    cout << "================================================" << endl;
    cout << "Masukkan Angka: ";
    cin >> angka;

    cout << endl;

    cout << "Bilangan Ganjil: " << endl;
    for (int i = 1; i < angka; i++) {
        if (i % 2 != 0) {
            cout << i << endl;
        }
    }

    cout << endl;

    cout << "Bilangan Genap: " << endl;
    for (int i = 0; i < angka; i++) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
    }

    cout << endl << endl << endl;
    cout << "TERIMAAKASIHHHHHHH >_<" << endl;

    return 0;
}
