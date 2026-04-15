#include <iostream>
using namespace std;

typedef struct {
    string nama;
    int umur;
    float ipk;
} Mahasiswa;

void ubahIPK(Mahasiswa *m, float ipkBaru) {
    m->ipk = ipkBaru;
}

int main() {
    Mahasiswa mhs[3];

    mhs[0].nama = "Permana Surya Dharma";
    mhs[0].umur = 18;
    mhs[0].ipk = 4.00;

    std::cout << "IPK Sebelum di Ubah: " << mhs[0].ipk << endl ;

    ubahIPK(&mhs[0], 3.40);

    cout << "IPK Setelah di ubah: " << mhs[0].ipk << endl;
}