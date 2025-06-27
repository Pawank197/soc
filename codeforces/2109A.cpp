#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  while(n--) {
    int p; cin >> p;
    vector<int> result(p);
    bool allone = true;
    for(auto &x : result) {
      cin >> x;
      if(x==0) allone = false;
    }

    bool ans = allone;
    for(int i = 1; i<p;i++) {
      if(result[i] == result[i-1] && result[i] == 0) {
        ans = true;
        break;
      }
    }

    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
}