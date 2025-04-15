#include<stdio.h>
#include<string.h>

void main()
{
    char color[] = "Praveen";

    int i = 0;

    while (color[i] != '\0')
    {
        printf("%c", color[i]);
        i++;
    }
    
}