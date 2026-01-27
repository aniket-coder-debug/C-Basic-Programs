#include<stdio.h>

int main(void)
{
    char chChar1;
    char chChar2;

    printf("Enter charcter 1 :\t");
    scanf("%c",&chChar1);

    fflush(stdin);

    printf("Enter charcter 2 :\t");
    scanf("%c",&chChar2);

    printf("\ncharacter 1 is %c\n",chChar1);         
    printf("character 2 is %c\n",chChar2);

    return 0;
}

// Enter charcter 1 :      A
// Enter charcter 2 :      B

// character 1 is A
// character 2 is B
