#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class Linkedlist{
    public:
    Node* head;
    Linkedlist(){
        head = nullptr;
    }
    void append(int value){
        Node* new_node = new Node(value);
        if(!head){
            head = new_node;
        }
        else{
            Node* current = head;
            while(current->next!=nullptr){
                current = current->next;
            }
            current->next = new_node;
        }
    }
    void traversal(){
        while(head!=NULL)
        {
            cout<<"Element: "<<head->data<<endl;
            head = head->next;
        }
    }
};
int main()
{
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    Linkedlist b;
    for(int i=0;i<a;i++)
    {
        int c;
        cout<<"Enter the number: ";
        cin>>c;
        b.append(c);
    }
    b.traversal();
}
