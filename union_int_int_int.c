# include<stdio.h>

union demo
{
    int iNo1;
    int iNo2;
    int iNo3;
};

int main(void)
{
    union demo obj;

    printf("sizeof(obj) = %d\n",sizeof(obj));           //  4

    printf("%d\n%d\n%d\n",obj.iNo1,obj.iNo2,obj.iNo3);  // 1(garbaze) 1(garbaze) 1(garbaze)

    obj.iNo1 = 10;

    printf("%d\n%d\n%d\n",obj.iNo1,obj.iNo2,obj.iNo3);  // 10 10 10

    obj.iNo2 = 20;

    printf("%d\n%d\n%d\n",obj.iNo1,obj.iNo2,obj.iNo3);  // 20 20 20

    obj.iNo3 = 30;

    printf("%d\n%d\n%d\n",obj.iNo1,obj.iNo2,obj.iNo3);  // 30 30 30

    return 0;
}
