//coding ninjas platform

Node* reverse(Node *head)
{
  if(head->next==NULL)
  {
    return head;
  }
  Node *tail=head->next;
  Node *newHead=reverse(head->next);
  tail->next=head;
  head->next=NULL;
  return newHead;
}
bool isPalindrome(Node *head)
{
    Node *slow=head;
    Node *fast=head;
    if(head==NULL||head->next==NULL)
    {
      return true;
    }
    while(fast->next!=NULL && fast->next->next!=NULL)
    {
      slow=slow->next;
      fast=fast->next->next;
    }
    Node *head1=slow->next;
    Node *head2=head;
    head1=reverse(head1);
    while(head1!=NULL && head2!=NULL)
    {
      if(head1->data!=head2->data)
      {
        return false;
      }
      head1=head1->next;
      head2=head2->next;
    }
    return true;
}
