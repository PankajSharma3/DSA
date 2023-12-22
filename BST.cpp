#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* insert(Node* root,int value){
    if(root==NULL){
        return new Node(value);
    }
    if(value>root->data){
        root->right = insert(root->right,value);
    }
    else if(value<root->data){
        root->left = insert(root->left,value);
    }
    return root;
}
void preorder(Node* root)
{
    if(root==NULL)
    return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node* root)
{
    if(root==NULL)
    return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
void inorder(Node* root)
{
    if(root==NULL)
    return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main()
{
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    a->left = b;
    a->right = c;
    insert(a,12);
    insert(a,4);
    preorder(a);
    cout<<endl;
}
