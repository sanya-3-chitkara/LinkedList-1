//coding ninjas platform
//pls return appended list it is returning address

int length(Node *head)
{
    if(head==NULL)
    {
        return 0;
    }
    return 1+length(head->next);
}
Node *appendLastNToFirst(Node *head, int n)
{
    Node *temp=head;
    int x=length(head)-n;
    int count=0;
    Node *a=head;
    Node *b;
    if(head==NULL)
    {
        return head;
    }
    if(n==0)
    {
        return head;
    }
    while(temp->next!=NULL)
    {
      if(count==x-1)
      {
        head=temp->next;
        b=temp;
      }
      temp=temp->next;
      count++;
    }
    temp->next=a;
    b->next=NULL;
    return head;
}
