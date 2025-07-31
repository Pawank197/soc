#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // your code here
    long long n;
    cin >> n;

    if (n == 0) {
        cout << 1 << endl;
    } else {
        // 1378 ends with 8, so we need the last digit of 8^n.
        // The cycle of last digits for powers of 8 is: 8,4,2,6.
        int r = n % 4;
        int ans;
        if (r == 1) ans = 8;
        else if (r == 2) ans = 4;
        else if (r == 3) ans = 2;
        else /* r == 0 */ ans = 6;
        cout << ans << endl;
    }
    return 0;
}
