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
        ListNode* tail = head;
        ListNode* target = head;
        for(int i=0;i < n-1 ;i++){
            head = head->next;
        }
        if(head->next == nullptr){
            return tail->next;
        }
        head = head->next;
        ListNode* parent = target;
        target = target->next;
        for(;head->next != nullptr; head = head->next, parent = target, target = target->next);
        parent->next = target->next;
        return tail;
    }
};