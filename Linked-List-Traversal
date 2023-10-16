#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
int main()
{
    Node* head = new Node(12);
    Node* second = new Node(45);
    head->next = second;
    while(head!=NULL)
    {
        cout<<"Element: "<<head->data<<endl;
        head = head->next;
    }
}
