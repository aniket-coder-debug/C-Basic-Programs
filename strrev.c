#include<stdio.h>
#include<string.h>

int main(void)
{
    char szStr[20];

    printf("\nEnter The String:\t");
    gets(szStr);                        // HELLO

    strrev(szStr);

    printf("\nReverse String is:\t");
    puts(szStr);                        // OLLEH

    return 0;
}
