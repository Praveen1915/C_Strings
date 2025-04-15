#include<stdio.h>
#include<string.h>

#include "String_Copy.c"

int main()
{
    char str1[50], str2[50];
    
    printf("Enter a name: ");
    scanf("%50s", str2);

    Str_Copy(str1, str2);

    printf("After copy the string is: %s", str1);

    return 0;
}