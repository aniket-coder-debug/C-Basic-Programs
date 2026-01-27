#include<stdio.h>
#include<string.h>

int main(void)
{
    char szSource[20];
    char szDestination[20];

    printf("\nEnter Source string :\t");
    gets(szSource);                                 // My name is aniket
    printf("\nSource string is:\t");
    puts(szSource);                                 // My name is aniket

    strcpy(szDestination,szSource);

    printf("\n\nDestination String is:\t");
    puts(szDestination);                            // My name is aniket

    return 0;
}
