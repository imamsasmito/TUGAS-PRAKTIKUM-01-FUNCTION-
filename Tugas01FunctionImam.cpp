#include <iostream>

using namespace std;

// Program untuk menentukan dan memperlihatkan nilai tengah.
void hitungAverage(int jumlah, int banyakData) {
    double rata = static_cast<double>(jumlah) / banyakData;
    cout << "Jumlah Angka = " << jumlah << endl
        << "Banyak Data = " << banyakData << endl
        << "Rata-ratanya = " << rata << endl;
}

int main() {
    int jumlah = 0;
    const int banyakData = 3; // Data yang di masukan telah di tetapkan.

    cout << "Masukkan data" << endl;

    // Perulangan guna menerima masukan oleh pengguna.
    for (int i = 0; i < banyakData; ++i) {
        int input;
        cin >> input;
        jumlah += input;
    }

    // Rutinitas untuk Menemukan dan menampilkan nilai tengah.
    hitungAverage(jumlah, banyakData);

    return 0;
}

