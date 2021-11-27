#include <bits/stdc++.h>

using namespace std;

int main() {
    int c, q; cin >> c >> q;
    double x[] = {6.9, 7.3, 4.5, 5.7};
    cout <<
        fixed << setprecision(2) <<
        "O valor total da compra e R$ " << x[c - 1] * q << endl;
    return 0;
}
