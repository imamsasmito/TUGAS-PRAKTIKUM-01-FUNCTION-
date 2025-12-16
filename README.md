# Program Hitung Rata-rata

Program C++ sederhana untuk menghitung nilai rata-rata dari sejumlah data yang dimasukkan oleh pengguna.

## Deskripsi

Program ini meminta pengguna untuk memasukkan 3 angka, kemudian menghitung dan menampilkan:
- Total jumlah dari semua angka
- Banyaknya data yang dimasukkan
- Nilai rata-rata dari data tersebut

## Fitur

- Input data melalui console
- Perhitungan rata-rata otomatis
- Pengunaan fungsi untuk modularitas kode
- Output yang informatif dan terstruktur

## Persyaratan Sistem

- Compiler C++ (g++, clang++, atau MSVC)
- C++ Standard: C++98 atau yang lebih baru
- Sistem Operasi: Windows, Linux, atau macOS

## Cara Kompilasi

### Menggunakan g++
```bash
g++ Tugas01FunctionImam.cpp -o hitungAverage
```

### Menggunakan clang++
```bash
clang++ Tugas01FunctionImam.cpp -o hitungAverage
```

## Cara Menjalankan

### Linux/macOS
```bash
./hitungAverage
```

### Windows
```cmd
hitungAverage.exe
```

## Contoh Penggunaan

### Input
```
Masukkan data
10
20
30
```

### Output
```
Jumlah Angka = 60
Banyak Data = 3
Rata-ratanya = 20
```

## Struktur Kode

### Fungsi Utama

**`void hitungAverage(int jumlah, int banyakData)`**
- Menghitung rata-rata dari jumlah total dan banyak data
- Menampilkan hasil perhitungan ke console

**`int main()`**
- Fungsi utama program
- Menerima input dari pengguna
- Memanggil fungsi hitungAverage untuk menampilkan hasil

## Detail Implementasi

- Program menggunakan `static_cast<double>` untuk konversi tipe data agar hasil pembagian lebih akurat
- Jumlah data yang dapat dimasukkan sudah ditetapkan (3 data)
- Menggunakan perulangan `for` untuk menerima input secara berurutan

## Modifikasi yang Dapat Dilakukan

1. Mengubah nilai `banyakData` untuk menerima lebih banyak atau lebih sedikit input
2. Menambahkan validasi input untuk memastikan data yang dimasukkan valid
3. Menambahkan fitur untuk menghitung median atau modus
4. Memungkinkan pengguna menentukan banyaknya data yang ingin dimasukkan

## Lisensi

Program ini dibuat untuk tujuan pembelajaran.

## Kontak

Untuk pertanyaan atau saran, silakan hubungi pengembang.
