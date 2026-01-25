# include<stdio.h>

struct demo
{
    char chChar ;
    int iNo;
    double dNo;
};

int main(void)
{
    struct demo obj;

    printf("sizeof(obj) = %d\n",sizeof(obj));            //  16

    printf("%c\n%d\n%lf\n",obj.chChar,obj.iNo,obj.dNo);  //  w(G1)   12872331(G2)   0.000000(G3)

    obj.chChar = 'A';

    printf("%c\n%d\n%lf\n",obj.chChar,obj.iNo,obj.dNo);  //  A   12872331(G2)   0.000000(G3)

    obj.iNo = 10;

    printf("%c\n%d\n%lf\n",obj.chChar,obj.iNo,obj.dNo);  //  A   10   0.000000(G3)

    obj.dNo = 99.99;

    printf("%c\n%d\n%lf\n",obj.chChar,obj.iNo,obj.dNo);  //  A   10   99.990000

    return 0;
}
