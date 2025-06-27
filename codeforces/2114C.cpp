#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n;  cin >> n;
        vector<long long> vec(n);
        for (int i = 0; i<n; i++) {
            cin >> vec[i];
        }
        long long last = LLONG_MIN / 2;
        int count = 0;
        for (auto x : vec) {
            if (x >= last + 2) {
                count++;
                last = x;
            }
        }
        cout << count << endl;
    }

}