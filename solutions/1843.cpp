#include <bits/stdc++.h>

using namespace std;

int main() {
    bool x[] = {true, false, false, false, false, false, true, false, true, true};
    string a, b; cin >> a >> b;
    for (int i = 0; i < 3; ++i) {
        if (x[a[i] - '0']) a[i] = '0';
        if (x[b[i] - '0']) b[i] = '0';
    }
    cout << "NS"[a == b] << endl;
    return 0;
}
