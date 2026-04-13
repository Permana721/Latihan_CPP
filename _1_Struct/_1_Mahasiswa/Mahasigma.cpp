#include <iostream>
using namespace std;

typedef struct {
    string nama;
    int umur;
    float ipk;
} Mahasigma;

int main() {
    Mahasigma mhs;

    mhs.nama = "Permana Surya Dharma";
    mhs.umur = 18;
    mhs.ipk = 4.12;
    cout << "Nama anda adalah: " << mhs.nama;
    cout << "\nUmur anda adalah: " << mhs.umur;
    cout << "\nIPK Anda adalah: " << mhs.ipk;
}