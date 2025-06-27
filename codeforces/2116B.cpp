#include <bits/stdc++.h>
using namespace std;

long long mod_pow(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp & 1) result = result * base % mod;
        base = base * base % mod;
        exp >>= 1;
    }
    return result;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >>  n;
        long long MOD =998244353;
        unordered_map<int, long long> map;
        vector<long long> p(n), q(n);

        for(int i = 0; i<n; i++) {
            cin >> p[i];
            map[p[i]] = mod_pow(2, p[i], MOD);
        }
        for(int i = 0; i<n; cin >> q[i++]);
        vector<int> r(n);
        for(int i = 0; i<n; i++) {
            long long Max = 0;
            for(int j = 0; j<=i; j++) {
                long long x = map[p[j]];
                long long y = map[q[i-j]];
                Max = max(Max, (x+y)%MOD);
            }
            r[i] = Max;
        }

        for(int i = 0; i<n; i++) {
            cout << r[i] << " ";
        }
        cout << endl;
    }
}
