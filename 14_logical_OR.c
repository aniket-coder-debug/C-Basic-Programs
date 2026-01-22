#include<stdio.h>

int main(void)
{
    int iNo1 = 0;
    int iNo2 = 1;
    int iNo3 = 2;
    int iAns;                                      // 1

    iAns = iNo1 && ++iNo2 || iNo3++;
    printf("%d %d %d %d",iNo1,iNo2,iNo3,iAns);     // 0 1 3 1

    return 0;
}

// solving :-
// iAns = ((iNo1 && (++iNo2)) || (iNo3++));
//      = (0 || iNo3++);
//      = 1;