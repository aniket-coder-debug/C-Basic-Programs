#include<stdio.h>

int main(int argc , char * argv[])          // values 10 20 30
{
    int iAns;
    int iCounter;

    for(iCounter = 1 , iAns = 0; iCounter < argc; iCounter++)
    {
        iAns = iAns + atoi(argv[iCounter]);
    }

    printf("Answer is %d\n",iAns);          // Answer is 60      

    return 0;
}
