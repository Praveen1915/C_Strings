#include<stdio.h>
#include<string.h>

char* Str_Copy(char str1[], char str2[])
{
    int i = 0;
    while (str2[i] != '\0')
    {
        str1[i] = str2[i];
        i++;
    }

    str1[i] = '\0';     // Null-terminate the destination string
    return str1;
}