#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // your code here
    vector<ll> F(46);
    F[0] = 1;
    F[1] = 1;
    for(int i = 2; i<46; i++) {
        F[i] = F[i-1] + F[i-2];
    }
    cout << "Finished" << endl;
    int t; cin >> t;
    while(t--) {
        int n, x, y; cin >> n >> x >> y;
    }
    return 0;
}