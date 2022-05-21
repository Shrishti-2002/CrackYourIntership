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
    ListNode* removeElements(ListNode* head, int val) {
        
        ListNode*curr=head;
        ListNode*prev=head;
        while(curr!=NULL && curr->val==val){
            curr=curr->next;
            head=head->next;
        }
        if(head==NULL) return head;
        prev=curr;
        curr=curr->next;
        while(curr!=NULL){
            if(curr->val==val){
                prev->next=curr->next;
                curr=curr->next;
            }
            else{
                curr=curr->next;
                prev=prev->next;
            }
        }
        return head;
    }
};
