#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) {
        ll p, m; cin >> p >> m;
        // let's suppose there are x teams at max
        // then 4x <= p + m;
        // also: x <= p and x <=m
        // combining all these:
        ll teams = min(min(m, p), (p+m)/4);
        cout << teams << endl;
    }
    return 0;
}