#include <bits/stdc++.h>
using namespace std;

// LeetCode 1004: Max Consecutive Ones III
// Problem link: https://leetcode.com/problems/max-consecutive-ones-iii/

class Solution {
    public:
        int longestOnes(vector<int>& nums, int k) {
            int i = 0; int j = 0;
            for(;j<nums.size(); ++j) {
                if(nums[j]==0) k--;
                if(k<0 && nums[i++] == 0) k++;
            }
            return j-i;
        }
    };