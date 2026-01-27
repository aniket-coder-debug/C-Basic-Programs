#include<stdio.h>

void Fun(int**ppPtr);

int main(void)
{
    int *pPtr = NULL;

    Fun(&pPtr);

    printf("In main %d\n",*pPtr);           // In main 10  (dangling pointer) 
    printf("%d\n",&pPtr);                   // 6422300 (100)
    printf("%d\n",pPtr);                    // 6422252 (300)

    return 0;
}
void Fun(int**ppPtr)
{
    int iNo = 10;

    *ppPtr = &iNo;

    printf("In fun %d\n",**ppPtr);           // In fun 10
    printf("%d\n",*ppPtr);                   // 6422252 (300)
    printf("%d\n",ppPtr);                    // 6422300 (100)
}

/*
                 _____________________
                |                     |
          main  |  pPtr    | 300 |    |       pPtr cha address => ppPtr madhe
                |       100      104  |       
                |_____________________|       iNo cha address => pPtr madhe
                |                     |
          fun   |  ppPtr   | 100 |    |       ith jr dangling pointer thambvaycha asel tr iNo 'static' karaycha
                |       200       204 |
                |                     |
                |  iNo      | 10 |    |
                |        300      304 |
                |_____________________|
                |                     |
*/
