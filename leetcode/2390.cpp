#include <bits/stdc++.h>
using namespace std;

// LeetCode 2390: Removing Stars From a String
// Problem link: https://leetcode.com/problems/removing-stars-from-a-string/

class Solution {
    public:
        string removeStars(string s) {
            int S=0;
            for(int i = 0; i<s.size(); i++) {
                if(s[i]=='*') S--;
                else s[S++]=s[i];
            }
            return s.substr(0, S);
        }
    };