#include<stdio.h>

int main(void)
{
    char szStr[] = "Hello";

    char *pszStr = "Good";

//  printf("%s",szStr);
//  printf("%s",pszStr);
//  printf("%s","AfterNoon");

//  OR

    printf("%s%s%s",szStr,pszStr,"AfterNoon");      // HelloGoodAfterNoon

    return 0;
}
