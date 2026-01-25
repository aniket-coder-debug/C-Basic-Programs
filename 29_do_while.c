#include<stdio.h>

int main(void)
{
    int iCounter;

    iCounter = 0;
    do
    {
        printf("%d",iCounter);         // o/p :- 012
        iCounter++;
    } while(iCounter < 3);


    iCounter = 3;
    do
    {
        printf("%d",iCounter);         // o/p :- 3
        iCounter++;
    } while (iCounter < 3);

    return 0; 
}
