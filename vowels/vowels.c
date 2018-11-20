#include <stdio.h>
#include <string.h>


// Take an input string and print all the occurrences of vowels[a,e,i,o,u] in the
// string in order of their occurrence.
int compare(char word[20])
{
    char vowels[5] = {'a','e','i','o','u'};
    int count = 0, i = 0;

    while(word[i] != '\0')
    {
        for(int j = 0; j < 5; j++)
            if(strncmp(&word[i], &vowels[j], 1) == 0)
                count++;
        i++;
    }
    
    return count;
}


int main(void)
{
    char string[20] = "aeiu";
    int number = compare(string);
    printf("There are %d vowels\n", number);
    
    return 0;
}