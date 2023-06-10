#include <stdio.h>
#include <stdlib.h>

#include "project.h"

// ...using an array of pointers to keep track of the strings
void store(char *word)
{
    printf("I will attempt to store this word => %s\n", word); 
}

char *read(char str[], int n)
{
    char *strPtr = NULL;
    int character;
    int i = 0;

    // get the string
    while((character = getchar()) != '\n')
    {
        if(i < n)
        {
            str[i++] = character;
        }
    }

    str[i] = '\0';

    // malloc the string
    if((strPtr = malloc(sizeof(strlen(str) + 1))) == NULL)
    {
        printf("Cannot Allocate Memory\n");
        exit("EXIT_FAILURE");
    }

    strcpy(strPtr, str);

    store(strPtr);

    printf("strPtr => %s\n", strPtr);

    free(strPtr);

    // return the length of the string
    // return strlen(str);
    return str;
}

int main(int argc, char **argv)
{
    int count = 0, len = 0;
    char *message[INDEX];
    const int SIZE = 3;
    char *ptr[SIZE];
    char *result = NULL;

    printf("Welcome\n");

    do 
    {
        printf("Enter word: ");

        //len = read(message, INDEX);
        //ptr[count] = read(message, INDEX);
        ptr[count] = read(message, INDEX);

        //printf("[word lenth]: %d - %s\n", len, *ptr[count]);

        count++;
    } while(count < SIZE);

    for(int i = 0; i < SIZE; i++)
    {
        printf("=> %s\n", ptr[i]);
    }

    return 0;
}










































