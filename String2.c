#include<stdio.h>
#include<string.h>

void main()
{
    char *color = "Praveen";

    while (*color != '\0')
    {
        //printf("%c", *color);
        putchar(*color); //New type of print statement

        color++;
    }
}