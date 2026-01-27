#include<stdio.h>
#include<string.h>

int main(void)
{
    char *pszStr = "HELLO";

    printf("szStr = %s\n",pszStr);                       // HELLO
    printf("sizeof(szStr) = %d\n",sizeof(pszStr));       // 4
    printf("strlen(szStr) = %d\n",strlen(pszStr));       // 5
    
    // pszStr[3]='Z';
    // printf("szStr[3]='Z' = %c\n",pszStr[3]='Z');      // No Output (crash) ithun khalch print ny hot

    pszStr = "BYE";
    printf("%s\n",pszStr = "BYE");                       // BYE

    return 0;
}
