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
    bool hasCycle(ListNode* head) {
        map<ListNode*,int> cycle;
        ListNode* tail=head;
        while(tail!=nullptr)
        {
            cycle[tail]++;
            if(cycle[tail]!=1)
            {
                return true;
            }
            tail=tail->next;
        }
        return false; 
    }
};
