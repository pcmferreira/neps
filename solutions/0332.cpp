#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, s; cin >> n >> s;
    int ans = s;
    while (n--) {
        int x; cin >> x;
        s += x;
        ans = min(ans, s);
    }
    cout << ans << endl;
    return 0;
}
