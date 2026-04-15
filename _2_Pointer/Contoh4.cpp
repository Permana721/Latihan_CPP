#include <iostream>
using namespace std;

int main() {
    int a = 25, b = 12;
    int *p, *q;
    p = &a;
    q = &b;
    std::cout << "Nilai a adalah " << a << " dan disimpan pada memori " << p << endl;
    std::cout << "Nilai b adalah " << b << " dan disimpan pada memori " << q;
}