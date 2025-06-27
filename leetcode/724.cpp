#include <bits/stdc++.h>
using namespace std;

// LeetCode 724: Find Pivot Index
// Problem link: https://leetcode.com/problems/find-pivot-index/

class Solution {
    public:
        int pivotIndex(vector<int>& nums) {
            int sum;
            for(int i = 0; i<nums.size();i++) {
                sum+=nums[i];
            }
            int sumLeft = 0; int sumRight = sum;
            for(int i=0; i< nums.size(); i++) {
                sumRight-=nums[i];
                if(sumLeft == sumRight) return i;
                sumLeft+=nums[i];
            }
            return -1;
        }
    };