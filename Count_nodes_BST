//count number of nodes in BST
class Solution {
void preorder(TreeNode* root,int &count){
    if(root==NULL)
    return;
    count++;
    preorder(root->left,count);
    preorder(root->right,count);
}
public:
    int countNodes(TreeNode* root) {
        int count = 0;
        preorder(root,count);
        return count;
    }
};
