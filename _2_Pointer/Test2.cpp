#include <iostream>

int main() {
    int a = 10;
    int *p = &a;
    *p = *p + 20;

    std::cout << "Nilai a: " << a << std::endl;
    std::cout << "Alamat a: " << p << std::endl;
    std::cout << "Isi pointer p: " << p << std::endl;
    std::cout << "Nilai dari pointer p: " << *p << std::endl;
}