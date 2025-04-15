//Used to manipulate character and string data
#include<string.h>
#include<stdio.h>
#include<ctype.h>

void main()
{
    char c;
    char sentence[100];
    int i = 0;

    puts("Enter the line of text: ");

    while ((c = getchar()) != '\n')
    {
        sentence[i++] = c;
    }
    sentence[i] = '\0';

    puts("\nThe string entered was: ");
    puts(sentence);
}