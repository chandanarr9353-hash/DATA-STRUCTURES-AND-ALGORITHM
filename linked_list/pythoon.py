def delete(head):
    temp=head
    head=head.next
    temp.next=None
    delete (temp)
    return head

def delete_at_end(head):
    if head or head.next is None:
        return None
    temp=head
    while temp.next.next is not None:
        temp=temp.next

    temp.next=None
    return head

def delete_kth(head,k):
    if head is None :
            return None
    temp=head
    count=0
    if k==1:
        head=temp.next 
        temp=None
        return head
        
    
    while temp is not None:
        count+=1
        if count==k-1:
            temp.next=temp.next.next
            return head
        temp=temp.next


