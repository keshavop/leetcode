/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/*
If head or head->next  is NULL then return false because they are not equal

Make a fast and slow pointer pointing to head

While fast next and fast next next != NULL
Move fast to 2 position and slow to 1 pos

If slow == fast that means loop is present
*/

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)
            return false;
        
        ListNode * fast = head;
        ListNode * slow = head;
        
        while(fast->next != NULL && fast->next->next != NULL){
            fast = fast -> next -> next;
            slow = slow -> next;
            if(fast == slow){
                return true;
            }
        }
    return false;
    }
};