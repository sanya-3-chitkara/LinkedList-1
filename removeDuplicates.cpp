//coding ninjas platform

//***********Iterative Method*************//
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
//******************Recursive Method*****************//
Node * removeDuplicates(Node *head)
{
    Node *temp=head;
    if(temp->next==nullptr)
    {
        return temp;
    }
    Node *smallOutput=removeDuplicates(temp->next);
    if(temp->data==smallOutput->data)
    {
        temp->next=smallOutput->next;
        delete smallOutput;
    }
    return head;
}
