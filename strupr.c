#include<stdio.h>
#include<string.h>

int main(void)
{
    char szStr[20];

    printf("\nEnter The String:\t");
    gets(szStr);                                // hello sir

    strupr(szStr);

    printf("\nString In Upper Case Is:\t");
    puts(szStr);                                // HELLO SIR

    return 0;
}
