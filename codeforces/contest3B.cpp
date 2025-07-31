#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // your code here
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<vector<int>> a(n, vector<int>(n));
        int l=1; int r=n*n; int t=0;      
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (t == 1) {
                    a[i][j] = l++;
                } 
                else {
                    a[i][j] = r--;
                }
                if (t == 0) t = 1; 
                else t = 0;
            }
            if (i % 2 == 1) {
                for (int j = 0; j < n / 2; ++j) {
                    int temp = a[i][j];
                    a[i][j] = a[i][n - j - 1];
                    a[i][n - j - 1] = temp;
                }
            }
        }
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
