//Coding Ninjas Platform Problem Solution
//****************Recursive Method******************//
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
//iteratively Method........*********************************************//
Node *mergeTwoSortedLinkedLists(Node *head1,Node *head2)
{
    if(head1==nullptr)
    {
        return head2;
    }else if(head2==nullptr)
    {
        return head1;
    }
    Node *finalHead=nullptr;
    Node *finalTail=nullptr;
    while(head1!=nullptr && head2 != nullptr)
    {
        if(head1->data <= head2->data)
        {
            if(finalHead==nullptr)
            {
                finalHead=head1;
                finalTail=head1;
            }else
            {
                finalTail->next=head1;
                finalTail=head1;
            }
            head1=head1->next;
        }else
        {
            if(finalHead==nullptr)
            {
                finalHead=head2;
                finalTail=head2;
            }else
            {
                finalTail->next=head2;
                finalTail=head2;
            }
            head2=head2->next;
        }
    }
    if(head1 == nullptr)
    {
        finalTail->next=head2;
    }else if(head2==nullptr)
    {
        finalTail->next=head1;
    }
    return finalHead;
}
