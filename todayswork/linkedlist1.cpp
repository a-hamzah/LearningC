#include <iostream>

using namespace std;

class Node
{
public:
    int value;
    Node *next;
};

void printList(Node *aHead)
{
    while (aHead != NULL)
    {
        cout << aHead->value << endl;
        aHead = aHead->next;
    }
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

    printList(head);

    return 0;
}
