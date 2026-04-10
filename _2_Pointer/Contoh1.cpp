#include <iostream>

int main () {
    char x;
    char *alamat_x;
    x = 'a';
    alamat_x = &x;
    std::cout << "Nilai variabel x, yaitu " << x << ", disimpan pada alamat " << alamat_x;
}