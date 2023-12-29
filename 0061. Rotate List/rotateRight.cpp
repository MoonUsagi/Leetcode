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
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(!head || k ==0)
        {
            return head;  //list為空或是k為零，直接吐list
        } 

        // 第一步:計算實際步數
        int length = 1;
        ListNode* tail = head;

        while(tail -> next)
        {
            tail = tail -> next;
            length++;
        }    

        k = k % length;

        if (k == 0) {
            return head; // 如果k是鏈表長度的倍數，則無需旋轉
        }

        // 第二步:找到新的尾節點與新的頭節點位置
        ListNode* new_tail = head;
        
        for(int i =0; i<length-k-1; i++)
        {
            new_tail = new_tail->next;
        }

        ListNode* new_head = new_tail->next;

        // 步驟3：斷開原始鏈表，將新的尾節點的next指向nullptr，同時將原始尾節點連接到原始頭節點
        new_tail->next = nullptr;
        tail->next = head; // 將原始尾節點連接到原始頭節點

        // 步驟4：更新新鏈表的頭節點
        //head = new_head;

        return new_head; // 返回新的旋轉後的鏈表

    }
};