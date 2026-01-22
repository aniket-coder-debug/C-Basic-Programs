#include<stdio.h>

int main(void)
{
    int iNo = 5;
    if(iNo<10)
       printf("1.one\n");       //simple statment
       printf("1.two\n");

      // o/p : one two

    iNo = 15;
    if(iNo<10)
       printf("2.one\n");       //simple statment
       printf("2.two\n");

       // o/p : two

    iNo = 5;
    if(iNo<10)
    {                       //compund statment
        printf("3.one\n");
        printf("3.two\n");
    }
        // o/p : one two

    iNo = 15;
    if(iNo<10)
    {                       //compund statment
        printf("4.one\n");
        printf("4.two\n");
    }
        // o/p : no output

    iNo = 15;
    if(iNo<10);             //null statment
    {
        printf("5.one\n");
        printf("5.two\n");
    }
        // o/p : one two

    return 0;
}
