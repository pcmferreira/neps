#include <bits/stdc++.h>

using namespace std;

int main() {
    int f[3];
    cin >> f[0] >> f[1] >> f[2];
    sort(f, f + 3);
    int w = f[0] + max(f[1] - (f[0] + 200), 0) + max(f[2] - (f[1] + 200), 0) + max(600 - (f[2] + 200), 0);
    cout << w * 100 << endl;
    return 0;
}
