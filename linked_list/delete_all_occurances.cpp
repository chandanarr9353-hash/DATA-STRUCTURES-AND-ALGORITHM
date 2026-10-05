#include <iostream>
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

Node* delete_occurances(Node* head,int key){
    Node* temp=head;
    Node* prevnode=temp->back;
    Node* nextnode=temp->next;
    while(temp!=NULL){
        
        if(temp->data==key){   

            if(temp==head){
                nextnode->back=NULL;
                head=nextnode;
            }     
            if(temp->next==NULL){
                prevnode->next=NULL;
                delete temp;
                return head;
            }
             prevnode->next=nextnode;
             nextnode->back=prevnode;
             delete temp;
        }
        temp=nextnode;
    }
    return head;
}