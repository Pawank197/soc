#include <bits/stdc++.h>
using namespace std;
using int64 = long long;
const int MOD = 1e9+7;

int64 modexp(int64 base, int64 exp) {
    int64 res = 1;
    base %= MOD;
    while(exp > 0) {
        if(exp & 1) res = res * base % MOD;
        base = base * base % MOD;
        exp >>= 1;
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    // We need C(n+m-1, m) = (n+m-1)! / (m! * (n-1)!) mod MOD
    int N = n + m;  // we'll build factorials up to n+m

    vector<int64> fact(N+1), invfact(N+1);
    fact[0] = 1;
    for(int i = 1; i <= N; i++){
        fact[i] = fact[i-1] * i % MOD;
    }
    // invfact[N] = (fact[N])^(MOD-2) mod MOD
    invfact[N] = modexp(fact[N], MOD-2);
    for(int i = N; i >= 1; i--){
        invfact[i-1] = invfact[i] * i % MOD;
    }

    auto C = [&](int a, int b) -> int64 {
        if(b < 0 || b > a) return 0;
        return fact[a] * invfact[b] % MOD * invfact[a-b] % MOD;
    };

    // Stars and bars: non-negative x1+...+xn = m  → C(n+m-1, m)
    int64 answer = C(n + m - 1, m);
    cout << answer << "\n";

    return 0;
}
