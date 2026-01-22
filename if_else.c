#include<stdio.h>

int main(void)
{
    int iNo = 5;
    if(iNo<10)
       printf("1.one\n");      //simple statment
    else
       printf("1.two\n");      //simple statment

    // o/p : one

    iNo = 15;
    if(iNo<10)
       printf("2.one\n");      //simple statment
    else
       printf("2.two\n");      //simple statment

    // o/p : two

    iNo = 5;
    if(iNo<10)
       printf("3.one\n");      //simple statment
       printf("3.two\n");      //simple statment
    // else
    // printf("three");        //simple statment

    // o/p : error: 'else' without a previous 'if'

    iNo = 15;
    if(iNo<10)
    {                      //compund statment
        printf("4.one\n");
        printf("4.two\n");
    }
    else
       printf("4.three\n");

    // o/p : three

    iNo = 15;
    if(iNo<10);            //null statment
    {                      //compund statment
        printf("5.one\n"); 
        printf("5.two\n");
    }
    // else
    // printf("three");

    // o/p : error: 'else' without a previous 'if'

    return 0;
}
