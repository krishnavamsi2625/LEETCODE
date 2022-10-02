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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *temp=new ListNode();
        ListNode *temp1=temp;
        int t=0,r=0;
        while(l1!=NULL || l2!=NULL)
        {   
            if(l1!=NULL && l2!=NULL)
            {
                t=l1->val+l2->val;
                l1=l1->next;
                l2=l2->next;  
            }
            else if(l1==NULL)
            {
                t=l2->val;
                l2=l2->next;
            }
            else if(l2==NULL)
            {
                t=l1->val;
                l1=l1->next;
            }
            t=t+r;
            r=0;
            
            if(t>9)
            {
                t=t%10;
                r=1;
            }
            temp1->val=t;
            if(l1==NULL && l2==NULL)
            {   
                break;
            }
            
            temp1->next=new ListNode;
            temp1=temp1->next;
        }
        if(r==1)
        {
            temp1->next=new ListNode;
            temp1=temp1->next;
            temp1->val=r;
        }
        return temp;
        
    }
};