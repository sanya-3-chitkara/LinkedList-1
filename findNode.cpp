//coding ninjas platform

int length(Node *head)
{
    if(head==NULL)
    {
      return 0;
    }
    return 1+length(head->next);
}
int findNode(Node *head,int data)
{
  Node *temp=head;
  int index=0;
  while(temp!=NULL)
  {
    if(temp->data==data)
    {
      break;
    }
    index++;
    temp=temp->next;
  }
  if(index==length(head))
  {
    return -1;
  }else
  {
    return index;
  }
}
