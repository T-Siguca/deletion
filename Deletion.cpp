#include <iostream>

using namespace std;
//Node structure
struct Node{
int data;
Node* next;
};
//function to insert a node at the beginning of the linked list
void insertatbeginning (Node** head, int newData) {
Node* newNode = new Node();//allocate memory for the new node
newNode -> data = newData; //insert the data
newNode -> next = *head; //point the new node's next to the current head
*head = newNode; // move the head to the new node}
}
//function to insert a node after a given node
void insertAfter(Node* prevNode, int newData)
{
    if(prevNode == nullptr){
    cout << "the given previous node cannot be null." << endl;
return;
}
Node* newNode = new Node(); //allocate memory for the new mode
newNode -> data = newData; //insert the data;
newNode -> next = prevNode-> next; // set the new node's next to the previous node's next
prevNode -> next = newNode; // setthe previous node's next to the new node
}
//function to insert insert a node at the end of the linked list
void insertatEnd(Node** head, int newData){
Node* newNode = new Node(); //allocate memory for the new node
newNode ->data = newData; // insert the data
newNode ->next = nullptr;  // this new node will be the last node, so set its next to nullptr
if (*head == nullptr) // if the linked list is empty, then make the new node the head
    {
    *head = newNode;
    return;
}
Node* last = *head; // otherise, travers to the last node
while (last -> next != nullptr)
    last = last->next;
}
void printlist(Node* node){ // function to print the linked list
while (node != nullptr) {
    cout << node -> data << "->";
    node = node -> next;
}
cout <<"null" << endl;
}
int main(){
    Node* head = nullptr; //Initialise the head of linked list
//insert elements into the list
insertatEnd(&head, 10);
insertatbeginning(&head, 5);
insertatEnd(&head, 15);
insertAfter(head->next, 7);// insert 7 ater the second node(5 -> 7 -> 10 -> 15)

printlist(head);

    return 0;
}
