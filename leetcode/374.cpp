#include <bits/stdc++.h>
using namespace std;

// LeetCode 374: Guess Number Higher or Lower
// Problem link: https://leetcode.com/problems/guess-number-higher-or-lower/

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */
// This is just a placeholder for the guess function to remove the compilation error. Compilers be complaining always.
 int guess(int num);

 class Solution {
    public:
        int guessNumber(int n) {
            int l=0,r=n;
    
            while(l<=r){
                // Mid is our guessed Number.
                int mid=l+(r-l)/2;
    
                if(guess(mid)==0) return mid;
                else if(guess(mid)==1) l=mid+1;
                else r=mid-1;
            }
            return -1;
        }
    };

// The guess function is defined in leetcode
