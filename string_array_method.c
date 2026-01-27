#include<stdio.h>
#include<string.h>

int main(void)
{
    char szStr[] = "HELLO";

    printf("szStr = %s\n",szStr);                       // HELLO
    printf("sizeof(szStr) = %d\n",sizeof(szStr));       // 6
    printf("strlen(szStr) = %d\n",strlen(szStr));       // 5

    szStr[3]='Z';
    printf("szStr[3]='Z' = %c\n",szStr[3]='Z');         // Z

    printf("szStr = %s\n",szStr);                       // HELZO

    // szStr = "BYE";                                   // error: assignment to expression with array type
    // printf("%d\n",szStr = "BYE");               

    return 0;
}
