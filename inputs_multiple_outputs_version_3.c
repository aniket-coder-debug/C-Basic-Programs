#include<stdio.h>

void AddSub(int *iNo1,int *iNo2);

int main(void)
{
    int iNo1;
    int iNo2;

    printf("Enter two numbers:\t");
    scanf("%d%d",&iNo1,&iNo2);

    AddSub(&iNo1,&iNo2);

    printf("Addition is %d\n",iNo1);
    printf("Subtraction is %d\n",iNo2);

    return 0;
}
void AddSub(int *piNo1,int *piNo2)
{
    int iTemp;

    iTemp = *piNo1 + *piNo2;
    *piNo2 = *piNo1 - *piNo2;
    *piNo1 = iTemp;
}
