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
    void reorderList(ListNode* head) {
        if(head -> next == nullptr) {
            return;
        }
        ListNode* slow = head;
        ListNode* fast = head -> next;

        while(fast != nullptr && fast -> next != nullptr) {
            fast = fast -> next -> next;
            slow = slow -> next;
        }

        ListNode* prev = nullptr;
        ListNode* curr = slow -> next;
        slow->next = nullptr;
        while(curr != nullptr) {
            ListNode* next = curr->next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }

        ListNode* l1 = head;
        ListNode* l2 = prev;

        while(l2 != nullptr) {
            ListNode* nextl1 = l1 -> next;
            ListNode* nextl2 = l2 -> next;
            l1 -> next = l2;
            l2 -> next = nextl1;
            l2 = nextl2;
            l1 = nextl1;
        }
    }
};
