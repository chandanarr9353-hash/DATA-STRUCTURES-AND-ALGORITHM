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



Node* sorting(Node* head){
    int count1=0;
    int count2=0;
    int count0=0;
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==0) count0++;
        else if(temp->data==1) count1++;
        else count2++;
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL){
        if(count0){
            temp->data=0;
            count0--;
        }
        else if(count1){
            temp->data=1;
            count1--;
        }
        else{
            temp->data=2;
            count2--;
        }
        temp=temp->next;
    }
    return head;

}

Node* moreoptimal(Node* head){
    if (head==NULL || head->next==NULL) return head;
    Node* zerohead=new Node(-1,NULL);
    Node* onehead=new Node(-1,NULL);
    Node* twohead=new Node(-1,NULL);

    Node* zero=zerohead;
    Node* one=onehead;
    Node* two=twohead;

    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==0){
            zero->next=temp;
            zero=temp;
        }
        else if(temp->data==1){
            one->next=temp;
            one=temp;
        }
        else{
            two->next=temp;
            two=temp;
        }
        temp=temp->next;
    }

}