#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    int total = 35 * 365 * t * 2;

    int years = total / (365 * 24 * 60);
    int days = total / (24 * 60) % 365;
    int hours = total / 60 % 24;
    int minutes = total % 60;

    cout <<
        years << " ano(s), " << days << " dia(s), " <<
        hours << " hora(s) e " << minutes << " minuto(s)\n";

    return 0;
}
