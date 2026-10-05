#include <iostream>
#include <map>
using namespace std;

struct Node{  //instead of struct use class
    int data;
    Node* next;
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
};  


bool loop(Node* head){
    map<Node*,int> mpp;
    Node* temp=head;
    while(temp!=NULL){

        if(mpp.find(temp) != mpp.end()) {
            return true;
        }
        mpp[temp]=1;
        temp=temp->next;
    }
    return false;

}


bool optimal(Node* head){
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return true;
        }

    }
    return false;
}
