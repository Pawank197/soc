#include <bits/stdc++.h>
using namespace std;

// LeetCode 2215: Find the Difference of Two Arrays
// Problem link: https://leetcode.com/problems/find-the-difference-of-two-arrays/

class Solution {
    public:
        vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
           unordered_set<int>set1(nums1.begin() , nums1.end());
            unordered_set<int>set2(nums2.begin() , nums2.end());
    
            vector<int>uniqueele1 , uniqueele2;
     //check first arr ele and store the unique ele
            for(int num  : set1){
                if(set2.find(num) == set2.end())  uniqueele1.push_back(num);
            }
    
            for(int p  : set2){
                if(set1.find(p) == set1.end())  uniqueele2.push_back(p);
            }
    
            return {uniqueele1 , uniqueele2};
        }
    
    };