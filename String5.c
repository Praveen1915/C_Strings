#include<stdio.h>
#include<string.h>

int main()
{
    char line[100];

    printf("Enter the charecters: \n");

    scanf("%[ABCDEFGHIJKLMNOPQRSTUVWXYZ]", line);

    printf("The complete line of the text is: %s",line);
}