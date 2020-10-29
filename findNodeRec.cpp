//For complete problem refer to coding ninjas platform

int findNodeRec(Node *head,int data)
{
  if(head == NULL)
  {
    return 1;
  }
  else if(head->data==data)
  {
    return 0;
  }
  int smallAns=findNodeRec(head->next,data);
  if(smallAns==-1)
  {
    return -1;
  }
  return smallAns+1;
}
