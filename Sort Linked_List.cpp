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
        vector<int> a;
        while(head!=NULL){
            a.push_back(head->val);
            head = head->next;
        }
        sort(a.begin(),a.end());
        ListNode* ans = nullptr;
        ListNode* tail = nullptr;
        for(int i=0;i<a.size();i++)
        {
            if(i==0){
                ans = new ListNode(a[i]);
                tail = ans;
            }
            else{
                tail->next = new ListNode(a[i]);
                tail = tail->next;
            }
        }
        return ans;
    }
};
