#include <stdio.h>

typedef struct listitem{
    struct listitem *next, *previous; 
    int data;
} LISTITEM;


int main(int argc, char const *argv[])
{
    LISTITEM *head, *tail, *temp;
    head = NULL;
    tail = NULL;

    for (int i = 0; i <= 3; i++){
        temp = malloc(sizeof(LISTITEM));
        temp->data = i;
        temp->next = NULL;
        temp->previous = NULL;

        if (head == NULL){
            head = temp;
        }else {
            temp->previous = tail;
            tail->next = temp;
        }
        tail = temp;
    }

    temp = head;
    printf("FORWRDS\n");
    while(temp != NULL){
        printf("In order: %d\n", temp->data);
        temp = temp->next;
    }

    printf("\nBACKWARDS\n");
    temp = tail;
    while(temp != NULL){
        printf("In order: %d\n", temp->data);
        temp = temp->previous;
    }


    return 0;
}
