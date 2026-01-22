#include<stdio.h>

int main(void)
{
    switch(2)
    {
        case 1:
           printf("one\n");
        case 2:
           printf("two\n");
        case 3:
           printf("three\n");
    }
    //     o/p :- two three

    switch(3)
    {
        case 1:
           printf("one\n");
        case 2:
           printf("two\n");
        case 3:
           printf("three\n");
    }
    //     o/p :- three

    switch(5)
    {
        case 1:
           printf("one\n");
        case 2:
           printf("two\n");
        case 3:
           printf("three\n");
        default:
           printf("default\n");
    }
    //     o/p :- default

    switch(5)
    {
        case 1:
           printf("one\n");
        default:
           printf("default\n");
        case 2:
           printf("two\n");
        case 3:
           printf("three\n");
    }
    //     o/p :- default two three

    switch(5)
    {
        case 1:
           printf("one\n");
        case 2:
           printf("two\n");
        case 3:
           printf("three\n");
    }
    //     o/p :- NO OUTPUT

    return 0;
}
