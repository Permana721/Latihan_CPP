#include <iostream>

int main() {
    int *array = new int[3];

    for (int i = 0; i < 3; i++) {
        std::cout << "Masukan angka ke " << i+1 << ": ";
        std::cin >> *(array + i);
    }

    int hasil = 0;
    for (int i = 0; i < 3; i++) {
       hasil += *(array + i);
    }

    std::cout << "Hasil penjumlahan dari ketiga angka adalah: " << hasil;
    delete[] array;
}