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



Node* delete(Node* head,int k){
    Node* temp=head;
    Node* prev=NULL;
    if(head=NULL){
        return head;
    }
    int node=1;
    int count=1;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    temp=head;
    if(k==count){
        head=head->next;     
        delete temp;
        return head;
    }
    while(node!=count-k+1){  
        if(node==count-k){
            temp=temp->next->next;
            delete prev->next->next;
            break;
        }
        temp=temp->next;
        node++;
    }


}