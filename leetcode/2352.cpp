#include <bits/stdc++.h>
using namespace std;

// LeetCode 2352: Equal Row and Column Pairs
// Problem link: https://leetcode.com/problems/equal-row-and-column-pairs/

class Solution {
    public:
        int equalPairs(vector<vector<int>>& grid) {
            int ans = 0;
           map<vector<int>, int> rowMap;
            for(int i = 0; i<grid.size(); i++) {
                rowMap[grid[i]]++;
            }
            for (int i = 0; i < grid[0].size(); i++) {
                vector<int> v;
                    for (int j = 0; j < grid.size(); j++) v.push_back(grid[j][i]);
                ans += rowMap[v];
            }
            return ans;
        }
    };