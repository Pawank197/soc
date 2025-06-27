#include <bits/stdc++.h>
using namespace std;

// LeetCode 643: Maximum Average Subarray I
// Problem link: https://leetcode.com/problems/maximum-average-subarray-i/

class Solution {
    public:
        double findMaxAverage(vector<int>& nums, int k) {
            int start = k-1;
            int end = 0;
            double maxAvg = 0;
            double avg = 0;
            for(int i = 0; i<k; i++) {
                avg+=nums[i];
            }
    
            maxAvg = avg;
    
            while(start<(nums.size()-1)) {
                avg -= nums[end];
                end++; start++;
                avg += nums[start];
                maxAvg = max(maxAvg, avg);
            }
            return maxAvg/k;
        }
    };

// lol 133.7 mb of memory