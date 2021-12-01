#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; getline(cin, s);
    bool x[26] = {false};
    for (char c : s) {
        if (isalpha(c)) {
            x[c - 'a'] = true;
        }
    }
    int cnt = 0;
    for (int i = 0; i < 26; ++i) {
        cnt += x[i];
    }
    cout << "NS"[cnt == 23] << endl;
    return 0;
}
