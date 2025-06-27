#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        cout << 1;
        if(n >= 3){
            cout << " " << 3;
            for(int x = 4; x <= n; x++){
                cout << " " << x;
            }
            cout << " " << 2 << endl;
        }
    }
}