#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // your code here
    long long n; cin >> n;
    while(n != 1) {
        if(n%2 == 0) {
            cout << n << " ";
            n /= 2;
        }
        else {
            cout << n << " ";
            n = 3 * n + 1;
        }
    }
    cout << n << endl;
    return 0;
}