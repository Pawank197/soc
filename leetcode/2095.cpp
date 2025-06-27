#include <bits/stdc++.h>
using namespace std;

// LeetCode 2095: Delete the Middle Node of a Linked List
// Problem link: https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
        ListNode* deleteMiddle(ListNode* head) {
            if(head==nullptr) return nullptr;
            ListNode* prev = new ListNode(0);
            prev->next = head;
            ListNode* slow = prev;
            ListNode* fast = head;
            while(fast!=nullptr && fast->next != nullptr) {
                slow = slow->next;
                fast = fast->next->next;
            }
            slow->next = slow->next->next;
            return prev->next;
        }
    };