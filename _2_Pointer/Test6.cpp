#include <iostream>

int main() {
    int p;
    std::cout << "Masukkan jumlah angka yang ingin anda tambah: ";
    std::cin >> p;
    int *array = new int[p];

    for (int i = 0; i < p; i++) {
        std::cout << "Masukan angka ke " << i+1 << ": ";
        std::cin >> *(array + i);
    }

    int hasil = 0;
    for (int i = 0; i < p; i++) {
       hasil += *(array + i);
    }

    std::cout << "Hasil penjumlahan dari ketiga angka adalah: " << hasil;
    delete[] array;
}