/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0);
        dummy -> next = head;
        ListNode* deleteNode = dummy;
        ListNode* curr = dummy;
        while(n > 0) {
            curr = curr -> next;
            n--;
        }
        ListNode* prev = nullptr;
        while(curr != nullptr) {
            curr = curr -> next;
            prev = deleteNode;
            deleteNode = deleteNode -> next;
        }

        prev -> next = deleteNode -> next;
        delete deleteNode;
        return dummy -> next;
    }
};
