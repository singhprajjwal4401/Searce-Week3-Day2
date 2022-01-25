//A c++ code to insert a node in singly linked list  
#include <bits/stdc++.h>
using namespace std; 
//A class to create nodes
class Node 
{ 
public:
int data; 
Node *next; 
}; 
// A function to insert a node at the 
//beginning of singly linked list
void push(Node** head, int newdata) 
{ 
Node* newnode = new Node();//creating newnode
newnode->data = newdata; //put in data
newnode->next = (*head); //link newnode to head
(*head) = newnode; //changing head
} 
// A function to insert a node after  
//a specific node in a singly linked list
void insertAfter(Node* prevnode, int newdata) 
{ 
//check if previous node is null
if (prevnode == NULL) 
{
	cout<<"the given node cannot be null"<<endl;
	return;
}
Node* newnode = new Node();//creating newnode
newnode->data = newdata; //put in data
//link newnode to prevnode’s next node
newnode->next = prevnode->next; 
prevnode->next = newnode; //link prevnode to newnode
} 
// A function to insert a node at the 
//end of singly linked list
void append(Node** head, int newdata) 
{ 
Node* newnode = new Node();//creating newnode
Node *last = *head; // creating a ‘last’ node
newnode->data = newdata; //put in data
newnode->next = NULL; //link newnode with null
//Check if head is null
if (*head == NULL) 
{ 
*head = newnode; 
return; 
} 
//traversing ‘last’ node to end of the linked list 
while (last->next != NULL) 

last = last->next; 
//link ‘last’ node with newnode
last->next = newnode; 
return; 
} 
// A function to print the given linked list
// starting from the given node
void printList(Node *node) 
{ 
while (node != NULL) 
{ 
cout<<" "<<node->data; 
node = node->next; 
} 

}   
int main() 
{ 
/* Start with the empty list */
Node* head = NULL;       
// Insert 6 at the end,
append(&head, 6); 
//6->NULL     
// Insert 7 as head 
push(&head, 7); 
//7->6->NULL       
// Insert 1 as head. 
push(&head, 1); 
//1->7->6->NULL      
// Insert 4 at the end  
append(&head, 4); 
//1->7->6->4->NULL       
// Insert 8, after 7
insertAfter(head->next, 8); 
//1->7->8->6->4->NULL      
cout<<"Created Linked list is: "<<endl; 
printList(head);       
return 0; 
}
