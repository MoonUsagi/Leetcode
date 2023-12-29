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
    ListNode* sortList(ListNode* head) {
        // 判斷邊界：空鏈表或是已經有序
        if (!head || !head->next) 
        {
            return head;
        }
        // 找到中點．並分隔成兩個子鏈
        ListNode* mid = findMiddle(head);
        ListNode* secondHalf = mid->next;
        mid->next = nullptr;

        // 遞迴對兩個子鏈排序
        ListNode* sortedFirstHalf = sortList(head);
        ListNode* sortedSecondHalf = sortList(secondHalf);

        // 合併兩個有序鏈表
        return merge(sortedFirstHalf, sortedSecondHalf);
    }

private:
    ListNode* findMiddle(ListNode* head) 
    {
        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast && fast->next) 
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    ListNode* merge(ListNode* list1, ListNode* list2) 
    {
        ListNode dummy(0);
        ListNode* current = &dummy;

        while (list1 && list2) 
        {
            if (list1->val < list2->val) 
            {
                current->next = list1;
                list1 = list1->next;
            } 
            else 
            {
                current->next = list2;
                list2 = list2->next;
            }
            current = current->next;
        }
        current->next = list1 ? list1 : list2;
        return dummy.next;
    }
};