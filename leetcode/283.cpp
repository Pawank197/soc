#include <bits/stdc++.h>
using namespace std;

// LeetCode 283: Move Zeroes
// Problem link: https://leetcode.com/problems/move-zeroes/

class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
            int j = 0;
            for(int i = 0; i<nums.size(); i++) {
                if(nums[i]!=0) {
                    nums[j++] = nums[i];
                }
            }
            for(;j<nums.size(); nums[j++] = 0);
        }
    };