#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);
    // we'll keep a vector of char and index
    vector<pair<char,int>> curr(s.size());
    for(int i = 0; i < (int)s.size(); i++)
        curr.push_back({s[i], i+1});

    vector<vector<int>> operations;
    while (true) {
        vector<int> open_bracket, close_bracket;
        int m = curr.size();
        for(int i = 0; i < m; i++){
            if(curr[i].first == '(') open_bracket.push_back(i);
            else if(curr[i].first == ')') close_bracket.push_back(i);
        }

        // The idea is to pair the first open bracket with the last close bracket
        int i = 0, j = (int)close_bracket.size() - 1;
        vector<int> picked;
        while(i < (int)open_bracket.size() && j >= 0 && open_bracket[i] < close_bracket[j]) {\
            picked.push_back(curr[open_bracket[i]].second);
            picked.push_back(curr[close_bracket[j]].second);
            i++; 
            j--;
        }

        if (picked.empty()) 
            break;

        // sort the original indices ascending for output
        sort(picked.begin(), picked.end());
        operations.push_back(picked);

        int cnt = i;  
        vector<bool> removed(m, false);
        for (int t = 0; t < cnt; t++) {
            removed[open_bracket[t]] = true;
            removed[close_bracket[close_bracket.size() - 1 - t]] = true;
        }
        
        vector<pair<char,int>> next(m - 2*cnt);
        for (int k = 0; k < m; k++) {
            if (!removed[k]) next.push_back(curr[k]);
        }
        curr.swap(next);
    }

    // print out the operations
    cout << operations.size() << endl;
    for(auto &v : operations){
        cout << v.size() << endl;
        for(int idx : v)
            cout << idx << " ";
        cout << endl;
    }
    return 0;
}
