Compare two linked lists (Function Program)
Show Topic Tags     
Given two string, represented as linked lists (every character is a node in linked list). Write a function compare() that works similar to strcmp(), i.e., it returns 0 if both strings are same, 1 if first linked list is lexicographically greater, and -1 if second is lexicographically greater.

Input:

In this problem, method takes two argument: the head of the first and second linked list. The function should not read any input from stdin/console.
The struct Node has a data part which stores the data and a next pointer which points to the next element of the linked list. 
There are multiple test cases. For each test case, this method will be called individually.

Output:

Comapare two strings represented as linked list.

Constraints:

1<=T<=100

1<=N,M<=100

Example:
Input:
2
5
a b a b a
4
a b a a
3
a a b
3
a a b

Output:
1
0

/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* Linked list Node structure
struct Node
{
    char c;
    Node *next;
}; */
// Compare two strings represented as linked lists
int compare(Node *list1, Node *list2) 
{
     // Code Here
     if(list1 == NULL && list2 == NULL) return 0;
     if(list1 == NULL) return -1;
     if(list2 == NULL) return 1;
     if(list1->c == list2->c){
         return compare(list1->next, list2->next);
     }
     else{
         if(list1->c > list2->c) return 1;
         else return -1;
     }
}

O(min(n,m))
