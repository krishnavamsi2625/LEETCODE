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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode * ans=NULL,*head=NULL;
        ListNode *temp1=list1;
        ListNode *temp2=list2;
        int data;
        while(temp1!=NULL && temp2!=NULL)
        {
            if(temp1->val<temp2->val)
            {   data=temp1->val;
                temp1=temp1->next;
            }
            else
            {
                data=temp2->val;
                temp2=temp2->next;
            }
            if(ans==NULL)
            {
                ans=new ListNode(data);
                ans->val=data;
                head=ans;
                
            }
            else
            {
                ans->next=new ListNode(data);
                ans=ans->next;
            }
        }
        while(temp1!=NULL)
        {   data=temp1->val;
            if(ans==NULL)
            {
                ans=new ListNode(data);
                ans->val=data;
                head=ans;
            }
            else
            {
                ans->next=new ListNode(data);
                ans=ans->next;
            }
            temp1=temp1->next;
        }
        while(temp2!=NULL)
        {   data=temp2->val;
            if(ans==NULL)
            {
                ans=new ListNode(data);
                ans->val=data;
                head=ans;
                
            }
            else
            {
                ans->next=new ListNode(data);
                ans=ans->next;
            }
            temp2=temp2->next;
        }

        return head;
        
    }
};