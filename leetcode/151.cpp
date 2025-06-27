#include <bits/stdc++.h>
using namespace std;
// LeetCode 151: Reverse Words in a String
// Problem link: https://leetcode.com/problems/reverse-words-in-a-string/

class Solution {
    public:
        string reverseWords(string s) {
            string ans = "";
            int n = s.size();
            reverse(s.begin(), s.end());
            for(int i = 0; i<n; i++) {
                string word = "";
                while(s[i]!=' ' && i<n) {
                    word += s[i++];
                }
                reverse(word.begin(), word.end());
                if(word.size()>0) ans += word + " ";
            }
            return ans.substr(0, ans.size()-1);
        }
    };