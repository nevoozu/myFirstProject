#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num = 13;
    int x;
    while (num > 0) {
        cin >> x;
        num -= x;
    }
    return 0;
}