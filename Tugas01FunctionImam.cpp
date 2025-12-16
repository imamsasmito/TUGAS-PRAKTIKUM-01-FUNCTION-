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
    const int banyakData = 3; // Volume data yang akan dimasukkan telah ditetapkan.

    cout << "Masukkan data" << endl;

    // Perulangan untuk menerima masukan dari pengguna.
    for (int i = 0; i < banyakData; ++i) {
        int input;
        cin >> input;
        jumlah += input;
    }

    // Rutinitas untuk menentukan dan memperlihatkan nilai tengah.
    hitungAverage(jumlah, banyakData);

    return 0;
}
