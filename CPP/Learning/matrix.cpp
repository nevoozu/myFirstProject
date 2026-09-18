#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int n, result = 0;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int q = 0; q < n; q++) {
            cin >> matrix[i][q];
        }
    }
    for (int i= 0; i < n; i++) {
        result += matrix[i][i];
    }
    cout << result << "\n";
    return 0;
}

//vector<vector<int>> matrix(3, vector<int>(4))