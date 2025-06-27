#include <bits/stdc++.h>
using namespace std;

// LeetCode 2130: Maximum Twin Sum of a Linked List
// Problem link: https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
    public:
        int pairSum(ListNode* head) {
            ListNode* fast = head;
            ListNode* slow = head;
    
            while(fast && fast->next) {
                fast = fast->next->next;
                slow = slow->next;
            }
    
            // Reverse the second half of the list
            ListNode* prev = nullptr;
            ListNode* curr = slow; 
            while (curr) {
                ListNode* nextNode = curr->next;
                curr->next = prev;
                prev = curr;
                curr = nextNode;
            }
    
            int maxVal = 0;
            while (prev) { // `prev` is the head of the reversed half
                maxVal = max(maxVal, head->val + prev->val);
                head = head->next;
                prev = prev->next;
            }
    
            return maxVal;
        }
    };