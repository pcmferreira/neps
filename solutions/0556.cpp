#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    bool m[501][501];
    for (int i = 0; i < 501; ++i) {
        for (int j = 0; j < 501; ++j) {
            m[i][j] = false;
        }
    }
    bool ans = false;
    while (n--) {
        int x, y; cin >> x >> y;
        if (m[x][y]) ans = true;
        m[x][y] = true;
    }
    cout << (ans ? 1 : 0) << endl;
    return 0;
}
