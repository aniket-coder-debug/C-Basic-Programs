#include<stdio.h>

#define MYSWITCH

#ifdef MYSWITCH
    int Addition(int , int);
#else
    int Addition(int , int , int);
#endif

int main(void)
{
    int iAns;
    
    #ifdef MYSWITCH
    iAns = Addition(10,20);
    #else
    iAns = Addition(10,20,30);
    #endif

    printf("Addition is %d\n",iAns);        // Addition is 30

    return 0;
}

#ifdef MYSWITCH
int Addition(int iNo1,int iNo2)
{
    return iNo1 + iNo2;
}
#else
int Addition(int iNo1,int iNo2,int iNo3)
{
    return iNo1 + iNo2 + iNo3;
}
#endif