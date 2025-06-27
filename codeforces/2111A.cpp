#include <bits/stdc++.h>
using namespace std;

int main() {
    int k; cin >> k;
    while(k--) {
        long long n; cin >> n;
        int log = (int)log2(n);
        cout << 2*log + 3 << endl;
    }
}