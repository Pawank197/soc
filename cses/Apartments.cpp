#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // your code here
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);
    for(int i = 0; i<n; i++) cin >> a[i];
    for(int i = 0; i<m; i++) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int i = 0, j = 0;
    int ans = 0;

    while(i < n && j < m) {
        if(abs(a[i] - b[j]/*lol*/) <= k) {
            ans++; i++; j++;
        }

        else if(a[i] - b[j] > k) {
            j++;
        }

        else i++;
    }

    cout << ans << endl;
}
