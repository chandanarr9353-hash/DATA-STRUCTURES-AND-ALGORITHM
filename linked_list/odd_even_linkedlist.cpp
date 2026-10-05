#include <iostream>
#include <vector>

using namespace std;

struct Node{  //instead of struct use class
    int data;
    Node* next;
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
};  


Node* odd_even(Node* head){
    vector <int> arr;
    Node* temp=head;
    while(temp!=NULL && temp->next!=NULL){
        arr.push_back(temp->data);
        temp=temp->next->next;
    }
    if(temp)arr.push_back(temp->data);
    temp=head->next;
    while(temp!=NULL && temp->next!=NULL){
        arr.push_back(temp->data);
        temp=temp->next;
    }
    if(temp)arr.push_back(temp->data);

    int i=0;
    temp=head;
    while(temp!=NULL){
        temp->data=arr[i];
        i++;
        temp=temp->next;
    }
    return head;
}