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


int length(Node* head){
    int timer=1;
    Node* temp=head;
    map<Node*,int> mpp;
    while(temp!=NULL){
        if(mpp.find(temp) != mpp.end()) {
            int value=mpp[temp];
            return timer-value;
        }
        mpp[temp]=timer;
        timer++;
        temp=temp->next;
    }
    return 0;
}

