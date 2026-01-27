#include<stdio.h>

enum COMBINATION{series = 1,parallel = 2};
enum SWITCH{off,on};

int main(void)
{
    enum COMBINATION ckt;
    enum SWITCH s1,s2;

    printf("Enter Circuit you want (series = 1 , parallel = 2)\t");
    scanf("%d",&ckt);

    printf("Enter switch 1 (on = 1 , off = 0)\t");
    scanf("%d",&s1);
    printf("Enter switch 2 (on = 1 , off = 0)\t");
    scanf("%d",&s2);

    if(ckt == series)
    {
        if(s1 == on && s2 == on)
            printf("Bulb will glow\n");
        else
            printf("Bulb will not glow\n");
    }
    else        // parallel
    {
        if(s1 == on || s2 == on)
            printf("Bulb will glow\n");
        else
            printf("Bulb will not glow\n");
    }
    return 0;
}
