#include <iostream>

using namespace std;

int main() {
    int num = 13;
    int x;
    while (num > 0) {
        cin >> x;
        num -= x;
        cout << num << " hp" << "\n";
    }
    return 0;
}