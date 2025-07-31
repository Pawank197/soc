#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // your code here
    int t; cin >> t;
    while(t--){
        int n, k;
        string s;
        cin >> n >> k >> s;

        int m = 0;
        for(char c: s) if(c == '1') m++;

        if (m <= k || 2*k > n) {
            cout << "Alice" << endl;
        } 
        else {
            cout << "Bob" << endl;
        }
    }
    return 0;
}
