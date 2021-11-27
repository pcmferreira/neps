#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v;
    while (n--) {
        int k, p; cin >> k >> p;
        v.insert(v.end(), k, p);
    }
    int q; cin >> q;
    while (q--) {
        int x, y; cin >> x >> y;
        --x; --y;
        uint64_t ans = 0;
        for (int i = x; i <= y; ++i) {
            ans += v[i];
        }
        cout << ans << endl;
    }
    return 0;
}
