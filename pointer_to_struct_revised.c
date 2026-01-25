#include<stdio.h>

struct demo
{
    int iNo;
    float fNo;
};

void Scan(struct demo *pPtr);
void Print(const struct demo *pPtr);

int main(void)
{
    struct demo obj;

    Scan(&obj);
    Print(&obj);

    return 0;
}

void Scan(struct demo *pPtr)
{
    printf("\nEnter Integer :\t");
    scanf("%d",&pPtr -> iNo);
    printf("Enter Float :\t");
    scanf("%f",&pPtr -> fNo);
}

void Print(const struct demo *pPtr)
{
    printf("\nInteger is %d\n",(*pPtr).iNo);
    printf("Float is %f\n",pPtr -> fNo);
}
