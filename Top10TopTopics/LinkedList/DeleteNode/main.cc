/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // Complete this method
    if(position == 0) return head->next;
    else{
        Node *t=head;
        for(int i=0; i<position-1; i++) t=t->next;
        t->next = t->next->next;
    }
    return head;
}

O(n)
