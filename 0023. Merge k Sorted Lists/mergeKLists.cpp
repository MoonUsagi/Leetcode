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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> Lvector;
        for(int i =0;i<lists.size();i++)
        {
            while(lists[i])
            {
                Lvector.push_back( lists[i]->val);
                // 指向下一個值
                lists[i]=lists[i]->next;
            }
        }
        //反向
         sort(rbegin(Lvector),rend(Lvector));
        
        ListNode* res = nullptr;
        for(int i=0;i<Lvector.size();i++)
        {
            res = new ListNode(Lvector[i],res);
        }
        return res;

    }
};