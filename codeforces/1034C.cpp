#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // your code here
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i<n; cin >> a[i++]);
        
        vector<int> prefixMin(n);
        prefixMin[0] = a[0];
        for(int i = 1; i<n;i++) {
            prefixMin[i] = min(prefixMin[i-1], a[i]);
        }

        vector<int> suffixMax(n);
        suffixMax[n-1] = a[n-1];
        for(int i = n-2; i>=0; i--) {
            suffixMax[i] = max(suffixMax[i+1], a[i]);
        }

        string ans(n, '0');
        for(int i = 0; i<n; i++) {
            if(a[i] == prefixMin[i] || a[i] == suffixMax[i]) ans[i] = '1';
        }

        cout << ans << endl;
    }
    return 0;
}