#include<stdio.h>
#include<string.h>

int main(void)
{
    char szStr1[20];
    char szStr2[20];
    int iRet;
    int iNo;

    printf("\nEnter String 1:\t");
    gets(szStr1);                                   // Hello Sir
    printf("\nEnter String 2:\t");
    gets(szStr2);                                   // hello sir
    printf("\nEnter Value Of n:\t");
    scanf("%d",&iNo);                               // 7

    iRet = strnicmp(szStr1,szStr2,iNo);

    if(iRet == 0)
        printf("\nBoth Strings Are Same\n");        // Both Strings Are Same
    else
        printf("\nBoth Strings Are Different\n");

    return 0;
}
