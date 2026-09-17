#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <memory>
#include <random>

using namespace std;

int main() {
    int amm, leng;
    cin >> amm;
    vector<string> v(amm);
    for (int i = 0; i < amm; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < amm; i++) {
        leng = v[i].size();
        if (leng > 10) {
            cout << v[i][0] << leng - 2 << v[i][leng - 1] << "\n";
        }
        else {
            cout << v[i] << "\n";
        }
    }
    return 0;
}