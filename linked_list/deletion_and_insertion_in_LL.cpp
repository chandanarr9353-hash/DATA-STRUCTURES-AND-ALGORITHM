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

//deleting the head of the linked list
Node* deletehead(Node* head){
    Node* temp=head;
    if (head==NULL){
        return head;
    }
    head=head->next;
    free(temp);   ///or delete temp..............in java u need do this manually becoz we have garbage collector whenever garbage collector runs it notice ther is no reference to the prevous node and it automatically deletes that.it takes acare of that manually
    return head;
}

//deleting the tail of the linked list

Node* deletetail(Node* head){
    if (head==NULL || head->next!=NULL){
        return head;
    }

    Node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
    return head;
}


//deleting kth element
Node* deletekthelement(Node* head,int k){
    if(head==NULL){
        return head;
    }
    if(k==1){
        Node* temp=head;
        head=head->next;
        free (temp);
        return head;
    }
    int count=0;
    Node*temp=head;
    Node* prev=NULL;
    while(temp!=NULL){
        count++;
        if(count==k){
            prev->next=prev->next->next;
            free (temp);
            break;
        }
        prev=temp;
        temp=temp->next; 
    }
    return head;
}


//deleting node when its value is given
Node* delete_element(Node* head,int el){
    if(head==NULL){
        return head;
    }
    if(head->data==el){
        Node* temp=head;
        head=head->next;
        free (temp);
        return head;
    }
     
    Node*temp=head;
    Node* prev=NULL;
    while(temp!=NULL){
         
        if(head->data=el){
            prev->next=prev->next->next;
            free (temp);
            break;
        }
        prev=temp;
        temp=temp->next; 
    }
    return head;
}

//insertion
//insertion at head
Node* insertathead(Node* head,int val){
    return new Node(val,head);
}

//insertion at the tail
Node* insertattail(Node* head ,int val){
    if(head==NULL){
        return new Node(val,NULL);
    }
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
    }
    Node* newNode=new Node(val,NULL);
    temp->next->next=newNode;
}

//insertion at kth place
Node* insertatk(Node* head,int val,int k){
    if(head==NULL){
        if(k==1){
            return new Node(val,NULL);
        }else{
            return NULL;
        }
    }
    if(k==1){
        Node* temp=new Node(val,head);
        return temp;
    }
    int count=0;
    Node* temp=head;
    while(temp!=NULL){
        count++;

        if(count==(k-1)){
            Node* x= new Node(val,NULL);
            x->next=temp->next;
            temp->next==x;
            return head;
            
        }
        temp=temp->next;

    }

}

int main(){
    vector <int> arr={23,45,2,13,4};
    Node* head=convertarr2ll(arr);
    head=deletehead(head);
    head=deletetail(head);
    cout<<head; 
}