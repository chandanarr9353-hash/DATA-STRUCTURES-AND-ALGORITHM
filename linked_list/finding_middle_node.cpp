#include <iostream>
using namespace std;

struct Node{  //instead of struct use class
    int data;
    Node* next;
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
};  

Node* finding_middle(Node* head){
    int count=0;
    Node* temp=head;

    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    temp=head;
    int middle_node=(count/2)+1;

    while(middle_node!=1){
        middle_node--;
        temp=temp->next;
    }
    return temp;
}


//optimal approach

Node* optimal_apporach(Node* head){
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;

    }
    return slow;
}

