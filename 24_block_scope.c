#include<stdio.h>

int main(void)
{
    int iNo1 = 10;                 // block scope

    printf("%d",iNo1);
   // printf("%d",iNo2);           //error: 'iNo2' undeclared

    {                              // block scope
        int iNo2 = 20;
        printf("%d",iNo1);
        printf("%d",iNo2);
    }

    printf("%d",iNo1);
   // printf("%d",iNo2);            //error: 'iNo2' undeclared

    return 0;
}
