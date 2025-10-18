#include <iostream>
using namespace std;

struct nilai {
    float uts, uas, tugas;
};

struct tanggal {
    int hari, bulan, tahun;
};

struct pelajar {
    string nama;
    int umur;
    string jurusan;
    tanggal lahir;
    nilai us;
};

float HitungNilai(nilai n) {
    return (n.uas * 0.40) + (n.uts * 0.35) + (n.tugas * 0.25);
}

void input(int &jumlah, pelajar s[]) {
    for (int z = 0; z < jumlah; z++) {
        cout << "------------------------------" << endl;
        cout << " Masukan Data Pelajar Ke-" << z + 1 << endl;
        cout << endl;

        cout << "Masukan Nama Pelajar : ";
        cin >> s[z].nama;

        cout << "Masukkan Umur Pelajar : ";
        cin >> s[z].umur;

        cout << "Masukkan jurusan Pelajar: ";
        cin >> s[z].jurusan;

        cout << "Masukkan Tanggal Lahir: ";
        cin >> s[z].lahir.hari;

        cout << "Masukkan Bulan Lahir: ";
        cin >> s[z].lahir.bulan;

        cout << "Masukkan Tahun Lahir: ";
        cin >> s[z].lahir.tahun;

        cout << "Masukkan Nilai UAS: ";
        cin >> s[z].us.uas;

        cout << "Masukkan Nilai UTS: ";
        cin >> s[z].us.uts;

        cout << "Masukkan Nilai TUGAS: ";
        cin >> s[z].us.tugas;
    }
}

void hasil(int jumlah, pelajar s[]) {

    for (int z = 0; z < jumlah; z++) {
        cout << "DATA PELAJAR KE-" << (z + 1) << endl;
        cout << endl;
        cout << "Nama : " << s[z].nama << endl;
        cout << "Umur : " << s[z].umur << endl;
        cout << "Jurusan : " << s[z].jurusan << endl;
        cout << "Tanggal Lahir : " << s[z].lahir.hari << "-" << s[z].lahir.bulan << "-" << s[z].lahir.tahun << endl;

        cout << "--NILAI--" << endl;
        cout << "Nilai UAS : " << s[z].us.uas << endl;
        cout << "Nilai UTS : " << s[z].us.uts << endl;
        cout << "Nilai TUGAS : " << s[z].us.tugas << endl;

        float nilaiAkhir = HitungNilai(s[z].us);
        cout << "NILAI AKHIR (Rata-Rata) : " << nilaiAkhir << endl;

        cout << "------------------------------" << endl;
    }
}

int main() {
    int jumlah;

    cout << "Masukkan Jumlah Pelajar Yang akan di Data : ";
    cin >> jumlah;

    pelajar s[jumlah];

    input(jumlah, s);

    cout << endl;
    cout << "-------------------------------" << endl;
    cout << endl;

    hasil(jumlah, s);
  
    return 0;
}