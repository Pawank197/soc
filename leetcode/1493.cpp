#include <bits/stdc++.h>
using namespace std;

// LeetCode 1493: Longest Subarray of 1's After Deleting One Element
// Problem link: https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/

class Solution {
    public:
        int longestSubarray(vector<int>& nums) {
            int i = 0; int j = 0; int k = 1;
            for(; j<nums.size(); ++j) {
                if(nums[j]==0) k--;
                if(k<0 && nums[i++] == 0) k++;
            }
            return j-i-1;
        }
    };