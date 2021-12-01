#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k; cin >> n >> k;
    vector<int> x(n);
    for (int i = 0; i < n; ++i) {
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    int d = n - k;
    uint64_t s = 0;
    int ans = x[n - 1] - x[0];
    for (int i = 0; i < n; ++i) {
        if (i >= d) s -= x[i - d];
        s += x[i];
        if (i >= d - 1) {
            ans = min(ans, x[i] - x[i - d + 1]);
        }
    }
    cout << ans << endl;
    return 0;
}
