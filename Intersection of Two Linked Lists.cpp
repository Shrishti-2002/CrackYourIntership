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
    int len(ListNode*head){
        int count=0;
        while(head!=NULL){
            count++;
            head=head->next;
        }
        return count;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode*ptr1,*ptr2;
        int l1=len(headA);
        int l2=len(headB);
        int c;
        if(l2>l1){
            ptr1=headA;
            ptr2=headB;
            c=l2-l1;
        }
        else{
            ptr2=headA;
            ptr1=headB;
            c=l1-l2;
        }
        while(c>0){
            c--;
            ptr2=ptr2->next;
        }
        while(ptr2!=NULL){
            if(ptr1==ptr2){
                return ptr1;
            }
            ptr2=ptr2->next;
            ptr1=ptr1->next;
        }
        return NULL;
    }
};
