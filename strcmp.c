#include<stdio.h>
#include<string.h>

int main(void)
{
    char szStr1[20];
    char szStr2[20];
    int iRet;

    printf("\nEnter String 1:\t");
    gets(szStr1);                                   // aniket
    printf("\nEnter String 2:\t");
    gets(szStr2);                                   // ANIKET

    iRet = strcmp(szStr1,szStr2);

    if(iRet == 0)
        printf("\nBoth Strings Are Same\n");
    else
        printf("\nBoth Strings Are Different\n");   // Both Strings Are Different

    return 0;
}
