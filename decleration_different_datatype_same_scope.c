#include<stdio.h>

int main(void)
{
    extern int no;
    //extern float no;        // error: previous declaration of 'no' was here

    printf("%d",no);          // 10

    return 0;
}
int no = 10;
