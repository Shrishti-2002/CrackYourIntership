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
    void insert(ListNode*&head,int s){
        ListNode*a=new ListNode(s),*temp=head;
        if(head==NULL){
            head=a;
            return;
        }
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=a;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*ans=NULL,*ptr1=l1,*ptr2=l2;
        int sum,c=0;
        while(l1!=NULL && l2!=NULL){
            sum=l1->val+l2->val+c;
            c=sum/10;
            sum%=10;
            insert(ans,sum);
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=NULL){
            sum=l1->val+c;
            c=sum/10;
            sum%=10;
            insert(ans,sum);
            l1=l1->next;
        }
        while(l2!=NULL){
            sum=l2->val+c;
            c=sum/10;
            sum%=10;
            insert(ans,sum);
            l2=l2->next;
        }
        if(c>0) insert(ans,c);
        return ans;
    }
};
