#include<stdio.h>
#include<string.h>

int main(void)
{
    char szStr[20];
    char chChar;

    printf("\nEnter The String:\t");
    gets(szStr);                                // hello

    printf("\nEnter The Charcter To Set:\t");
    scanf("%c",&chChar);                        // a

    strset(szStr,chChar);

    printf("\nNow String Is:\t");
    puts(szStr);                                // aaaaa

    return 0;
}
