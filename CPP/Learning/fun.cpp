#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void double_elements (vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        v[i] *= 2;
    }
}

long long getIndex (long long weight, long long speed) {
    long long answer;
    if (weight > speed) {
        answer = weight + speed;
    }
    else if (weight < speed) {
        answer = weight * speed;
    }
    else if (weight == speed) {
        answer = 0;
    }
    return answer;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    double_elements(v);
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    return 0;
}