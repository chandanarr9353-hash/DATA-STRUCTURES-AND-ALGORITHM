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

Node* find_intersection(Node* head1,Node* head2){
    Node* temp=head1;
    map<Node*,int> mpp;
    while(temp!=NULL){
        mpp[temp]=1;
        temp=temp->next;
    }
    temp=head2;
    while(temp!=NULL){
        if (mpp.find(temp)!=mpp.end()){
            return temp;
        }
        temp=temp->next;
    }
    return NULL;
}