#include <bits/stdc++.h>
using namespace std;

// LeetCode 649: Dota2 Senate
// Problem link: https://leetcode.com/problems/dota2-senate/

class Solution {
    public:
        string predictPartyVictory(string senate) {
            int Rnum = 0, Dnum = 0;
            for(int i=0; i<senate.size(); i++) {
                if(senate[i]=='R') {
                    if(Dnum>Rnum) {
                        Dnum--; senate.push_back('D');
                    }
                    else Rnum++;
                }
    
                if(senate[i]=='D') {
                    if(Rnum>Dnum) {
                        Rnum--; senate.push_back('R');
                    }
                    else Dnum++;
                }
            }
            if(Rnum==0) return "Dire";
            else return "Radiant";
       }
    };