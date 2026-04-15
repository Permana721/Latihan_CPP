#include <iostream>
using namespace std;

int main() {
    char s[] = "Hello World";
    char *p;

    p = s;

    for (int i = 0; i < 10; i++) {
        cout << *p;
        p++;
    }
}