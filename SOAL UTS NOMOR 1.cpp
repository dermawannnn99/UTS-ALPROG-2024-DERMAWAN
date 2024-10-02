#include <iostream>
using namespace std;

    float pembulatan (float nilai) {
        return (int) (nilai * 100 + 0.5) / 100.0;
    }

    void HitungNilaiMahasiswa (string nama, string npm, float absen, float tugas, float uts, float uas) {
        float NilaiAkhir = (absen * 0.1) + (tugas * 0.2) + (uts * 0.3) + (uas * 0.4);
            NilaiAkhir = pembulatan (NilaiAkhir);

    char HurufMutu;
        if (NilaiAkhir >= 85 && NilaiAkhir < 100 ){
            HurufMutu = 'A';
        } else if (NilaiAkhir >= 80 && NilaiAkhir < 85) {
            HurufMutu = 'B';
        } else if (NilaiAkhir >= 75 && NilaiAkhir < 80) {
            HurufMutu = 'C';
        } else if (NilaiAkhir >= 70 && NilaiAkhir < 75) {
            HurufMutu = 'D';
        } else
            HurufMutu = 'E';

    cout << "---------------------" << endl;
    cout << "     HASIL AKHIR     " << endl;
    cout << "---------------------" << endl;
    cout << "Nama           : " << nama << endl;
    cout << "NPM            : " << npm << endl;
    cout << "Nilai absen    : " << absen << endl;
    cout << "Nilai Tugas    : " << tugas << endl;
    cout << "Nilai UTS      : " << uts << endl;
    cout << "Nilai UAS      : " << uas << endl;
    cout << "-----------------" << endl;
    cout << "Nilai Akhir    : " << NilaiAkhir << endl;
    cout << "Huruf Mutu     : " << HurufMutu << endl << endl;
    cout << "Terimakasih telah menggunakan program ini >_<" << endl;
    }

    int main () {
        string nama, npm;
        float absen, tugas, uts, uas;

        cout << "==========================================================" << endl;
        cout << "SELAMAT DATANG DI PROGRAM MENGHITUNG NILAI AKHIR MAHASISWA" << endl;
        cout << "==========================================================" << endl << endl;

        cout << "----------DATA MAHASISWA----------" << endl;
        cout << "Masukan Nama Mahasiswa :";
        cin >> nama;
        cout << "Masukan NPM Mahasiswa  :";
        cin >> npm;
        cout << "----------NILAI MAHASISWA----------" << endl;
        cout << "Masukan Nilai Absen    :";
        cin >> absen;
        cout << "Masukan Nilai Tugas    :";
        cin >> tugas;
        cout << "Masukan Nilai UTS      :";
        cin >> uts;
        cout << "Masukan Nilai UAS      :";
        cin >> uas;

        HitungNilaiMahasiswa (nama, npm,absen, tugas, uts, uas);

        return 0;
    }

