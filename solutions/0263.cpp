#include <bits/stdc++.h>

using namespace std;

int main() {
    string n; cin >> n;
    cout << "NS"[(stoi(n.size() >= 3 ? n.substr(n.size() - 2) : n)) % 4 == 0] << endl;
    int s = 0;
    for (char c : n) {
        s += c - '0';
    }
    cout << "NS"[s % 9 == 0] << endl;
    cout << "NS"[(stoi(n.size() >= 3 ? n.substr(n.size() - 2) : n)) % 25 == 0] << endl;
    return 0;
}
