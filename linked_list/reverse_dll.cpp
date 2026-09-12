#include <bits/stdc++.h>
using namespace std;


//reverse a dll only in terms of data
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


Node* reversedll(Node* head){
    Node* temp=head;
    stack <int> st;
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

Node* reverseadll(Node* head){
    Node* last=NULL;
    Node* current=head;
    while(current!=NULL){
        last=current->back;
        current->back=current->next;
        current->next=last;
        current=current->back;
    }
}



























































