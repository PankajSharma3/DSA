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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
TreeNode* sortedArrayToBST(vector<int> &a,int start,int end){
    if(start>end)
    return NULL;
    int mid = (start+end)/2;
    TreeNode* ans = new TreeNode(a[mid]);
    ans->left = sortedArrayToBST(a,start,mid-1);
    ans->right = sortedArrayToBST(a,mid+1,end);
    return ans;
}
public:
    TreeNode* sortedListToBST(ListNode* head) {
        if(head==NULL)
        return NULL;
        vector<int> a;
        while(head!=NULL){
            a.push_back(head->val);
            head = head->next;
        }
        return sortedArrayToBST(a,0,a.size()-1);
    }
};
