#include <stdio.h>
#include <pthread.h>

void* someFunc(void* unused)
{
    for (int i = 50; i >= 0; i--)
    {
        printf("Thread started at: %ld, is now %d\n", (int *) unused, i);
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    pthread_t thread[100];
    pthread_attr_t attr;
    pthread_attr_init(&attr);

    for (int i = 0; i < 100; i++){

        int data = i;
        pthread_create(&thread[i], &attr, someFunc, &data);
    }

    for (int i = 0; i < 100; i++){
        pthread_join(thread[i], NULL);
    }
    
    return 0;
}