#include<stdio.h>
#include"calculation.h"

int main(void)
{
    int no1;
    int no2;
    int ans;

    printf("For addition,\nEnter two numbers:\t");
    scanf("%d%d",&no1,&no2);                                   // 10 5
    ans = addition(no1,no2);
    printf("Addition is %d\n\n",ans);                          // 15

    subtraction();

    printf("multiplication is %d\n\n",multiplication());       // 50

    printf("For division,\nEnter numerator:\t");                
    scanf("%d",&no1);                                          // 10
    printf("Enter denominator:\t");                             
    scanf("%d",&no2);                                          // 5
    division(no1,no2);

    ans = modulus();
    printf("Remainder is %d\n\n",ans);                         // 1

    return 0;
}
int multiplication(void)
{
    int no1;
    int no2;
    int ans;

    printf("For multiplication,\nEnter two numbers:\t");
    scanf("%d%d",&no1,&no2);                                   // 10 5

    return no1*no2;
}
int addition(int no1,int no2)
{
    return no1+no2;
}
int modulus(void)
{
    int numerator;
    int denominator;
    int remainder;

    printf("For modulus,\nEnter numerator:\t");                 // 7
    scanf("%d",&numerator);
    printf("Enter denominator:\t");                             // 3
    scanf("%d",&denominator);

    remainder = numerator % denominator;

    return remainder;
}
void subtraction(void)
{
    int no1;
    int no2;
    int ans;

    printf("For subtraction,\nEnter two numbers:\t");
    scanf("%d%d",&no1,&no2);                                     // 10 5

    ans = no1-no2;

    printf("subtraction is %d\n\n",ans);                         // 5
}
void division(int no1,int no2)
{
    printf("Quotient is %d\n\n",no1/no2);                        // 2
}
