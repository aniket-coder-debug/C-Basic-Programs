#include<stdio.h>

int main(void)
{
    int iNo = 10;
    int iAns1;
    int iAns2;

    printf("%d\n",iNo);            // 10

    iAns1 = iNo++;
    printf("%d\n",iNo);            // 11
    printf("%d\n",iAns1);          // 10

    iAns2 = ++iNo;
    printf("%d\n",iNo);            // 12
    printf("%d\n",iAns2);          // 12

    printf("%d\n",++iNo);          // 13
    printf("%d\n",iNo);            // 13

    printf("%d\n",iNo++);          // 13
    printf("%d\n",iNo);            // 14
    
    printf("%d\n",+ +iNo);         // 14
    printf("%d\n",iNo);            // 14

    printf("%d\n",iNo+1);          // 15
    printf("%d\n",iNo);            // 14

   // printf("%d\n",++10);         // error: L value required as increment operand
   // printf("%d\n",10++);         // error: L value required as increment operand

    return 0;
}
