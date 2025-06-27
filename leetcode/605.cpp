#include <bits/stdc++.h>
using namespace std;
//LeetCode 605: Can Place Flowers
//Problem link: https://leetcode.com/problems/can-place-flowers/

class Solution {
    public:
        bool canPlaceFlowers(vector<int>& flowerbed, int n) {
            int space=0; int s = flowerbed.size();
            if(s>1) {
            if(flowerbed[0] == 0 && flowerbed[1] ==0) {space++; flowerbed[0] = 1;}
            for(int i = 1; i<(s-1);i++) {
                if(flowerbed[i]==0) {
                    if(flowerbed[i-1]== 0 && flowerbed[i+1]==0) {space++; flowerbed[i] = 1; }
                }
                if(space==n) return true;
            }
            if(flowerbed[s-1]==0 && flowerbed[s-2]==0) space++;
            if(space>=n) return true;
            else return false;
        }
        else {
            int space = 0;
            if(flowerbed[0]==0) space++;
            if(space>=n) return true;
            else return false;
        }
        }
    };