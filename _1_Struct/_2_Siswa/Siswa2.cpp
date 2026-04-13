#include <iostream>
using namespace std;

typedef struct {
    string nama;
    int umur;
    float nilai;
} Siswa;

int main() {
    Siswa siswa[5];

    for (int i = 0; i < 5; i++) {
        std::cout << "Masukkan nama untuk siswa ke " << i+1 << ": ";
        std::cin >> siswa[i].nama;
        std::cout << "Masukkan umur untuk siswa ke " << i+1 << ": ";
        std::cin >> siswa[i].umur;
        std::cout << "Masukkan nilai untuk siswa ke " << i+1 << ": ";
        std::cin >> siswa[i].nilai;
        std::cout << "\n";
    }
    std::cout << "======================================================";

    for (int i = 0; i < 5; i++) {
        std::cout << "\nNama siswa ke " << i+1 << " adalah: " << siswa[i].nama;
        std::cout << "\nUmur siswa ke " << i+1 << " adalah: " << siswa[i].umur;
        std::cout << "\nNilai siswa ke " << i+1 << " adalah: " << siswa[i].nilai;
        std::cout << "\n";
    }
}