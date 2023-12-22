#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

int main() {
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* fourth = new Node();

    head->data = 12;
    head->next = second;
    second->data = 14;
    second->next = third;
    third->data = 16;
    third->next = fourth;
    fourth->data = 18;
    fourth->next = nullptr;

    Node* p = head;
    Node* q = head->next;

    int index;
    cout << "Enter the index: ";
    cin >> index;

    for (int i = 0; i < index - 1; i++) {
        p = p->next;
        q = q->next;
    }

    p->next = q->next;
    delete q;

    while (head != nullptr) {
        cout << "Element: " << head->data << endl;
        head = head->next;
    }

    return 0;
}
