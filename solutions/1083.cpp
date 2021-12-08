#include <bits/stdc++.h>

using namespace std;

int main() {
    string a, b; cin >> a >> b;
    int av[26] = {0}, bv[26] = {0};
    int ast = 0;
    for (char c : a) {
        ++av[c - 'a'];
    }
    for (char c : b) {
        if (c == '*') ++ast;
        else ++bv[c - 'a'];
    }
    int d = 0;
    for (int i = 0; i < 26; ++i) {
        d += abs(av[i] - bv[i]);
    }
    cout << "NS"[d <= ast] << endl;
    return 0;
}
