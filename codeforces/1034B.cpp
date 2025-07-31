#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // your code here
    int t; cin >> t;
    while(t--) {
        int n, j, k; cin >> n >> j >> k;
        vector<int> a(n);
        for(int i = 0; i<n; cin>>a[i++]);
        if(k>=2) cout << "YES" << endl;
        else {
            int max = *max_element(a.begin(), a.end());
            cout << (a[j-1] == max ? "YES": "NO") << endl;
        }
    }
    return 0;
}