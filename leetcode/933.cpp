#include <bits/stdc++.h>
using namespace std;

// LeetCode 933: Number of Recent Calls
// Problem link: https://leetcode.com/problems/number-of-recent-calls/

class RecentCounter {
    public:
        RecentCounter() {
            
        }
        queue<int> q;
        int ping(int t) {
            q.push(t);
    
            while(q.front()<t-3000) {
                q.pop();
            }
            return q.size();
        }
    };