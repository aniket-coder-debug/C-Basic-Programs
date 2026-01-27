#include <stdio.h>
#include <stdarg.h>

int MyPrintf(const char *,...);
int Addition(int,...);

int main(void)
{
    int iRet;

    iRet = MyPrintf("Hello\n");                         // Hello
    MyPrintf("printf returned %d\n",iRet);              // printf returned 6

    MyPrintf("%d\t%c\n",10,'A');                        // 10      A
    MyPrintf("%c\t%d\n",'A',10);                        // A      10
    MyPrintf("%c\t%d\t%f\t%lf\n",'A',10,57.33f,69.33);  // A       10      57.330002       69.330000

    iRet = Addition(2,10,20);
    MyPrintf("Addition is %d\n",iRet);                  // Addition is 30

    iRet = Addition(3,10,20,30);
    MyPrintf("Addition is %d\n",iRet);                  // Addition is 60

    iRet = Addition(4,10,20,30,40);
    MyPrintf("Addition is %d\n",iRet);                  // Addition is 100

    return 0;
}
int MyPrintf(const char *pszFormat,...)
{
    int iRet;
    va_list pArg = NULL;                // char *

    // 'va_start' stores address of argument present after 'pszFormat' in 'pArg'

    va_start(pArg , pszFormat);

    iRet = vprintf(pszFormat , pArg);

    va_end(pArg);                       // pArg = NULL

    return iRet;
}
int Addition(int iTotalValues,...)
{
    int iAns;
    int iCounter;

    va_list pArg = NULL;

    va_start(pArg,iTotalValues);

    // 'va_arg' returns value by derefering 'pArg' with respect to integer and does pointer airthmatic by sizeof(int)

    iAns = 0;
    for(iCounter = 0; iCounter < iTotalValues; iCounter++)
    {
        iAns = iAns + va_arg(pArg,int);
    }

    va_end(pArg);

    return iAns;
}
