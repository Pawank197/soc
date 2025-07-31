#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // your code here
    int t; cin >> t;
    while(t--) {
        int n, m, k; cin >> n >> m >> k;
        string a, b;
        cin >> a >> b;

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int i = 0, j = 0;
        string c = "";

        int a_ops = 0, b_ops = 0;

        while(i<n && j<m) {
            if(a_ops == k) {
                c += b[j++];
                b_ops++;
                a_ops = 0;
            }
            else if(b_ops == k) {
                c += a[i++];
                a_ops++;
                b_ops = 0;
            }
            else if(a[i] < b[j]) {
                c += a[i++];
                a_ops++;
                b_ops = 0;
            } else {
                c += b[j++];
                b_ops++;
                a_ops = 0;
            }
        }
        cout << c << endl;
    }
    return 0;
}