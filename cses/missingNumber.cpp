#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // your code here
    int n; cin >> n;
    vector<int> a(n);
    int XOR = 0;
    for(int i = 0; i < n-1; i++) {
        cin >> a[i];
        XOR  ^= a[i];
        XOR ^= (i+1);
    }
    XOR ^= n;

    cout << XOR << endl;
    return 0;
}


