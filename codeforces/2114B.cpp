#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; 
    cin >> t;
    while (t--) {
        int n; int k; cin >> n >> k;
        string s;
        cin >> s;
        int count_1 = 0;
        int count_0 = 0;
        for(int i = 0; i<n; i++) {
            if(s[i] == '0') count_0++;
            else count_1++;
        }

        int max_good_pairs = 0;
        if (count_0%2 == 0) max_good_pairs = n/2; 
        else max_good_pairs = (n-2)/2;

        int k_min = n/2 - min(count_0, count_1); //- min(count_0, count_1)%2;
        //k_min /=2;
        //k_min = max_good_pairs - k_min;
        if(k>max_good_pairs || (max_good_pairs-k)%2 != 0 || k < k_min) cout <<"NO" << endl;
        else cout << "YES" << endl;
    }
}