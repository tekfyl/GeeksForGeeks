Remove loop in Linked List (Function Program)
Show Topic Tags         Amazon    MakeMyTrip    Microsoft    Netskope    Oracle    Snapdeal    VMWare    Walmart labs
Given a linked list, remove the loop in it if present. The task is to complete the function removeTheLoop which takes only one argument the head of the linked list . The function removes the loop in the linked list if present.

Input:
The first line of input will contain an integer T denoting the no of test cases . Then T test cases follow. Each test case contains 3 lines . The first line of each test case contains an integer N denoting the no of nodes of the linked list . In the next line are N space separated values denoting the values of the linked list. The next line after it contains an integer x denoting that the last node of the linked list pointing to the xth node thus resulting in cycle. 

Output:
Your task is to remove the cycle if present output for each test case will be 1 if the loop is successfully removed from the linked list else 0.

Constraints:
1<=T<=50
1<=N<=300

Example(To be used only for expected output) :

Input:

2
3
1 3 4
2
4
1 8 3 4
0

Output:
1
1

Explanation:

In the first test case N = 3
The linked list with nodes N = 3 is given. here x=2 which means last node is connected with xth node of linked list. Therefore, there exists a loop. 

In the second test where N = 4 and x = 0, which means lastNode->next = NULL, thus the Linked list does not contains any loop.


/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*The structure of linked list is the following
struct Node
{
int data;
Node* next; 
};*/
/*The function removes the loop from the linked list if present
You are required to complete this method*/
void removeTheLoop(Node *node)
{
     //Your code here
     Node *s,*f;
     s = f = node; int flag = 0;
     while(f != NULL && f->next != NULL){
         s = s->next;
         f = f->next->next;
         if(s == f){
             flag = 1; break;
         }
     }
     if(flag == 0) return;
     else{
         f = node;
         while(f->next != s->next){
             s = s->next;
             f = f->next;
         }
         f->next = NULL;
     }
}
