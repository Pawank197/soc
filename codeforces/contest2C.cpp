#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // your code here
    ll MOD = 1000000007;
    int t; cin >> t;
    while(t--) {
        string s; cin >> s; int n = s.size();
        ll ans = 0;
        vector<int> prefix_sums(n);
        int sum = 0;
        for(int i = 0; i<n; i++) {
            if(s[i] == '1') {
                sum++;
            }
            prefix_sums[i] = sum;
        }
    }
    return 0;
}