#include<stdio.h>

int main(void)
{
    int iCounter;
    int iCounter1;
    int iCounter2;

    printf("FOR 1:-\n");
    // 1.
    for(iCounter = 0; iCounter < 3; iCounter++)
      printf("%d\t\n",iCounter);                // 0 1 2


    printf("FOR 2:-\n");
    // 2.
    iCounter = 0;
    for( ; iCounter < 3; iCounter++)
      printf("%d\t\n",iCounter);                // 0 1 2


    printf("FOR 3:-\n");
    // 3.
    for(iCounter = 0; ; iCounter++)
    {
        if(iCounter == 3)
          break;
        printf("%d\t\n",iCounter);               // 0 1 2
    }


    printf("FOR 4:-\n");
    // 4.
    for(iCounter = 0; iCounter <3; )
    {
        printf("%d\t\n",iCounter);                // 0 1 2
          iCounter++;
    }


    printf("FOR 5:-\n");
    // 5.
    iCounter = 0;
    for( ; ; )                                     // NOT READABLE
    {
        if(iCounter == 3)
          break;

        printf("%d\t\n",iCounter);                 // 0 1 2
        iCounter++;
    }


    printf("FOR 6:-\n");            // 'while' version of for
    // 6.
    iCounter = 0;
    for( ; iCounter < 3; )
    {
        printf("%d\t\n",iCounter);                 // 0 1 2
        iCounter++;
    }


    printf("FOR 7:-\n");
    // 7.
    for(iCounter1 = 0,iCounter2 = 3; iCounter1 < 3, iCounter2 > 0; iCounter1 ++ , iCounter2 --)
        printf("%d\t%d\n",iCounter1,iCounter2);

    // o/p :-  iCounter1 = 012  iCounter2 = 321

    return 0;
}
