#include<stdio.h>
#include<string.h>

int main(void)
{
    int iNo;
    char szSource[20];
    char szDestination[40];

    printf("\nEnter Destination string :\t");
    gets(szDestination);                            // hello
    printf("\nEnter Source string :\t");
    gets(szSource);                                 // sir
    printf("\nEnter value of n:\t");
    scanf("%d",&iNo);                               // 1

    strncat(szDestination,szSource,iNo);

    printf("\n\nConcatenated String is:\t");
    puts(szDestination);                            // hellos

    return 0;
}
