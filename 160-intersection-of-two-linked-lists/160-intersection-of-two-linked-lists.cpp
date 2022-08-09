/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL){
            return NULL;
        }
        
        ListNode *a = headA;        //a is pointing head of 1st list
        ListNode *b = headB;        //b is pointing head of 1st list
        
        while(a!=b){
            if(a==NULL){        //if a traverse whole list and reach end
                a=headB;        // then transfer to 2nd list
            }
            else{
                a = a->next;    // otherwise traverse
            }
            
            if(b==NULL){
                b=headA;
            }
            else{
                b = b->next;
            }
        }
        return a;   //return a or b because they pointing on same intersecting point
    }
};