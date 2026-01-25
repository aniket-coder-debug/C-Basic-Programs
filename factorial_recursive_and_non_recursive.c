#include<stdio.h>

int FactorialRecursive(int);
int FactorialNonRecursive(int);

int main(void)
{
    int iNo;
    int iAns;

    printf("Enter number:\t");
    scanf("%d",&iNo);

    iAns = FactorialRecursive(iNo);
    printf("Factorial is %d\n",iAns);

    iAns = FactorialNonRecursive(iNo);
    printf("Factorial is %d\n",iAns);

    return 0;
}
int FactorialRecursive(int iNo)
{
    if(iNo == 1)
        return 1;        

    return iNo*FactorialRecursive(iNo-1);
}
int FactorialNonRecursive(int iNo)
{
    int iAns = iNo;
    int iCounter;

    for(iCounter = iNo-1 ; iCounter!=1 ; iCounter--)
        iAns = iAns*iCounter;

    return iAns;
}
