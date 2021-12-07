#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> x(n);
    for (int i = 0; i < n; ++i) {
        cin >> x[i];
    }
    int ans = 1;
    for (int i = 2; i < n; ++i) {
        if ((x[i] - x[i - 1]) != (x[i - 1] - x[i - 2]))
            ++ans;
    }
    cout << ans << endl;
    return 0;
}
