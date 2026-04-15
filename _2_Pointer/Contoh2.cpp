#include <iostream>
using namespace std;

int main() {
    float y, *x1, *x2;
    y = 12.34;
    x1 = &y;
    x2 = x1;
    std::cout << "nilai Y yang di tunjuk oleh x1 adalah " << *x1 << " di alamat " << x1 << endl;
    std::cout << "nilai Y yang di tunjuk oleh x2 adalah " << *x2 << " di alamat " << x2;
}