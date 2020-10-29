//For complate problem refer to coding ninjas platform

Node *kReverse(Node *head, int k)
{
    if(k==0)
    {
        return head;
    }
	Node *current=head;
  Node *prev=NULL;
  Node *next=NULL;
  int count=0;
  while(count<k && current != NULL)
  {
    next=current->next;
    current->next=prev;
    prev=current;
    current=next;
    count++;
  }
  if(next != NULL)
  {
    head->next=kReverse(next,k);
  }
  return prev;
}
