#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // your code here
    int n; cin >> n;
    ll sum = 0, mx = 0;

    for(int i = 0; i < n; i++){
        ll t; cin >> t;
        sum += t;
        mx = max(mx, t);
    }

    cout << max(sum, 2*mx) << endl;
    return 0;
}
