#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // your code here
    int n;  long long x;
    cin >> n >> x;

    vector<pair<long long,int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i + 1; 
    }

    sort(a.begin(), a.end(), [](auto &A, auto &B){
        return A.first < B.first;
    });

    for (int i = 0; i < n; i++) {
        long long need = x - a[i].first;
        int l = i + 1, r = n - 1;
        while (l < r) {
            long long sum2 = a[l].first + a[r].first;
            if (sum2 < need) {
                l++;
            } 
            else if (sum2 > need) {
                r--;
            }
            else {
                cout << a[i].second << " " << a[l].second << " " << a[r].second << endl;
                return 0;
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}
