//Reverse Linked List
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution 
{
public:
    
    ListNode* Reverse(ListNode* head) 
    {
        ListNode        *current = head, 
                        *previous = nullptr,
                        *next = nullptr;
        
        while(current != nullptr) {
            next = current->next;
            current->next = previous;
            previous = current;
            current = next;
        }
        
        head = previous;
        return head;
    }
    
    ListNode* reverseList(ListNode* head) 
    {
        return Reverse(head);
    }
};
