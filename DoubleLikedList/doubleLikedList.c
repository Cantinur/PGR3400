#include <stdio.h>
#include <stdlib.h>

typedef struct listitem
{
    struct listitem *next;
    struct listitem *prev;
    int data;
} LISTITEM;

int main(void)
{
    LISTITEM *temp, head;
    head.next = (LISTITEM*) &head;
    head.prev = (LISTITEM*) &head;
    head.data = -1;

    for(int i = 0; i < 10; i++)
    {
        temp = malloc(sizeof(LISTITEM));
        temp->data = i;
        temp->next = head.next;
        head.next = temp;
        temp->prev = &head;
        temp->next->prev = temp;
    }
    
    temp = head.next;
    
    while(temp->data != -1)
    {
        printf("DATA: %d NEXT: %d PRIVIOUS: %d\n", temp->data, temp->next->data, temp->prev->data);
        temp = temp->next;
    }
    printf("\n");

    temp = head.prev;
    while(temp->data != -1)
    {
        printf("DATA: %d NEXT: %d PRIVIOUS: %d\n", temp->data, temp->next->data, temp->prev->data);
        temp = temp->prev;
    }

    return 0;
}
