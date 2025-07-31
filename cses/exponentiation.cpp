// ## IMPORTANT ##

#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

static const int MOD = 1000000007;

// Compute x^y mod MOD in O(log y) time.
// Convention: 0^0 = 1.
int64 modexp(int64 x, int64 y) {
    x %= MOD;
    if (x < 0) x += MOD;
    int64 res = 1;
    if (x == 0 && y == 0) return 1;
    while (y > 0) {
        if (y & 1) res = (res * x) % MOD;
        x = (x * x) % MOD;
        y >>= 1;
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--) {
        int64 a, b;
        cin >> a >> b;
        cout << modexp(a, b) << endl;
    }

    return 0;
}
