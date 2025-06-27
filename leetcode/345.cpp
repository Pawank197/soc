#include <bits/stdc++.h>
using namespace std;
// LeetCode 345: Reverse Vowels of a String
// Problem link: https://leetcode.com/problems/reverse-vowels-of-a-string/

class Solution {
public:
    string reverseVowels(string s) {
        string word = s;
        int start = 0;
        int end = s.length() - 1;
        string vowels = "aeiouAEIOU";
        while (start < end) {
            while (start < end && vowels.find(word[start]) == string::npos) {
                start++;
            }
            while (start < end && vowels.find(word[end]) == string::npos) {
                end--;
            }
            swap(word[start], word[end]);
            start++;
            end--;
        }
        return word;
    }
};