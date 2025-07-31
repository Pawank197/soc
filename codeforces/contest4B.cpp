#include <bits/stdc++.h>
using namespace std;
#define ll long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // your code here
    int t; cin >> t;
    while(t--) {
        string x; cin >> x;
        int n = x.size();

        int pos = -1;
        int sum = 0;
        for(int i = n-2; i >=0; i--) {
            sum = (x[i]-'0') + (x[i+1] - '0');
            if(sum >= 10) {
                pos = i;
                break;
            }
        }
        string new_sum = to_string(sum);
        string ans = "";

        if(pos != -1) {
            // This means we found a sum
            // substr(pos, len)
            ans = x.substr(0, pos);
            ans += new_sum;
            ans += x.substr(pos+2);
        }
        else {
            ans  = to_string(sum);
            ans += x.substr(2);
        }
        cout << ans << endl;
    }
    return 0;
}