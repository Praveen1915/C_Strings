#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char c;

    printf("Enter the string: ");
    scanf("%c", &c);

    if(isdigit(c))
    
        printf("%c is a digit",c);
    else

        printf("%c is not a digit",c);
}