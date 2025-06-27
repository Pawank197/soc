#include <bits/stdc++.h>
using namespace std;

//LeetCode 1456: Maximum Number of Vowels in a Substring of Given Length
//Problem link: https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/

class Solution {
    public:
        int maxVowels(string s, int k) {
            int maxCount = 0, currCount = 0;
            for(int  i = 0; i < s.size(); i++) {
                if(s[i]=='a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                    currCount++;
                }
    
                if(i>=k && (s[i-k]=='a' || s[i-k] == 'e' || s[i-k] == 'i' || s[i-k] == 'o' || s[i-k] == 'u')) {
                    currCount--;
                }
                maxCount = max(maxCount, currCount);
            }
            return maxCount;
        }
    };