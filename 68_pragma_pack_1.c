#include<stdio.h>

struct demo1
{
    char chChar;
    double dNo;
}obj1;              

#pragma pack(1)

struct demo2
{
    char chChar;
    double dNo;
}obj2;              

#pragma pack(4)

struct demo3
{
    char chChar;
    double dNo;
}obj3;              

#pragma pack()

struct demo4
{
    char chChar;
    double dNo;
}obj4;              

struct demo5
{
    char chChar;
    int iNo;
    double dNo;
}obj5;              

#pragma pack(4)

struct demo6
{
    char chChar;
    int iNo;
    double dNo;
}obj6;              

#pragma pack()

struct demo7
{
    char chChar;
    double dNo;
    int iNo;
}obj7;              

int main(void)
{
    printf("obj1=%d\n",sizeof(obj1));       // 16
    printf("obj2=%d\n",sizeof(obj2));       // 9
    printf("obj3=%d\n",sizeof(obj3));       // 12
    printf("obj4=%d\n",sizeof(obj4));       // 16
    printf("obj5=%d\n",sizeof(obj5));       // 16
    printf("obj6=%d\n",sizeof(obj6));       // 16
    printf("obj7=%d\n",sizeof(obj7));       // 24

    return 0;
}
