#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Elemen teratas: " << s.top() << endl;

    s.pop();

    cout << "Setelah pop, top: " << s.top() << endl;

    cout << "Jumlah elemen: " << s.size() << endl;

    return 0;
}