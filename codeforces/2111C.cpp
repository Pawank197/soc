#include <bits/stdc++.h>
using namespace std;

int main() {
    int k; cin >> k;
    while(k--) {
        int n; cin >> n;
        vector<long long> v;
        for(int i = 0; i<n; i++) {
            long long x; cin >> x;
            v.push_back(x);
        }
        int rep_times = 1;
        long long rep_num = v[0];
        long long min_cost = LLONG_MAX;
        for(int i = 1; i<n; i++) {
            if(v[i] != rep_num) {
                rep_num = v[i];
                rep_times = 1;
            }
            else rep_times++;
            long long cost = rep_num*(n-rep_times);
            min_cost = min(cost, min_cost);
        }
        if(rep_times == n) cout << "0" << endl;
        else cout << min_cost << endl;
    }
}