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
    ListNode* reverseList(ListNode* head) {
        // 記得保護式
        if(head ==NULL)
        {
            return NULL;
        }
        //空的
        ListNode *preN = NULL;
        //現在的
        ListNode *nowN = head;
        //吃下一個
        //ListNode *nextN = head->next;
        
        while(head != NULL)
        {
            nowN = head -> next;
            head -> next = preN;
            preN = head;
            head = nowN;
            
            //nowN -> next = preN;
            //preN = nowN;
            //nowN = nextN;
            //nextN = nowN -> next;
        }
        //nowN ->next = preN;
        return preN;
    }
};