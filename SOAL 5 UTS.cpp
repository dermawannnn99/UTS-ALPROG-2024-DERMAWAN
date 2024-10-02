#include <iostream>

using namespace std;

int main() {
    float beratBadan, imt;
    int tinggiBadan;

    cout << "=======================================================" << endl;
    cout << "SELAMAT DATANG DI PROGRAM MENENTUKAN KRITERIA KEGEMUKAN" << endl;
    cout << "=======================================================" << endl<< endl;
    cout << "Masukkan Berat Badan (kg): ";
    cin >> beratBadan;
    cout << "Masukkan Tinggi Badan (cm): ";
    cin >> tinggiBadan;

    float tinggiBadanMeter = tinggiBadan / 100.0;

    imt = beratBadan / (tinggiBadanMeter * tinggiBadanMeter);

    cout << "Nilai IMT Anda: " << imt << endl;

    if (imt <= 18.4) {
        cout << "Kategori: Berat Badan Kurang" << endl;
    } else if (imt >= 18.5 && imt <= 24.9) {
        cout << "Kategori: Berat Badan Ideal" << endl;
    } else if (imt >= 25 && imt <= 29.9) {
        cout << "Kategori: Berat Badan Lebih" << endl;
    } else if (imt >= 30 && imt <= 39.9) {
        cout << "Kategori: Gemuk" << endl;
    } else if (imt >= 40) {
        cout << "Kategori: Sangat Gemuk" << endl;
    } else {
        cout << "Kategori tidak valid!" << endl;
    }

    return 0;
}
