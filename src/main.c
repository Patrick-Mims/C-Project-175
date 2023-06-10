#include <stdio.h>
#include <stdlib.h>

#include "project.h"

// ...using an array of pointers to keep track of the strings
void store(char *word)
{
    printf("I will attempt to store this word => %s\n", word); 
}

void read(char str[], int n, int c)
{
    char *storage[3];
    int character;
    int i = 0, j;
    static int counter = 0;


    // get the string
    while((character = getchar()) != '\n')
    {
        if(i < n)
        {
            str[i++] = character;
        }
    }

    str[i] = '\0';

    if((storage[c] = malloc(sizeof(char) * INDEX)) == NULL)
    {
        printf("Cannot Allocate Memory\n");
        exit("EXIT_FAILURE");
    }

    strcpy(storage[counter], str);
    counter++;

    if(counter == 3)
    {
        for(j = 0; j < 3; j++)
        {
            printf("storage => %s\n", storage[j]);
        }
    }
}

int main(int argc, char **argv)
{
    int count = 0, len = 0;
    char *message[INDEX];
    const int SIZE = 3;
    char *ptr[SIZE];

    printf("Welcome\n");

    do 
    {
        printf("Enter word %d: ", count);

        read(message, INDEX, count);

        count++;
    } while(count < SIZE);

    return 0;
}
