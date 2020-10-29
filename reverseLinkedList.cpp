//For complete problem refer to Coding Ninjas Platform

Node* reverseLinkedListRec(Node *head)
{
  if(head==NULL ||head->next==NULL)
  {
    return head;
  }
  Node *tail=head->next;
  Node *newHead=reverseLinkedListRec(head->next);
  tail->next=head;
  head->next=NULL;
  return newHead;
}
