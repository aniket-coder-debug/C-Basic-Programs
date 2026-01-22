#include<stdio.h>

int main(void)
{
    int iNo = 10;
    char chChar = 'A';
    float fNo = 57.33f;
    double dNo = 69.33;

    printf("sizeof(int)=%d\n",sizeof(int));          //4
    printf("sizeof(char)=%d\n",sizeof(char));        //1
    printf("sizeof(float)=%d\n",sizeof(float));      //4
    printf("sizeof(double)=%d\n",sizeof(double));    //8

    printf("sizeof(iNo)=%d\n",sizeof(iNo));          //4
    printf("sizeof(chChar)=%d\n",sizeof(chChar));    //1
    printf("sizeof(fNo)=%d\n",sizeof(fNo));          //4
    printf("sizeof(dNo)=%d\n",sizeof(dNo));          //8

    printf("sizeof(20)=%d\n",sizeof(20));            //4
    printf("sizeof('z')=%d\n",sizeof('z'));          //4
    printf("sizeof(99.99)=%d\n",sizeof(99.99));      //8
    printf("sizeof(99.99f)=%d\n",sizeof(99.99f));    //4

    printf("sizeof 10=%d\n",sizeof 10);              //4
    printf("sizeof iNo=%d\n",sizeof iNo);            //4
    //printf("sizeof int=%d\n",sizeof int);          //error: expected expression before 'int'

    printf("iNo=%d\n",iNo);                          //10
    printf("sizeof(++iNo)=%d\n",sizeof(++iNo));      //4
    printf("iNo=%d\n",iNo);                          //10

    printf("sizeof(void)=%d\n",sizeof(void));        //1

    return 0;
}

