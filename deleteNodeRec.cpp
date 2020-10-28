//problem from coding ninjas platform
//recursive method



Node* deleteNodeRec(Node *head,int i)
{
  Node *temp=head;
  if(head==NULL)
  {
    return temp;
  }
  if(i==0)
  {
    Node *a=head->next;
    head=a;
    return head;
  }
  head->next=deleteNodeRec(temp->next,i-1);
  return head;
}
