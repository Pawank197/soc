#include <bits/stdc++.h>
using namespace std;

// LeetCode 443: String Compression
// Problem link: https://leetcode.com/problems/string-compression/

class Solution {
    public:
        int compress(vector<char>& chars) {
            string s = "";
            int n = chars.size();
            for(int i = 0; i<n; i++) {
                int count = 0;
                while(i<(n-1) && chars[i]==chars[i+1]) {
                    i++; count++;
                }
                s += chars[i]; 
                if(count) s += to_string(count+1);
            }
            for(int i = 0; i<s.size(); i++) {
                chars[i] = s[i];
            }
            return s.size();
        }
    };