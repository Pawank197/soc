#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        long long diff = a[1] - a[0];
        bool isAP = true;
        for(int i = 2; i < n; i++){
            if (a[i] - a[i-1] != diff) {
                isAP = false;
                break;
            }
        }
        if (!isAP) {
            cout << "NO\n";
            continue;
        }

        long long num = a[0] - diff;
        long long den = n + 1LL;
        if (num < 0 || num % den != 0) {
            cout << "NO\n";
            continue;
        }
        long long y = num / den;
        long long x = y + diff;
        if (x < 0 || y < 0) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
}