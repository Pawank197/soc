#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    ll sum = 0;
    ll expected_sum = 1;
    for(int i = 0; i < n; i++) {
        if(a[i] > expected_sum) {
            break; // We found a coin that is greater than the expected sum
        }
        sum += a[i];
        expected_sum = sum + 1; // Update the expected sum to the next value
    }
    cout << expected_sum << endl; // The first missing coin sum
}