#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> v;
        for(int i = 0; i<n; i++) {
            int x; cin >> x;
            v.push_back(x);
        }

        sort(v.begin(), v.end());

        int p = 0, q = 0;
        for(int i = 0; i<n; i++) {
            if(v[i]%2 == v[n-1]%2) break;
            else p++; 
        }

        for(int i = n-1; i>=0; i--) {
            if(v[i]%2 == v[n-1-i]%2) break;
            else q++;
        }

        cout << min(p, q) << endl;
    }
}