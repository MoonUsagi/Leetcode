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
    void deleteNode(ListNode* node) 
    {    
        ListNode *taget = node;
        taget->val = taget->next->val;
        taget->next = taget->next->next;   
    }
        
/*        
    struct ListNode 
        {
         int val;
         ListNode *next;
         ListNode *current = first;
         ListNode *previous = 0;
         ListNode(int x) : val(x), next(NULL) {}
        }
                 
        
        while(current != 0 && current -> data !=x )
        {
            previous = current;
            current = current->next;
        }
        if(current == 0)
        {
            
        }
        
        else if(current == first)
        {
            first = current->next;          
            delete current;             
            current = 0;        
        }
        
        else
        {
            previous->next = current->next;
            delete current;
            current = 0;
        }
            
         */

};