#include<stdio.h>

int Addition(int,int);
int Multiplication(int,int);

int main(void)
{
    int (*fpPtr) (int,int) = NULL;
    int iAns;

    fpPtr = Addition;
    iAns = Addition(10,20);                         
    printf("Addition is %d\n",iAns);                // 30

    fpPtr = Multiplication;
    iAns = Multiplication(10,20);
    printf("Multiplication is %d\n",iAns);          // 200 

    return 0;  
}
int Addition(int iNo1,int iNo2)
{
    return iNo1 + iNo2 ;
}
int Multiplication(int iNo1,int iNo2)
{
    return iNo1 * iNo2 ;
}

