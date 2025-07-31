#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;  cin >> n;
    for(int k = 1; k <= n; k++){
        ll cells = 1LL*k*k;
        ll total = cells * (cells - 1) / 2;
        ll attacks = 0;
        if(k >= 3){
            attacks = 4LL * (k - 1) * (k - 2);
        }

        cout << (total - attacks) << endl;
    }
    return 0;
}
