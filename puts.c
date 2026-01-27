#include<stdio.h>

int main(void)
{
    char szStr[] = "Hello";
    char *pszStr = "Good";

    puts(szStr);            // Hello
    puts(pszStr);           // Good
    puts("AfterNoon");      // AfterNoon

    return 0;
}
