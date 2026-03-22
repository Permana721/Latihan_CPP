#include <iostream>

typedef struct{
    int hari, bulan, tahun;
} Tanggal;

typedef struct{
    std::string nama;
    int umur;
    Tanggal izin;
} Karyawan;

int main(){
    Karyawan karyawan;

    karyawan.nama = "Permana";
    std::cout << "Nama karyawan adalah: " << karyawan.nama << std::endl;

    karyawan.umur = 18;
    std::cout << "Umur karyawan adalah: " << karyawan.umur << std::endl;

    karyawan.izin.hari = 21;
    karyawan.izin.bulan = 4;
    karyawan.izin.tahun = 2026;
    std::cout << "Karyawan izin pada Tanggal " << karyawan.izin.hari << ", Bulan " << karyawan.izin.bulan << ", Tahun " << karyawan.izin.tahun << std::endl;
}