#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <memory>
#include <random>

using namespace std;

int main() {
    int n, k,amm = 0;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i ++) {
        cin >> v[i];
    }
    int gb = v[k - 1];
    for (int i = 0; i < n; i++) {
        if (v[i] >= gb && v[i] > 0) {
            amm += 1;
        }
    }
    cout << amm << "\n";
    return 0;
}