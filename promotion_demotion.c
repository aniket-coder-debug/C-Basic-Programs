#include<stdio.h>

int main(void)
{
    int iAns;

    iAns = 2*3.25+(5/2);         

    printf("%d",iAns);           // 8

    return 0;
}

// solving :-

// iAns = ((2*3.25)+(5/2));   //promotion of 2 to 2.00
// iAns = 6.50 + 2            //promotion of 2 to 2.00
// iAns = 8.50                //demotion of 8.50 to 8
// iAns = 8

