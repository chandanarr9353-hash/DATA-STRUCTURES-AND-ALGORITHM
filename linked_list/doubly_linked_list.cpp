#include <iostream>
#include <vector>
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

Node* convertarr2dll (vector<int> &arr ){
    Node* head =new Node(arr[0],NULL,NULL);
    Node* prev=head;
    for (int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i],NULL,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}

//deleting the head
Node* deletehead(Node* head){
    if (head==NULL||head->next==NULL){
        return NULL;
    }
    Node* prev=head;
    head=head->next;
    prev->next=NULL;
    head->back=NULL;
    delete prev;
    return head;
}


//deleting the tail
Node* deletetail(Node* head){
    if (head==NULL||head->next==NULL){
        return NULL;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* prev=temp->back;
    prev->next=NULL;
    temp->back=NULL;
    delete temp;
    return head;
}


//deleting the kth element
Node* deketekthnode(Node* head,int k){
    if(head==NULL){
        return NULL;
    }

    int count=0;
    Node* temp=head;
    while(temp!=NULL){
        count++;
        if(count==k){
            break;
        }
        temp=temp->next;
    }
    Node* prev=temp->back;
    Node* front=temp->next;

    if(prev==NULL & front==NULL){
        return NULL;
    }
    else if(prev==NULL){
        return deletehead(head);
    }
    else if(front==NULL){
        return deletetail(head);
    }

    prev->next=front;
    front->back=prev;

    temp->next=NULL;
    temp->back=NULL;
    delete temp;
    return head;
}

//delete the given node
void deletenode(Node* temp){
    Node* prev=temp->back;
    Node* front=temp->next;

    if(front==NULL){
        prev->next=NULL;
        temp->back=NULL;
        delete temp;
        return;
         
    prev->next=front;
    front->back=prev;

    temp->next=NULL;
    temp->back=NULL;
    free(temp);
     
}


//inserting at head
Node* insertathead(Node* head,int val){
    Node* newnode=new Node(val,head,NULL);
    head->back=newnode;
    return newnode;
}

//inserting at tail
Node* insertattail(Node* head,int val){
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
    }
    prev=temp->back;
    Node* newnode=new Node(val,temp,back);
    temp->back=newnode;
    prev->next=newnode
}
