#include<stdio.h>
#include<string.h>

int main(void)
{
    char szStr[20];

    printf("\nEnter The String:\t");
    gets(szStr);                                // HeLLo

    strlwr(szStr);

    printf("\nString In Lower Case Is:\t");
    puts(szStr);                                // hello

    return 0;
}
