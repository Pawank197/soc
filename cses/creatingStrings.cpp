#include <bits/stdc++.h>
using namespace std;

static const int MOD = 1000000007;

long long modexp(long long a, long long e = MOD-2) {
    long long res = 1;
    while (e > 0) {
        if (e & 1) res = res * a % MOD;
        a = a * a % MOD;
        e >>= 1;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // your code here
    string s;
    cin >> s;
    int n = s.size();

    array<int,26> freq = {0};
    for (char c : s) {
        freq[c - 'a']++;
    }

    vector<long long> fact(n+1), invfact(n+1);
    fact[0] = 1;
    for (int i = 1; i <= n; i++) {
        fact[i] = fact[i-1] * i % MOD;
    }
    invfact[n] = modexp(fact[n]);
    for (int i = n; i > 0; i--) {
        invfact[i-1] = invfact[i] * i % MOD;
    }

    long long ans = fact[n];
    for (int c = 0; c < 26; c++) {
        if (freq[c] > 1) {
            ans = ans * invfact[freq[c]] % MOD;
        }
    }

    cout << ans << endl;
    return 0;
}
