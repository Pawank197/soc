#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // your code here
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<vector <int>> S(n);
        for(int i = 0; i<n; i++) {
            int j; cin >> j;
            vector<int> a(j);
            for(int k = 0; k<j; k++) {
                cin >> a[k];
            }
            S[i] = a;
        }
        // Now we need to find a set which is just smaller than the whole space of the vector S(Second biggest after the space basically).
        
    }
    return 0;
}
