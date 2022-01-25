#include <bits/stdc++.h>
using namespace std;
/* Link list node */
class Node
{
    public:
    int data;
    Node* next;
};
void push(Node** head_ref, int new_data)
{
    Node* new_node =new Node(); 
    new_node->data = new_data; 
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
/* Counts no. of nodes in linked list */
int getCount(Node* head)
{
    int count = 0; // Initialize count
    Node* current = head; // Initialize current
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}
int main()
{  
    Node* head = NULL; 
   // 1->2->1->3->1 
    push(&head, 1);
    push(&head, 3);
    push(&head, 1);
    push(&head, 2);
    push(&head, 1);
    push(&head, 5);
    /* Check the count function */
    cout<<"count of nodes is "<< getCount(head);
    return 0;
}
