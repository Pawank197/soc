#include <bits/stdc++.h>
using namespace std;
// LeetCode 1431: Kids With the Greatest Number of Candies
// Problem link: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/

class Solution {
    public:
        vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
            int max = 0; int i = extraCandies;
             for(auto x:candies) {
                if(x>max) max = x;
             } 
             vector<bool> ans;
             for(auto x:candies) {
                if((x+i)>=max) ans.push_back(true);
                else ans.push_back(false);
             }
             return ans;
        }
    };
