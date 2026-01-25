#include<stdio.h>

extern int no;

int main(void)
{
    // extern float no;      //  warning : benign redefinition of type

    printf("%d",no);         // 10

    return 0;
}
int no = 10;
