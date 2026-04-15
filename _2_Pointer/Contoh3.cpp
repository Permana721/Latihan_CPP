#include <iostream>
using namespace std;

int main() {
    int *p, a = 25, b;
    p = &a;
    b = *p;
    std::cout << "Nilai a adalah " << a << " di alamat " << p << endl;
    std::cout << "Nilai b adalah " << b << " di alamat " << p;
}