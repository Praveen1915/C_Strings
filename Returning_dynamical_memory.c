//Returning the address of the dynamically allocated memory
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

char* Blanks(int num)
{
    char* spaces = (char*) malloc(num + 1);

    if (spaces == NULL)
    {
        return NULL; // handle if value is null
    }
    
    for (int i = 0; i < num; i++)
    {
        spaces[i] = 'P';
    }
    spaces[num] = '\0';

    return spaces;
}

int main()
{
    printf("%s\n",Blanks(5));

    char* tmp = Blanks(5);

    printf("[%s]",tmp);

    free(tmp);

    printf("After free: [%s]",tmp);
}