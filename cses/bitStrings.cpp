#include <bits/stdc++.h>
using namespace std;

static const int MOD = 1000000007;

long long modexp(long long base, long long exp) {
    long long result = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp & 1) 
            result = (result * base) % MOD;
        base = (base * base) % MOD;
        exp >>= 1;
    }
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // your code here
    int n;
    cin >> n;
    cout << modexp(2, n) << endl;
    return 0;
}
