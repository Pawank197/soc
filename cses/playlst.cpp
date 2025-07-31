#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // your code here
    int n;  cin >> n;
    vector<int> k(n);
    for(int i = 0; i < n; i++){
        cin >> k[i];
    }
    unordered_map<int,int> last_pos;
    last_pos.reserve(n*2);
    last_pos.max_load_factor(0.5f);

    int left = 0;
    int ans = 0;
    for(int right = 0; right < n; right++){
        int song = k[right];
        auto it = last_pos.find(song);
        if(it != last_pos.end() && it->second >= left) {
            left = it->second + 1;
        }
        last_pos[song] = right;
        ans = max(ans, right - left + 1);
    }

    cout << ans << "\n";
    return 0;
}
