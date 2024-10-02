#include <iostream>

using namespace std;

    float penjumlahan(float a, float b) {
        return a + b; //PENJUMLAHAN
    }

    float pengurangan(float a, float b) {
        return a - b; //PENGURANGAN
    }
    float perkalian(float a, float b) {
        return a * b; //PERKALIAN
    }

    float pembagian(float a, float b) {
        if (b != 0) {
            return a / b; //PEMBAGIAN
        } else {
            cout << "ERROR: Pembagian dengan nol!" << endl;
            return 0;
        }
    }

    int main() {
        int pilihan;
        float operand1, operand2, hasil;

        cout << "========================================" << endl;
        cout << "  SELAMAT DATANG DI OPERASI MATEMATIKA  " << endl;
        cout << "========================================" << endl;
        cout << "Pilih operasi matematika yang ingin dilakukan:\n";
        cout << "1.     Penjumlahan (+)\n";
        cout << "2.     Pengurangan (-)\n";
        cout << "3.     Perkalian (x)\n";
        cout << "4.     Pembagian (/)\n";
        cout << "Masukkan pilihan (1-4): ";
        cin >> pilihan;

        cout << endl;

        cout << "ANDA MEMILIH NOMOR " << pilihan << endl;
        cout << "Masukkan angka pertama: ";
        cin >> operand1;
        cout << "Masukkan angka kedua: ";
        cin >> operand2;

        switch (pilihan) {
            case 1:
                hasil = penjumlahan(operand1, operand2);
                cout << "Hasil dari penjumlahan dari" << endl;
                cout << operand1 << " + " << operand2 << endl;
                cout << "= " << hasil << endl;
                break;

            case 2:
                hasil = pengurangan(operand1, operand2);
                cout << "Hasil dari pengurangan untuk " << operand1 << " dan " << operand2 << " adalah " << hasil << endl;
                break;

            case 3:
                hasil = perkalian(operand1, operand2);
                cout << "Hasil dari perkalian untuk " << operand1 << " dan " << operand2 << " adalah " << hasil << endl;
                break;

            case 4:
                hasil = pembagian(operand1, operand2);
                if (operand2 != 0) {
                    cout << "Hasil dari pembagian untuk " << operand1 << " dan " << operand2 << " adalah " << hasil << endl;
                }
                break;

            default:
                cout << "Pilihan tidak valid!" << endl;
                break;
        }

        return 0;
    }
