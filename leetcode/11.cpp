#include <bits/stdc++.h>
using namespace std;

// LeetCode 11: Container With Most Water
// Problem link: https://leetcode.com/problems/container-with-most-water/

class Solution {
    public:
        int maxArea(vector<int>& height) {
            int maxA = 0;
            int right = height.size()-1;
            int left = 0;
    
            while (left < right){
                maxA = max(maxA, (right - left)*min(height[left], height[right]));
    
                if(height[left] < height[right]){
                    left++;
                }
                else{
                    right--;
                }
    
            }
            return maxA;
        }
    };