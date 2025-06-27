#include <bits/stdc++.h>
using namespace std;

// LeetCode 136: Single Number
// Problem link: https://leetcode.com/problems/single-number/

class Solution {
    public:
        int singleNumber(vector<int>& nums) {
            int result = 0;
            for (int num : nums) {
                result ^= num;
            }
            return result;
        }
    };