#include<stdio.h>

void Fun1(void);
void Fun2(void);

int main(void)
{
    int iCounter;

    for(iCounter = 0; iCounter < 3; iCounter++)
        Fun1();

    for(iCounter = 0; iCounter < 3; iCounter++)
        Fun2();

    return 0;
}
void Fun1(void)
{
    int iNo = 10;
    ++iNo;

    printf("In Fun1,%d\n",iNo);     // 11 11 11
}
void Fun2(void)
{
    static int iNo = 10;
    ++iNo;

    printf("In Fun2,%d\n",iNo);     // 11 12 13 (madhalya kalat thambun rahty)
}
