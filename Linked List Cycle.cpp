

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
        ListNode*h=head;
        ListNode*t=head;
        if(h!=NULL && h->next!=NULL) h=h->next->next;
        else return false;
        if(t!=NULL) t=t->next;
        else return false;
        while(t!=NULL && h!=NULL ){
            if(h->next==t->next) return true;
            if(h->next!=NULL) h=h->next->next;
            else return false;
            t=t->next;
        }
        return false;
    }
};
