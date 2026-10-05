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
}
   return prev;
 
}


Node* add(Node* heaad){
    heaad=optimal(heaad);
    int sum=0;
    int carry=1;
    Node* teemp=heaad;
    
    while(teemp!=NULL){
        sum=carry+teemp->data;
        teemp->data=sum%10;
        carry=sum/10;
        

        if(teemp->next==NULL && carry!=0){
            
                Node* newone=new Node(carry,NULL);
                teemp->next=newone;
                carry=0;

            }
        
        teemp=teemp->next;
    }    
    heaad=optimal(heaad);
    return heaad;
}


