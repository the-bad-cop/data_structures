#include <stdio.h>
#include <stdlib.h>
typedef struct node1
{
    int data;
    struct node1 *link;
} Node;
void main()
{
    int n, it;
    void sortList(Node *, int);
    printf("Enter the number of elements:");
    scanf("%d", &n);
    Node *header, *ptr, *new;
    header = NULL;
    header = (Node *)malloc(sizeof(Node));
    printf("Enter the element 1:\n");
    scanf("%d", &it);
    // header->data=it;
    new = (Node *)malloc(sizeof(Node));
    new->data = it;
    new->link = NULL;
    header->link = new;
    ptr = header->link;
    for (int i = 1; i < n; i++)
    {
        new = NULL;
        new = (Node *)malloc(sizeof(Node));
        // header->link=new;
        printf("Element %d:", i + 1);
        scanf("%d", &it);
        new->data = it;
        new->link = NULL;
        ptr->link = new;
        ptr = ptr->link;
    }
    //Printing;
    ptr = header->link;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }

    void sortList(Node * node, int size)
    {
        int a, b, temp;
        a = node->data;
        b = node->link->data;
        for (i = 0; i < n; i++)
        {
            /* code */
        }
    }
}
