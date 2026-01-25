#include<stdio.h>

int g_iNo1;
int g_iNo2 = 10;
extern int g_iNo3;                  
extern int g_iNo4 = 20;             // warning : 'g_iNo4' initialized and declared 'extern'

int main(void)
{
    int iNo1;                       
    int iNo2 = 30;
    extern int iNo3;              
    // extern int iNo4 = 40;        // error: 'iNo4' has both 'extern' and initializer

    printf("%d\n",g_iNo1);          // 0        
    printf("%d\n",g_iNo2);          // 10         
    // printf("%d\n",g_iNo3);       
    printf("%d\n",g_iNo4);          // 20      

    printf("%d\n",iNo1);            // 0 (garbaze)           
    printf("%d\n",iNo2);            // 30            
    // printf("%d\n",iNo3);         
    // printf("%d\n",iNo4);        

    return 0;
}
