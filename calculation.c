#include<stdio.h>

int addition(int,int);
void subtraction(void);
int multiplication(void);
void division(int,int);
int modulus(void);

int main(void)
{
    int no1;
    int no2;
    int ans;

    printf("For addition,\nEnter two numbers:\t");
    scanf("%d%d",&no1,&no2);                                   
    ans = addition(no1,no2);
    printf("Addition is %d\n\n",ans);                          

    subtraction();

    printf("multiplication is %d\n\n",multiplication());       

    printf("For division,\nEnter numerator:\t");                
    scanf("%d",&no1);                                          
    printf("Enter denominator:\t");                             
    scanf("%d",&no2);                                          
    division(no1,no2);

    ans = modulus();
    printf("Remainder is %d\n\n",ans);                         

    return 0;
}
int multiplication(void)
{
    int no1;
    int no2;
    int ans;

    printf("For multiplication,\nEnter two numbers:\t");
    scanf("%d%d",&no1,&no2);                                   

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

    printf("For modulus,\nEnter numerator:\t");                
    scanf("%d",&numerator);
    printf("Enter denominator:\t");                            
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
    scanf("%d%d",&no1,&no2);                                     

    ans = no1-no2;

    printf("subtraction is %d\n\n",ans);                         
}
void division(int no1,int no2)
{
    printf("Quotient is %d\n\n",no1/no2);                        
}


