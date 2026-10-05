#include <iostream>
#include <stack> <int
using namespace std;


struct Node{  //instead of struct use class
    int data;
    Node* next;
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
};

bool checking(Node* head){
    Node* temp=head;
    stack<int> st;

    while(temp!=NULL){
        st.push(temp->data);
        temp=temp->next;
    }

    temp=head;

    while(temp!=NULL){
        int x=st.top();  

            if(x==temp->data){
                st.pop();
                temp=temp->next;
            }
            else{
                return false;
            }   
    }
    return true;
}


//optimal apporach
Node* optimal_apporach(Node* head){
    Node* slow=head;
    Node* fast=head;
    
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;

    }
}