#include <iostream>
using namespace std;

int main() {
    int a = 25;
    int *p;

    p = &a;
    *p = *p + 25;
    std::cout << "nilai a adalah " << a;
}