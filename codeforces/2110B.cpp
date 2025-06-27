#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int count_0 = 0;
        int count_1 = 0;
        bool possible = false;
        for(int i = 0; i<s.size(); i++) {
            if(s[i] == '(') count_0++;
            else count_1++;
            if(count_0 == count_1 && count_0 < s.size()/2) {
                possible = true;
                break;
            }
        }
        if(possible) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}