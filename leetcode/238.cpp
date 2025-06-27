#include <bits/stdc++.h>
using namespace std;
// LeetCode 238: Product of Array Except Self
// Problem link: https://leetcode.com/problems/product-of-array-except-self/

class Solution {
    public:
        vector<int> productExceptSelf(vector<int>& nums) {
            int n = nums.size();
            vector<int> prodsPrefix = {nums[0]};
            vector<int> prodsSuffix = {nums[n-1]};
            vector<int> ans;
            for(int i = 1; i < n; i++) {
                prodsPrefix.push_back(prodsPrefix[i-1]*nums[i]);
                prodsSuffix.push_back(prodsSuffix[i-1]*nums[n-i-1]);
            }
            ans.push_back(1*prodsSuffix[n-2]);
            for(int i = 1; i<n-1; i++) {
                ans.push_back(prodsPrefix[i-1]*prodsSuffix[n-2-i]);
            }
            ans.push_back(prodsPrefix[n-2]*1);
            return ans;
        }
    };
    
    