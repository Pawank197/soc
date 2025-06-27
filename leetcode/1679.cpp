#include <bits/stdc++.h>
using namespace std;

// LeetCOde 1679: Max number of K-Sum Pairs
// Problem link: https://leetcode.com/problems/max-number-of-k-sum-pairs/

class Solution {
    public:
        int maxOperations(vector<int>& nums, int k) {
            sort(nums.begin(), nums.end());
            int l = 0; int r = nums.size()-1;
            int opers = 0;
            while(l<r) {
                if(nums[l] + nums[r] == k) {
                    opers++; l++; r--;
                }
                else if(nums[l] +nums[r]>k) {
                    r--;
                }
                else l++;
            }
            return opers;
        }
    };