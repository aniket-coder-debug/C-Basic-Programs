#include<stdio.h>

void Fun(int);

int main(void)
{
    int iNo = 10;

    printf("In main , iNo is %d\n",iNo);           // 10

    Fun(iNo);   // call by value

    printf("Leaving main , iNo is %d\n",iNo);    // 10  (changes dosen't reflect)

    return 0;
}

void Fun(int iNo)
{
    printf("In Fun , iNo is %d\n",iNo);           // 10

    ++iNo;

    printf("Leaving Fun , iNo is %d\n",iNo);      // 11
}
