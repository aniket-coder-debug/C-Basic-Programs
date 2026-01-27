#include<stdio.h>
#include<string.h>

int main(void)
{
    char chChar = 'A';
    char szStr[] = "Hello";
    char *pszStr = "Hello";

    printf("sizeof(chChar) = %d\n",sizeof(chChar));         // sizeof(chChar) = 1
    printf("sizeof(szStr) = %d\n",sizeof(szStr));           // sizeof(szStr) = 6
    printf("sizeof(pszStr) = %d\n",sizeof(pszStr));         // sizeof(pszStr) = 4
    printf("Length is %d\n",strlen(szStr));                 // Length is 5

    return 0;
}
