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
    void reorderList(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
       
        ListNode *head1=slow->next;
        slow->next=nullptr;

        ListNode *curr=head1;
        ListNode *prev=nullptr;
        
        while(curr)
        {
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head1=prev;
        ListNode *ans=head->next;
        while(head1)
        {
            ListNode *n1=head->next;
            ListNode *n2=head1->next;

            head->next=head1;
            head1->next=n1;
            
            head=n1;
            head1=n2;

        }

        while(ans)
        {
            cout<<ans->val;
            ans=ans->next;
        }
    }
};
