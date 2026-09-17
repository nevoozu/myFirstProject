#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <memory>
#include <random>

using namespace std;

int main() {
    int amm, gr = 0;
    cin >> amm;
    int q, w, e;
    for (int i = 0; i < amm; i++) {
        cin >> q >> w >> e;
        if (q + w + e >= 2) {
            gr += 1;
        }
    }
    cout << gr << "\n";
    return 0;
}