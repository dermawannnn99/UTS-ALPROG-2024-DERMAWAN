#include<iostream>
using namespace std;

    int main (){

    cout << "==================================" << endl;
    cout << "SELAMAT DATANG DI PROGRAM SEGITIGA" << endl;
    cout << "==================================" << endl << endl;
    int baris, spasi, bintang, a;
    cout << "Masukan jumlah baris : ";
    cin >> a;

    for(baris = 1;baris <= a; baris++) {
        for(spasi = 1; spasi <= baris; spasi++) {
          cout << "*";
        }
        cout << endl;
    }

 return 0;
}
