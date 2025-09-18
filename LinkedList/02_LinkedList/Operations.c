#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node
// typedef is use so that we don't need to use struct many times.
{
    int data;
    struct Node *next;
} Node;

Node *create(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node)); //we actually told newNode that you can only take sizeof(Node) memory.
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void display(Node *node)
{
    Node *temp = node;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

Node *deleteNode(Node *node, int value)
{
    Node *prev = NULL;
    Node *curr = node;

    if (curr != NULL && curr->data == value)
    {
        return curr->next;
    }

    while (curr != NULL)
    {
        if (curr->data == value)
        {
            prev->next = curr->next;
            free(curr);
            break;
        }
        prev = curr;
        curr = curr->next;
    }

    return node;
}

int length(Node *node)
{
    Node *temp = node;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }

    return count;
}

bool checkIfPresent(Node *node, int value)
{
    Node *temp = node;
    while (temp != NULL)
    {
        if (temp->data == value)
        {
            return true;
        }
        temp = temp->next;
    }

    return false;
}

void freeList(Node *node)
{
    while (node != NULL)
    {
        Node *temp = node;
        node = node->next;
        free(temp);
    }
}

int main()
{
    Node *node = create(1);
    node->next = create(2);
    node->next->next = create(3);
    node->next->next->next = create(4);

    printf("----Displaying all nodes----\n");
    display(node);
    node = deleteNode(node, 2);
    printf("----Displaying all nodes after delete a node----\n");
    display(node);
    printf("length of the LinkedList is: %d\n", length(node));
    printf(checkIfPresent(node, 5) ? "true\n" : "false\n");

    freeList(node);
    return 0;
}