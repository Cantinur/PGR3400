#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _LIST
{
    struct _LIST *pNext;
    char szName[100];
} LIST;

int InsertInList (LIST **ppHead, char *pszName)
{
    LIST *pThis = malloc(sizeof(LIST));

    if (pThis != NULL)
    {
        strncpy (pThis->szName, pszName, 100);
        pThis->pNext = *ppHead;
        *ppHead = pThis;
        return 1;
    }
    return 0;
}


int main(void)
{
    LIST *pThis, *pHead = NULL;

    char *apszNames[] = {
        "Otto", 
        "Nils", 
        "Alexander Christian Fredric Oscar III", 
        "Anne", 
        "Vilde", 
        NULL
    };

    for (int i = 0; apszNames[i]; i++)
        if (InsertInList(&pHead, apszNames[i]) == 0) break;

    for (pThis = pHead; pThis; pThis = pThis->pNext)
        printf("Name: %s.\n", pThis->szName);

    return 0;
}