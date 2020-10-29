//For complete problem refer to coding ninjas platform

Node *swapNodes(Node *head,int i,int j)
{
  Node *temp1=head;
  Node *node1=head;
  Node *node2=head;
  for(int a=0;a<i;a++)
  {
    node1=node1->next;
  }
  for(int b=0;b<j;b++)
  {
    node2=node2->next;
  }
  int temp=node1->data;
  node1->data=node2->data;
  node2->data=temp;
  return temp1;
}
