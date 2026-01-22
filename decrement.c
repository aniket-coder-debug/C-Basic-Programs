#include<stdio.h>

int main(void)
{
    int iAns;
    int iNo =10;

    printf("%d\n",iNo);                             // 10

    iAns = --iNo;
    printf("%d\n",iNo);                             // 9
    printf("%d\n",iAns);                            // 9

    iAns = iNo--;
    printf("%d\n",iNo);                             // 8
    printf("%d\n",iAns);                            // 9

    iNo--;
    printf("%d\n",iNo);                             // 7

    --iNo;
    printf("%d\n",iNo);                             // 6

    printf("%d\n",iNo--);                           // 6
    printf("%d\n",iNo);                             // 5

    printf("%d\n",--iNo);                           // 4
    printf("%d\n",iNo);                             // 4

    return 0;
}
