#include <stdio.h>
#include <stdlib.h>

#include "project.h"

int read(char str[], int n)
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

    if((strPtr = malloc(sizeof(strlen(str) + 1))) == NULL)
    {
        printf("Cannot Allocate Memory\n");
        exit("EXIT_FAILURE");
    }

    strcpy(strPtr, str);

    printf("strPtr => %s\n", strPtr);

    free(strPtr);

    // return the length of the string
    return strlen(str);
}

int main(int argc, char **argv)
{
    int count = 0, len = 0;
    char *message[INDEX];

    printf("Welcome\n");

    do 
    {
        printf("Enter word: ");

        len = read(message, INDEX);

        printf("[word lenth]: %d\n", len);

        count++;
    } while(count < 2);

    return 0;
}
