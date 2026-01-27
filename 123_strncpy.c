#include<stdio.h>
#include<string.h>

int main(void)
{
    int iNo;
    char szSource[20];
    char szDestination[20];

    printf("\nEnter Source string :\t");
    gets(szSource);                             // hello good morning
    printf("\nEnter Value Of n:\t");
    scanf("%d",&iNo);                           // 5
    
    printf("\nSource string is:\t");
    puts(szSource);                             // hello good morning

    strncpy(szDestination,szSource,iNo);

    printf("\n\nDestination String is:\t");
    puts(szDestination);                        // hello

    return 0;
}
