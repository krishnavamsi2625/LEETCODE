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
    ListNode* oddEvenList(ListNode* head) {
        ListNode *ans=NULL,*temp=head,*prev;
        while(temp!=NULL)
        {   cout<<temp->val<<endl;
            ListNode *temp1=new ListNode(temp->val);
            if(ans==NULL)
            {
                ans=temp1;
                prev=ans;
            }
            else
            {
                prev->next=temp1;
                prev=temp1;
            }
            if(temp->next!=NULL)
            {
                temp=temp->next->next;
            }
            else
            {
                break;
            }

        }
        if(head==NULL)
        {
            return NULL;
        }
        temp=head->next;
        while(temp!=NULL)
        {   
            cout<<temp->val<<endl;
            ListNode *temp1=new ListNode(temp->val);
            prev->next=temp1;
            prev=temp1;
            
            if(temp->next!=NULL)
            {
                temp=temp->next->next;
            }
            else
            {
                break;
            }

        }
        return ans;
    }
};