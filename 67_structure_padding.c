#include<stdio.h>

struct demo1
{
    char chChar;
    double dNo;
}obj1;

struct demo2
{
    char chChar;
    int iNo;
}obj2;

struct demo3
{
    int iNo;
    double dNo;
}obj3;

struct demo4
{
    char chChar1;
    char chChar2;
}obj4;

int main(void)
{
    printf("sizeof obj1 = %d\n",sizeof(obj1));          // 16
    printf("sizeof obj2 = %d\n",sizeof(obj2));          // 8
    printf("sizeof obj3 = %d\n",sizeof(obj3));          // 16
    printf("sizeof obj4 = %d\n",sizeof(obj4));          // 2

    return 0;
}
