 Insertion of a node in Linked List (On the basis of some constraints)

/*
structure of the node of the list is as
struct node
{
    int data;
    struct node* next;
};
*/
void sortedInsert(struct node** head_ref, int data)
{
    // Code here
    node *temp = new  node;
    temp->data = data; temp->next = NULL;
    if(*head_ref == NULL || data <= (*head_ref)->data){
        temp->next = *head_ref;
        *head_ref = temp;
    }
    else{
        node *t=*head_ref;
        while(t->next != NULL && t->next->data < data){
            t = t->next;
        }
        temp->next = t->next;
        t->next = temp;
    }
}


Time Complexity: O(n)
