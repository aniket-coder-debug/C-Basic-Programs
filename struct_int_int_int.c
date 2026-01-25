# include<stdio.h>

struct demo
{
    int iNo1;
    int iNo2;
    int iNo3;
};

int main(void)
{
    struct demo obj;

    printf("sizeof(obj) = %d\n",sizeof(obj));            //  12

    printf("%d\n%d\n%d\n",obj.iNo1,obj.iNo2,obj.iNo3);  // 2307131(garbaze) 11795896(garbaze) 2304190(garbaze)

    obj.iNo1 = 10;

    printf("%d\n%d\n%d\n",obj.iNo1,obj.iNo2,obj.iNo3);  // 10 11795896(garbaze) 2304190(garbaze)

    obj.iNo2 = 20;

    printf("%d\n%d\n%d\n",obj.iNo1,obj.iNo2,obj.iNo3);  // 10 20 2304190(garbaze)

    obj.iNo3 = 30;

    printf("%d\n%d\n%d\n",obj.iNo1,obj.iNo2,obj.iNo3);  // 10 20 30

    return 0;
}
