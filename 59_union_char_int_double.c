# include<stdio.h>

union demo
{
    char chChar ;
    int iNo;
    double dNo;
};

int main(void)
{
    union demo obj;

    printf("sizeof(obj) = %d\n",sizeof(obj));            //  8

    printf("%c\n%d\n%lf\n",obj.chChar,obj.iNo,obj.dNo);  //  @(G1)  1651520(G2)  0.000000(G3)

    obj.chChar = 'A';

    printf("%c\n%d\n%lf\n",obj.chChar,obj.iNo,obj.dNo);  //  A  1651521(G4)  0.000000(G5)

    obj.iNo = 10;

    printf("%c\n%d\n%lf\n",obj.chChar,obj.iNo,obj.dNo);  //  (no output)(G6)  10  0.000000(G7)

    obj.dNo = 99.99;

    printf("%c\n%d\n%lf\n",obj.chChar,obj.iNo,obj.dNo);  //  Å(G8)  687194767(G9)  99.990000

    return 0;
}
