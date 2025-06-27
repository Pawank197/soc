#include <bits/stdc++.h>
using namespace std;

// LeetCode 735: Asteroid Collision
// Problem link: https://leetcode.com/problems/asteroid-collision/

class Solution {
    public:
        vector<int> asteroidCollision(vector<int>& asteroids) {
            stack<int> s;
    
            for(int i=0; i<asteroids.size(); i++) {
                if(asteroids[i]>0) {
                    s.push(asteroids[i]);
                }
                else {
                    while(!s.empty() && s.top()>0 && abs(asteroids[i])>s.top()) {
                        s.pop();
                    }
                    if(!s.empty() && abs(asteroids[i])==s.top()) {
                        s.pop();
                    }
                    else if(s.empty() || s.top()<0) {
                        s.push(asteroids[i]);
                    }
                }
            }
            vector<int> ans;
            while(!s.empty()) {
                ans.push_back(s.top());
                s.pop();
            }
            reverse(ans.begin(), ans.end());
            return ans;
        }
    };