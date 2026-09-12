//linked list helps to increase or decrease  the size of an array
//linked liat are not in contigous location unlike array
//starting pt of the linked list is called head of the linked list
//at each node it stores element and address pointer of the next element. and at the end node we store null instead of next aaddress.
//it is used in stack and queue.
//in real life we always use it in browser

//memory space of the node
//if it is 32 bit system, int stores 4 byte; and ptr stores 4 bytes(8bytes)
//if it is 64 bit system, int stores 4 bytes;and ptr store 8 bytes(12bytes)

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

//to convert array to a linked list
Node* convertarr2ll(vector <int> &arrr){
    Node* head=new Node(arrr[0],nullptr);
    Node* mover=head;
    for (int i=1;i<arrr.size();i++){
        Node* temp=new Node(arrr[i],nullptr);
        mover->next=temp; 
        mover=temp;
    }   
    return head;   
}

//to find length of the linkedlist
int lengthofll(Node* head){
    int count=0;
    Node*temp=head;
    while(temp){
        cout<<temp->data<<" ";       
        temp=temp->next;
        count++;
    }
    cout<<endl;
    return count;
}

//to sesrch a element in a linked list
int checkifpresent(Node* head,int val){
    Node* temp=head;
    while(temp){
        if(temp->data==val){
            return 1;
        }
        temp=temp->next;
    }
}

int main(){
    vector <int> arr={2,54,23,13};
    Node* y=new Node(arr[0],nullptr);

    //to print the adress ptr of thenxt element
    cout<<y<<endl;

    //to print the data stored in that node 
    cout<<y->data<<endl;

    //to print next address
    cout<<y->next<<endl;

    
    vector <int> arrr={334,2,5,7,23};
    Node* head=convertarr2ll(arrr);

    //to traverse throughout the linked list
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

    cout<<lengthofll(head)<<endl;

    cout<<checkifpresent(head,4);

    
    
    
}