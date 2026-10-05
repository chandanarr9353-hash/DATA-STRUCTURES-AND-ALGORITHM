#include <iostream>
#include <stack>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1,Node* next1,Node* back1){
        data =data1;
        next=next1;
        back=back1;

    }

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }
}; 

Node* reverse(Node* head){
    Node* temp=head;
    stack<int> st;
    while(temp!=NULL){
        st.push(temp->data);
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL){
        temp->data=st.top();
        st.pop();
        temp=temp->next;
    }
}

Node* optimal(Node* head){
    if(head==NULL || head->next==NULL) return head;
    Node* temp=head;
    Node* prev=NULL;
    Node* front=temp->next;
    while(temp!=NULL){
        temp->next=prev;
        prev=temp;
        temp=front;

        if(front!=NULL){
            front=front->next;
        }
        
    return prev;

}
    
}
