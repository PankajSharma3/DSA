#include<iostream>
using namespace std;
class stack{
    public:
    int size;
    int *arr;
    int top;
    stack(int size){
        this->size=size;
        arr = new int[size];
        top = -1;
    }
    void push(int data){
        if(size-top>1){
            top++;
            arr[top] = data;
        }
        else{
            cout<<"Stack Overflow";
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack Underflow";
        }
    }
    int peek(){
        if(top>=0 && top<size)
        return arr[top];
        else
        cout<<"Stack is empty" ;
        return -1;
    }
    bool isEmpty(){
        if(top==-1)
        return 1;
        else
        return 0;
    }
};
int main()
{
    stack st(5);
    st.push(12);
    st.push(13);
    st.push(14);
    st.push(15);
    st.pop();
    cout<<st.peek();
    
}
