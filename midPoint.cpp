//Coding Ninjas Problem Solution

Node *midPoint(Node *head)
{
    Node *slow=head;
    Node *fast=head;
    if(head==NULL||head->next==NULL)
    {
      return head;
    }
    while(fast->next!=NULL && fast->next->next!=NULL)
    {
      slow=slow->next;
      fast=fast->next->next;
    }
    return slow;
}
