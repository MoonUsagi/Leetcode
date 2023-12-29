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
    ListNode* partition(ListNode* head, int x) {
        // 頭:初始值為零，存小於x
        ListNode* less = new ListNode(0);  
        // 頭:初始值為零，存大於x
        ListNode* greater = new ListNode(0);
        // 身體:存小的
        ListNode* lesslink = less;
        // 身體:存大的
        ListNode* greaterlink = greater;

        while(head != nullptr)
        {
            // 小於的存在lesslink 
            // 大於的存在greater
            if(head->val <x) 
            {
                lesslink->next = head;
                lesslink = lesslink->next;
            }
            else
            {
                greaterlink->next = head;
                greaterlink = greaterlink->next;
            }
            head = head->next;
        }
        // 重點
        lesslink->next = greater->next;
        greaterlink->next = nullptr;

        return less->next;
    }
};