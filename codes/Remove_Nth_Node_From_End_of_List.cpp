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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size=0;
        ListNode * temp=head;
        while(temp!=NULL)
        {
            size++;
            temp=temp->next;
        }
        int i=1;
        n=size-n;
        temp=head;
        while(i<n)
        {
            temp=temp->next;
            i++;
        }
        if(n!=0)
        {
            ListNode  * del=temp->next;
            temp->next=del->next;
            delete(del);
        }
        else
        {
            head=head->next;
        }
        
        return head;
        
    }
};