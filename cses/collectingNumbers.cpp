#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // your code here
    int n;
    cin >> n;
    vector<int> pos(n+1);
    for(int i = 1, x; i <= n; i++){
        cin >> x;
        pos[x] = i;
    }

    int rounds = 1;
    for(int i = 1; i < n; i++){
        if(pos[i] > pos[i+1]) 
            rounds++;
    }

    cout << rounds << "\n";
    return 0;
}
