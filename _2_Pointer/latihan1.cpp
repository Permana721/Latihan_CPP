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
    float maxIPK = ptr->ipk;
    string namaMax = ptr->nama;

    for (int i = 0; i < 3; ++i) {
        std::cout << (ptr + i)->nama << endl;
        std::cout << (ptr + i)->umur << endl;
        std::cout << (ptr + i)->ipk << endl << "\n";
    }

    for (int i = 0; i < 3; ++i) {
        if ((ptr + i)->ipk > maxIPK) {
            maxIPK = (ptr + i)->ipk;
            namaMax = (ptr + i)->nama;
        }
    }

    cout << "IPK tertinggi adalah " << maxIPK
     << " yang dimiliki oleh " << namaMax << endl;
}