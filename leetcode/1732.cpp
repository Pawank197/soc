#include <bits/stdc++.h>
using namespace std;

// LeetCode 1732: Find the Highest Altitude
// Problem link: https://leetcode.com/problems/find-the-highest-altitude/

class Solution {
    public:
        int largestAltitude(vector<int>& gain) {
            int maxHeight = 0; int currHeight = 0;
            for(int i = 0; i<gain.size(); i++) {
                currHeight+=gain[i];
                maxHeight = max(maxHeight, currHeight);
            }
            return maxHeight;
        }
    };