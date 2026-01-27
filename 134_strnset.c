#include<stdio.h>
#include<string.h>

int main(void)
{
    int iNo;
    char szStr[20];
    char chChar;

    printf("\nEnter The String:\t");
    gets(szStr);                                    // how are you
    printf("\nEnter The Charcter To Set:\t");
    scanf("%c%c",&chChar,&chChar);                  // z
    printf("\nEnter The Value Of iNo:\t");
    scanf("%d",&iNo);                               // 2

    strnset(szStr,chChar,iNo);

    printf("\nNow String Is:\t");
    puts(szStr);                                    // w are you

    return 0;
}
