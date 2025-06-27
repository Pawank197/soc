#include <bits/stdc++.h>
using namespace std;

// LeetCode 1207: Unique Number of Occurrences
// Problem link: https://leetcode.com/problems/unique-number-of-occurrences/

class Solution {
    public:
        bool uniqueOccurrences(vector<int>& arr) {
            unordered_map<int, int> freq;
            for (int num : arr) {
                freq[num]++;
            }
    
            unordered_set<int> s;
    
            for(auto x: freq) {
                if(s.find(x.second)==s.end()) s.insert(x.second);
                else return false;
            }
            
            return true;
        }
    };