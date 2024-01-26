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
void inorder(TreeNode* root,vector<int>& a){
    if(root==NULL)
    return;
    inorder(root->left,a);
    a.push_back(root->val);
    inorder(root->right,a);
}
TreeNode* merge(vector<int> a,int start,int end){
    if(start>end)
    return NULL;
    int mid = (start+end)/2;
    TreeNode* ans = new TreeNode(a[mid]);
    ans->left = merge(a,start,mid-1);
    ans->right = merge(a,mid+1,end);
    return ans;
}
public:
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> a;
        inorder(root,a);
        return merge(a,0,a.size()-1);
    }
};
