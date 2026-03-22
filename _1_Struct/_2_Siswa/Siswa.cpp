#include <iostream>
#include <string>

typedef struct{
    char nama[50];
    int umur;
} Mahasiswa;

int main(){
    Mahasiswa mhs[5];

    for(int i = 0; i < 5; i++) {
        std::cout << "Masukan nama mahasiswa ke " << i + 1 << ": ";
        std::cin >> mhs[i].nama;
        std::cout << "Masukkan umur mahasiswa ke " << i + 1 << ": ";
        std::cin >> mhs[i].umur;
        std::cout << "\n" << std::endl;
    }

    std::cout << "\n======Menampilkan Data Mahasiswa======\n" << std::endl;

    for(int i = 0; i < 5; i++){
        std::cout << "Nama mahasiswa ke " << i + 1 << " adalah: " << mhs[i].nama << "\n";
        std::cout << "Umur mahasiswa ke " << i + 1 << " adalah: " << mhs[i].umur;
        std::cout << "\n" << std::endl;
    }
}