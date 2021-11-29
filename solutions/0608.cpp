#include <bits/stdc++.h>

using namespace std;

int main() {
    int i, n; cin >> i >> n;
    map<char, int> m;
    m['D'] = m['E'] = m['F'] = i;

    while (n--) {
        char op; cin >> op;
        if (op == 'A') {
            char j, k; cin >> j >> k;
            int x; cin >> x;
            m[j] += x;
            m[k] -= x;
        } else {
            char j; cin >> j;
            int x; cin >> x;
            if (op == 'C') m[j] -= x;
            else m[j] += x;
        }
    }
    cout << m['D'] << " " << m['E'] << " " << m['F'] << endl;
    return 0;
}
