#include <iostream>
using namespace std;

int main () {
    char x = 'a';
    char *alamat_x = &x;
    std::cout << "nilai variabel x adalah: " << x << " \ndan disimpan pada memori: " << (void*)alamat_x << std::endl;
}