#include <bits/stdc++.h>
using namespace std;

// LeetCode 1657: Determine if Two Strings Are Close
// Problem link: https://leetcode.com/problems/determine-if-two-strings-are-close/

class Solution {
    public:
        bool closeStrings(string word1, string word2) {
           vector<int>h1(26,0),h2(26,0);
           for(auto it : word1)
           {
            h1[it-'a']++;
           }
           for(auto it : word2)
           {
            h2[it-'a']++;
           }
           for(int i=0 ;i<26 ;i++)
           {
            if((h2[i]>0 && h1[i]==0) || (h1[i]>0 && h2[i]==0)) return false;
           }
           sort(h1.begin(),h1.end());
           sort(h2.begin(),h2.end());
           return h1==h2;
        }
    };