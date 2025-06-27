#include <bits/stdc++.h>
using namespace std;

// LeetCode 338: Counting Bits
// Problem link: https://leetcode.com/problems/counting-bits/

class Solution {
    public:
        int dp[100001];
        int rec(int i){
            if(i==0){
                return 0;
            }
            if(i==1){
                return 1;
            }
            if(dp[i]!=-1){
                return dp[i];
            }
            int x1=rec(i/2);
            if(i%2!=0){
                x1++;
            }
            return dp[i]=x1;
        }
        vector<int> countBits(int n) {
            vector<int>ans;
            memset(dp,-1,sizeof(dp));
            for(int i=0;i<=n;i++){
                ans.push_back(rec(i));
            }
            return ans;
        }
    };