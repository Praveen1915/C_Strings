#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char* error = "ERROR";
    char* errorMessage = " Not enough memory";
    char* buffer = (char*) malloc(strlen(error)+strlen(errorMessage)+1);

    strcpy(buffer,error);
    strcat(buffer,errorMessage);

    printf("%s\n",buffer);
    printf("%s\n",error);
    printf("%s\n",errorMessage);

    free(buffer);

    printf("After free: %s",buffer);
    
    return 0;
}