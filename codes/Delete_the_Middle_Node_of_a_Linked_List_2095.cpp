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
    ListNode* deleteMiddle(ListNode* head) 
    {
        map<int,ListNode *>db;
        ListNode *temp=head;
        ListNode *prev=head;
        ListNode *forward=head;
        if(head->next==NULL || head==NULL)
        {
            return NULL;
        }
        while(forward!=NULL && forward->next!=NULL)
        {   prev=temp;
            temp=temp->next;
            forward=forward->next->next;
        }
        prev->next=prev->next->next;
        return head;
        
    }
};