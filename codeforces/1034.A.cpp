#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // your code here
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        if(n<4) cout << "ALICE" << endl;
        else {
            if(n%4 == 0) cout << "BOB" << endl;
            else cout << "ALICE" << endl;
        }
    }
}