/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int k; cin >> k;
    int f_1 = 1, f_2 = 2;
    unordered_map<int, int> map;
    map[1] = 1; map[2] = 2;
    for(int i = 3; i<11; i++) {
        int x = f_1 + f_2;
        map[i] = x;
        f_1 = f_2;
        f_2 = x;
    }
    while(k--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> v;
        string ans = "";
        string s1 = "1";
        string s0 = "0";
        for(int i = 0; i<m; i++) {
            int w, l, h; cin >> w >> l >> h;
            if(((h>= (map[n] + map[n-1])) && (w>=map[n]) && (l>=map[n])) || ((l>= (map[n] + map[n-1])) && (w>=map[n]) && (h>=map[n])) || ((w>= (map[n] + map[n-1])) && (l>=map[n]) && (h>=map[n]))) {ans = ans + s1;}
            else ans = ans + s0;
        }
        
        cout << ans << endl;
        
        
    }
}