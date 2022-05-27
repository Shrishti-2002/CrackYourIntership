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
    int len(ListNode*head){
        int count=0;
        while(head!=NULL){
            head=head->next;
            count++;
        }
        return count;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int l=len(head)-n;
        if(l==0) return head->next;
        int count=1;
        ListNode*temp=head;
        while(count<l){
            temp=temp->next;
            count++;
        }
        if(temp->next==NULL) return head;
        temp->next=temp->next->next;
        return head;
    }
};
