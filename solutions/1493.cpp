#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k; cin >> n >> k;
    k += 60;
    cout << min(n, k) * 1500 + (n - min(n, k)) * 3000 << endl;
    return 0;
}
