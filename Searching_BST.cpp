// To return bool
bool search(Node* root, int x) {
    if(root==NULL)
    return 0;
    if(root->data == x)
    return 1;
    if(x>root->data)
    return search(root->right,x);
    return search(root->left,x);
}


//To return node
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL || root->val == val)
        return root;
        if(val>root->val)
        return searchBST(root->right,val);
        return searchBST(root->left,val);
    }
};
