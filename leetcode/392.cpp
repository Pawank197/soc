#include <bits/stdc++.h>
using namespace std;

// LeetCode 392: Is Subsequence
// Problem link: https://leetcode.com/problems/is-subsequence/

class Solution {
    public:
        bool isSubsequence(string s, string t) {
            int j = 0;
            for(int i = 0; i<t.size(); i++) {
                if(t[i] == s[j]) j++;
            }
            if(j==s.size()) return true;
            else return false;
        }
    };