int height(Node* root)
{
    if(root==NULL)
    return 0;
    int h1 = height(root->left);
    int h2 = height(root->right);
    int ans = max(h1,h2)+1;
    return ans;
}
