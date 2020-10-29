//For complete problem refer to coding ninjas platform

node *rev_linkedlist_itr(node *head)
{
  if(head==NULL ||head->next==NULL)
  {
    return head;
  }
  node *tail=head->next;
  node *newHead=rev_linkedlist_itr(head->next);
  tail->next=head;
  head->next=NULL;
  return newHead;
}
