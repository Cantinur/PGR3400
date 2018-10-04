#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void oppgave1();
void oppgave2();
void oppgave3();

int main(int argc, char* argv[])
{
    //oppgave1();
    //oppgave2();
    oppgave3();
    return 0;
}

/*
Exercise 1:
Consider the following - You have a multidimensional array of size [r][c] -
r rows and c cols. (r,c) are provided at run-time. 

Example: (r=10,c=5)(r=5,c=5) 

Take input from user and store each integer into a random row. Store it
in another row if the row is already full. Then print the whole array in a nice
formatting. 

Then write a function that takes a pointer to a row and sorts the integers in
place. */
void oppgave1()
{
    int r,c, index, k, teller, row;
    srand((unsigned) time(&k));

    printf("Pleas enter an number between 1 and 100\n");
    scanf("%i", &r);
    printf("Pleas enter an number between 1 and 100\n");
    scanf("%i", &c);
    int a[r][c];

    for(int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
             a[i][j] = 0;
        }
    }

    for (int j = 0; j < (c*r); j++){
        row = rand() % r;
        index = 0;
        teller = 0;

        while(index == 0){

            if (teller == c){
                row = rand() % r;
                teller = 0;
            }

            if (a[row][teller] == 0){
                a[row][teller] = (rand() % 9)+1;
                index = 1;
                row = 0;
            }
            teller++;
        }
    }

    for(int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            printf("%i ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}


/*Exercise 2:
strlen() outputs the length of a string and is part of the string.h.
Write a small function to output the length of a string without using strlen().

Hint:  In C a sting is assumed to be terminated with '\0'*/
void oppgave2()
{
    int count = 0;
    char* str = (char*) calloc(100, sizeof(char));

    printf("Type a text and I'll tell you how long it is ");
    scanf("%[^\n]s", str);

    for (int i = 0; i < 100; i++){
        if(*str == '\0'){
            break;
        }
        if(*str != ' '){count++;}
        str++;
    }
    printf("The length is %i\n", count);
}

/*Exercise 3:
Take an input string and print all the occurrences of vowels[a,e,i,o,u] in the
string in order of their occurrence.*/
void oppgave3(){
    int j;
    int count = 0;
    char a[40];
    char* str = calloc(40, sizeof(char));
    

    printf("Pleas enter a word: ");
    scanf("%[^\n]s", str);

    for(j = 0; j < 40; j++){
        if(*str == '\0'){break;}

        switch(*str){
            case 'a':
                a[count] = *str;
                count++;
                break;
            case 'e':
                a[count] = *str;
                count++;
                break;
            case 'i':
                a[count] = *str;    
                count++;
                break;
            case 'o':
                a[count] = *str;
                count++;
                break;
            case 'u':
                a[count] = *str;
                count++;
                break;
            default:
                break;
        }
        str++;
    }

    for(j = 0; j < count; j++){
        if(a[j] == '\0'){break;}
        printf("%i: %c\n", (j+1), a[j]);
    }
    printf("There are in total %i number of vowels in this string\n", count);
}


/*
Exercise 4:
Look at the included source file to get some leads on how to do things. Only
basic building blocks are provided. I expect you to write the game yourselves.

Now we will design a small boring game. It's a text based first person shooter game.

The idea is simple.

You enter a house with 100 points as life. You have several rooms and each room has certain number of
bots that could vary between [2-8]. The bots are small creatures with 3x3
pixels. Each bot has a structure that looks like 
010  111
101  101
110  111

They appear on the screen and you need to fight them. To fight them, you need
to add the number of 1s and type it in the terminal. If you type it wrong the
bot takes 5 points, if you miss the time the bot takes 10 points. Each time
you clear a room, you enter next level - next level has lesser time per bot
than previous level. 

You start with 10 seconds in the first level and start dropping one second for
each level. If you complete the game, you win - else you get 3 scores - 
how many bots you killed and what level you died. 

Hint: Use struct to manage bots*/