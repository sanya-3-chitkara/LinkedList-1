//problem from coding ninjas platform
//recursive method
#include <iostream>
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

using namespace std;
#include "solution.h"

Node* takeinput() {
    int data;
    cin >> data;
    Node* head = NULL, *tail = NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        if(head == NULL)                  {
            head = newNode;
            tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head) {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout<<endl;
}
/***************************************************************/

Node* insertNodeRec(Node *head,int i,int data)
{
  Node *newNode=new Node(data);
  Node *temp=head;
  if(temp==NULL)
  {
    return temp;
  }
  if(i==0)
  {
    newNode->next=head;
    head=newNode;
    return head;
  }
  head->next=insertNodeRec(temp->next,i-1,data);
  return head;
}
/*******************************************************/
int main() {
    Node *head = takeinput();
    int pos, data;
    cin >> pos >> data;
    head = insertNodeRec(head, pos, data);
    print(head);
    return 0;
}
