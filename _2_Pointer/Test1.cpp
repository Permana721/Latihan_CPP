#include <iostream>

int main() {
    int arr[] = {10, 20, 30};
    int *p = arr;

    std::cout << *(p + 2); // Ini berfungsi untuk menunjuk elemen yang ada di dalam array
}