#include <iostream>

int main() {
    int *array = new int[3];

    for (int i = 0; i < 3; i++) {
        std::cout << "Masukan angka ke " << i+1 << ": ";
        std::cin >> *(array + i);
    }

    for (int i = 0; i < 3; i++) {
        std::cout << "Angka ke " << i+1 << " adalah: " << *(array + i) << std::endl;
    }

    delete[] array;
    return 0;
}