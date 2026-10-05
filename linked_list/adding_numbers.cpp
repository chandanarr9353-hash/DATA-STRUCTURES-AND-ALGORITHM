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

Node* adding_numbers(Node* head1,Node* head2){
    Node* dummyhead= new Node(-1,NULL);
    Node* curr=dummyhead;
    Node* temp1=head1;
    Node* temp2=head2;
    int carry=0;
    while(temp1!=NULL || temp2!=NULL){
        int sum=carry;
        if(temp1){
            sum+=temp1->data;
        }
        if(temp2){
            sum+=temp2->data;
        }
        Node* newnode=new Node(sum%10,NULL);
        carry=sum/10;
        curr->next=newnode;
        curr=curr->next;

        if(temp1) temp1=temp1->next;
        if(temp2) temp2=temp2->next;

    }
    if(carry){
        Node* newnode= new Node (carry,NULL);
        curr->next=newnode; 
    }
    return dummyhead->next;

}