#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// The idea is that if the two arrays are equals, then their fundamental base array from the correspondig magic number should be the same. 
// To achieve this, we will use the following function:
vector<pair<ll, ll>> base_arr(vector<ll> arr, ll m) {
    // We will print out an array of pairs (entry, count) where entry is the base value and count is how many times it will appear in the base array.
    vector<pair<ll, ll>> base_arr_pairs;
    for(int i = 0; i<arr.size(); i++) {
        ll x = arr[i];
        ll count = 1;
        while(x % m == 0) {
            x /= m;
            count *= m;
        }
        // If the last entry in the base array is the same as the current base value,
        // we will just increase the count of the last entry.
        if(!base_arr_pairs.empty() && base_arr_pairs.back().first == x) {
            base_arr_pairs.back().second += count;
        } 
        else {
            // Otherwise, we will add a new entry to the base array.
            base_arr_pairs.emplace_back(x, count);
        }
    }
    return base_arr_pairs;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        ll m; cin >> m;
        vector<ll> a(n);
        for(int i = 0; i<n; i++) cin >> a[i];
        ll k; cin >> k;
        vector<ll> b(k);
        for(int i = 0; i<k; i++) cin >> b[i];
        vector<pair<ll, ll>> a_base = base_arr(a, m);
        vector<pair<ll, ll>> b_base = base_arr(b, m);
        // If the two base arrays are not equal, then the two arrays are not equal.
        if (a_base == b_base) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
