#include<stdio.h>
#include<string.h>

int main(void)
{
    char szStr1[20];
    char szStr2[20];
    int iRet;
    int iNo;

    printf("\nEnter String 1:\t");
    gets(szStr1);                                   // Morning
    printf("\nEnter String 2:\t");
    gets(szStr2);                                   // morning
    printf("\nEnter Value Of n:\t");
    scanf("%d",&iNo);                               // 1

    iRet = strncmp(szStr1,szStr2,iNo);

    if(iRet == 0)
        printf("\nBoth Strings Are Same\n");
    else
        printf("\nBoth Strings Are Different\n");   // Both Strings Are Different

    return 0;
}
