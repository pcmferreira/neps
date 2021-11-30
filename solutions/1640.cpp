#include <bits/stdc++.h>

using namespace std;

int main() {
    string a, b; cin >> a >> b;
    map<char, char> m, n;
    for (char i = 'a'; i <= 'z'; ++i) {
        m[i] = '*';
        n[i] = '*';
    }
    bool ans = true;
    for (int i = 0; i < a.size(); ++i) {
        if (m[a[i]] == '*') {
            m[a[i]] = b[i];
        } else if (m[a[i]] != b[i]) {
            ans = false;
            break;
        }
        if (n[b[i]] == '*') {
            n[b[i]] = a[i];
        } else if (n[b[i]] != a[i]) {
            ans = false;
            break;
        }
    }
    cout << (ans ? "Sim" : "Nao") << endl;
    return 0;
}
