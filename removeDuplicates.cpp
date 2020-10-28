//coding ninjas platform


Node* removeDuplicates(Node *head)
{
    Node *t1=head;
    if(head==NULL||head->next==NULL)
    {
      return head;
    }
    while(t1->next!=NULL)
    {
      if(t1->data==t1->next->data)
      {
        t1->next=t1->next->next;
      }else
      {
        t1=t1->next;
      }
    }
    return head;
}
