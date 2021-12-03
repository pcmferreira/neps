#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    for (int i = 1; (cin >> n) && (n != 0); ++i) {
        cout << "Teste " << i << endl << (int) pow(2, n) - 1 << "\n\n";
    }
    return 0;
}
