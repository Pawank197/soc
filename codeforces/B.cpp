#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // your code here
    int t;
    cin >> t;
    while(t--) {
        int n; cin >> n;

        ll px, py, qx, qy;
        cin >> px >> py >> qx >> qy;

        vector<ll> a(n);
        ll sum = 0, Max = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
            Max = max(Max, a[i]);
        }

        ll dx = px - qx;
        ll dy = py - qy;
        ll d2 = dx*dx + dy*dy;

        ll zero = 0;
        ll L = max(zero, 2*Max - sum);

        ll L2 = L*L;
        ll S2 = sum*sum;

        if (L2 <= d2 && d2 <= S2) {
            cout << "YES" << endl;
        } 
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
