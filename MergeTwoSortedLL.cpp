//Coding Ninjas Platform Problem Solution

Node* mergeTwoSortedLinkedLists(Node *a,Node *b)
{
  Node *result=NULL;
  if(a==NULL)
  {
    return b;
  }else if(b==NULL)
  {
    return a;
  }
  if(a->data <= b->data)
  {
    result=a;
    result->next=mergeTwoSortedLinkedLists(a->next,b);
  }else
  {
    result=b;
    result->next=mergeTwoSortedLinkedLists(a,b->next);
  }
  return result;
}
