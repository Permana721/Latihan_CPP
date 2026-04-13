#include <iostream>
using namespace std;

typedef struct {
    int tanggal, bulan, tahun;
} Tanggal;

typedef struct {
    string nama;
    int umur;
    Tanggal tglLahir;
} Anggota;

int main() {
    Anggota anggota[2];
    for (int i = 0; i < 2; i++) {
        std::cout << "\nMasukkan nama anggota ke " << i+1 << ": ";
        std::cin >> anggota[i].nama;
        std::cout << "Masukkan umur anggota ke " << i+1 << ": ";
        std::cin >> anggota[i].umur;
        std::cout << "asukkan Tanggal Lahir anggota ke " << i+1 << ": ";
        std::cin >> anggota[i].tglLahir.tanggal;
        std::cout << "Masukkan Bulan Lahir anggota ke " << i+1 << ": ";
        std::cin >> anggota[i].tglLahir.bulan;
        std::cout << "Masukkan Tahun Lahir anggota ke " << i+1 << ": ";
        std::cin >> anggota[i].tglLahir.tahun;
        std::cout << "\n";
    }

    std::cout << "==================================";

    for (int i = 0; i < 2; i++) {
        std::cout << "\nNama anggota ke " << i+1 << " adalah: " << anggota[i].nama;
        std::cout << "\nUmur anggota ke " << i+1 << " adalah: " << anggota[i].umur;
        std::cout << "\nTanggal Lahir anggota ke " << i+1 << " adalah: " << anggota[i].tglLahir.tanggal;
        std::cout << "\nBulan Lahir anggota ke " << i+1 << " adalah: " << anggota[i].tglLahir.tanggal;
        std::cout << "\nTahun Lahir anggota ke " << i+1 << " adalah: " << anggota[i].tglLahir.tahun;
        std::cout << "\n";
    }
}