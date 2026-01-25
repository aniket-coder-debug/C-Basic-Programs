#include<stdio.h>

int main(void)
{
    int iCounter;

    iCounter = 0;
    while(iCounter < 3)
    {
        printf("%d ",iCounter);       // o/p :- 0 1 2
        iCounter++;
    }

    iCounter = 3;
    while(iCounter < 3)
    {
        printf("%d",iCounter);       // o/p :- NO OUTPUT
        iCounter++;
    }
    return 0;
}
