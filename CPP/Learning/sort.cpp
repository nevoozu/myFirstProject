#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = n - 3; i < n; i++) {
        cout << v[i] << " ";
    }
}

//sort(name.begin(), name.end())
//From low to high: 20 50 10 = 10 20 50
//(binary_search(v.begin(), v.end(), x))