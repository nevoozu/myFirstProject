#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string S, Sn;
    cin >> S;
    int amm = 0;
    for (int i = 0; i < S.size(); i++) {
        if (S[i] == 'a') {
            Sn += '!';
            amm += 1;
        }
        else {
            Sn += S[i];
        }
    }
    cout << Sn << "\n" << amm;
    return 0;
}

//.size()   <string>   