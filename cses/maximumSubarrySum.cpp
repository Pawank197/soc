#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // your code here
    int n; cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    ll max_sum = a[0]; ll current_sum = a[0];

    // Idea is that we try to find the maximum subarray sum till the current index and continue this till the end
    // Current sum: The maximum subarry sum that ends at the current index
    // max_sum: After we find the current sum we compare it with the max_sum and update it if current_sum is greater

    for(int i = 1; i < n; i++) {
        current_sum = max(a[i], current_sum + a[i]);
        max_sum = max(max_sum, current_sum);
    }

    cout << max_sum << endl;
    return 0;
}