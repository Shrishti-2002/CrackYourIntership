

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
    int l(ListNode*head){
        int count=0;
        while(head!=NULL){
            head=head->next;
            count++;
        }
        return count;
        
    }
    ListNode* middleNode(ListNode* head) {
        ListNode*temp=head;
        float len=l(head);
        len=ceil((len-1)/2);
        int count=0;
        while(count<len){
            temp=temp->next;
            count++;
        }
        return temp;
    }
};
