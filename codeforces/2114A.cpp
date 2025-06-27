#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int year = stoi(s);               // 0 … 9999
        int r = int(round(sqrt(year)));   // candidate integer root
        if (r*r == year) {
            // We can always take a=0, b=r
            cout << 0 << " " << r << "\n";
        } else {
            cout << -1 << "\n";
        }
    }
    return 0;
}