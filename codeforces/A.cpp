#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // your code here
    int t;
    cin >> t;
    while(t--){
        ll a,b,x,y;
        cin >> a >> b >> x >> y;

        if(a == b){
            cout << 0 << endl;
            continue;
        }

        if(a > b){
            if(a == b+1 && (a % 2 == 1)) cout << y << endl;
            else cout << -1 << endl;
            continue;
        }

        ll delta = b - a;
        if(y >= x) {
            cout << (delta * x) << endl;
        } 
        else {
            ll y_cost = ( (b-1)/2 ) - ( (a-1)/2 );
            ll ans = y_cost*y + (delta - y_cost)*x;
            cout << ans << endl;
        }
    }
    return 0;
}
