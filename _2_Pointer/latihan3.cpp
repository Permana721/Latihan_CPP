#include <iostream>
using namespace std;

typedef struct {
    string nama;
    int umur;
    float ipk;
} Mahasiswa;

int main() {
    Mahasiswa mhs[3];
    mhs[0].nama = "Permana Surya Dharma";
    mhs[0].umur = 18;
    mhs[0].ipk = 4.00;

    mhs[1].nama = "Arido Shifuka";
    mhs[1].umur = 23;
    mhs[1].ipk = 3.90;

    mhs[2].nama = "Purbo Ruto";
    mhs[2].umur = 22;
    mhs[2].ipk = 3.50;

    Mahasiswa *ptr = mhs;

    for (int i = 0; i < 3; i++) {
        std::cout << "Nama siswa ke " << i+1 << " adalah: " << (ptr + i)->nama << endl;
        std::cout << "Nama siswa ke " << i+1 << " disimpan pada memori: " << &((ptr + i)->nama) << endl;
        std::cout << "Umur siswa ke " << i+1 << " adalah: " << (ptr + i)->umur << endl;
        std::cout << "Umur siswa ke " << i+1 << " disimpan pada memori: " << &((ptr + i)->umur) << endl;
        std::cout << "IPK siswa ke " << i+1 << " adalah: " << (ptr + i)->ipk << endl;
        std::cout << "IPK siswa ke " << i+1 << " disimpan pada memori: " << &((ptr + i)->ipk) << endl;
        std::cout << "\n";
    }
}