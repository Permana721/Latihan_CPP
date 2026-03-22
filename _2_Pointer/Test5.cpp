#include <iostream>

int main() {
    int *array = new int[3];

    for (int i = 0; i < 3; i++) {
        std::cout << "Masukan angka ke " << i+1 << ": ";
        std::cin >> *(array + i);
    }

    int max_num = array[0];
    for (int i = 0; i < 3; i++) {
        if (*(array + i) > max_num) {
            max_num = *(array + i);
        }
    }

    std::cout << "angka terbesar adalah " << max_num;
    delete[] array;
}