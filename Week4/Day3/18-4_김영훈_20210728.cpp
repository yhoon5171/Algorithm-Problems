//https://leetcode.com/problems/linked-list-cycle/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *cur = NULL;
        for (cur = head; cur != NULL; cur = cur -> next){
            if (cur -> val != INT_MAX)
                cur -> val = INT_MAX;
            else
                return true;
        }
        return false;
    }
};