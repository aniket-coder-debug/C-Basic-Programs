#include<stdio.h>

int main(void)
{
    char szStr[] = "Hello";
    char *pszStr = "Good";
    char szText[50];

    sprintf(szText,"%s%s%s",szStr,pszStr,"AfterNoon");

    printf(szText);             // HelloGoodAfterNoon

    return 0;
}
