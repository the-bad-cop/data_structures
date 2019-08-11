#include <stdio.h>
#include <stdlib.h>
typedef struct Node1
{
    int data;
    struct Node1 *link;
} Node;
Node *header, *ptr, *new;
void addNode(int);
void sortCheck();
void swapNode(Node *, Node *);
void printNode();
void main()
{
    int n, it;
    printf("Enter the no. of elements:");
    scanf("%d", &n);
    // Node *header;
    header = NULL;
    header = (Node *)malloc(sizeof(Node));
    header->data = NULL;
    header->link = NULL;
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Element %d:", i + 1);
        scanf("%d", &it);
        addNode(it);
    }
    printf("Printing the elements\n");
    printNode();
    printf("Sortng the elements\n");
    sortCheck();
    printf("Printing sorted elements\n");
    printNode();
}

void addNode(int item)
{
    new = (Node *)malloc(sizeof(Node));
    new->data = item;
    new->link = NULL;
    if (header->link == NULL)
    {
        header->link = new;
        ptr = new;
    }
    ptr->link = new;
    ptr = ptr->link;
}

void printNode()
{
    ptr = header->link;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }
}

void sortCheck()
{
    Node *ptr1;
    ptr = header->link;

    while (ptr != NULL)
    {
        // ptr = ptr->link;

        ptr1 = ptr->link;
        while (ptr1 != NULL)
        {
            // ptr1 = ptr->link;
            if (ptr->data > ptr1->data)
            {
                swapNode(ptr, ptr1);
            }
            ptr1 = ptr1->link;
        }
        ptr = ptr->link;
    }
}

void swapNode(Node *node1, Node *node2)
{
    int temp;
    temp = node1->data;
    node1->data = node2->data;
    node2->data = temp;
}