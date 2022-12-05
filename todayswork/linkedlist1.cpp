#include <iostream>

using namespace std;

class Node
{
public:
    int value;
    Node *next;
};

// this function prints the values of linked lists

void printList(Node *aHead) // receiving the argument passed by invocation in main function
{
    while (aHead != NULL)
    {
        cout << aHead->value << endl;
        aHead = aHead->next;
    }
}

//! this function adds a new node before the head, now, it will become head itself

void insertAtTheFront(Node **head, int newValue)
{
    // 1. Prepare a new node
    Node *newNode = new Node();
    newNode->value = newValue;
    // 2. Put it in front of current head
    newNode->next = *head;
    // 3. Move head of the list to point to newNode to make it new head
    *head = newNode;
}

//! this function will add an element at the end of the list and mark it as the last node

void insertAtTheEnd(Node **head, int newValue)

{
    // 1. Prepare a new node
    Node *newNode = new Node();
    newNode->value = newValue;
    newNode->next = NULL;
    // 2. If the list is empty, the new entered node will be called the head node and the process will stop here
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    // 3. Find the last node (Point 3 and 4 will be followed if the list is not empty)
    Node *last = *head;
    while (last->next != NULL)
    {
        last = last->next;
    }

    // 4. Insert newNode after last node (at the end)
    last->next = newNode;
}

//! this function will add an element in the middle of the linked list

void insertAfter(Node *previous, int newValue)
{
    // 1. Check if the previous node is NULL
    if (previous == NULL)
    {
        cout << "Previous cannot be NULL.";
        return;
    }
    // 2. Prepare a newNode
    Node *newNode = new Node();
    newNode->value = newValue;
    newNode->next = previous->next;
    previous->next = newNode;
    // 3. Insert a newNode after previous
}
int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();

    head->value = 1;
    head->next = second;
    second->value = 2;
    second->next = third;
    third->value = 3;
    third->next = NULL;

    insertAtTheFront(&head, -1); // invoking the function and passing arguments

    insertAtTheEnd(&head, 4);

    insertAfter(second, 8); // inserting element in the middle of the list after 2

    printList(head); // invoking the function and passing argument

    return 0;
}
