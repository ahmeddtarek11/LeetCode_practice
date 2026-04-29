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
        map<int,int> st;

        for(int i=0;i<lists.size();i++){
           ListNode* curr = lists[i];
            while(curr != nullptr){
                st[curr->val]++;
                curr = curr->next; 
            }
        }

        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;

        for(auto const& [val , count ] : st){
            for (int i=0;i<count;i++){
                tail->next = new ListNode(val);
                tail = tail->next;
            }
        }

        return dummy->next ;
    }
};