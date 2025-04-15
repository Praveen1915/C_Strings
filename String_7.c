//String copy
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

void main()
{
    char name[50], *names[50];
    short int count = 0;

    puts("Enter a name: ");
    scanf("%c", name);

    printf("Entered name is: %s\n",name);

    names[count] = (char*)malloc(strlen(name)+1);
    strcpy(names[count],name);
    count++;

    printf("After copy: %s",*names);
}