#include<stdio.h>

void Print1ToN(int);
void PrintNTo1(int);

int main(void)
{
    int iNo;

    printf("Enter number:\t");
    scanf("%d",&iNo);

    Print1ToN(iNo);
    printf("\n");
    PrintNTo1(iNo);

    return 0;
}

void Print1ToN(int iNo)
{
    if(iNo == 0)
        return ;

    Print1ToN(iNo - 1);
    printf("%d\n",iNo);                 // yetana print kel
}
void PrintNTo1(int iNo)
{
    if(iNo == 0)
        return ;

    printf("%d\n",iNo);                 // jatana print kel
    PrintNTo1(iNo-1);

}
