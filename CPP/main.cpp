#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <memory>
#include <random>
#include <cctype>

using namespace std;

int main() {
    string str;
    cin >> str;
    str[0] = std::toupper(static_cast<unsigned char>(str[0]));
    cout << str;
    return 0;
}