#include<stdio.h>

int main(void)
{
    int no = 10;
    int *p = & no;
    int **q = & p;
    int ***r = & q;
    int ****s = & r;
    int *****x = & s;
    int ******y = & x;
    int *******z = & y;

    printf("*p = %d\n",*p);                     // 10
    printf("**q = %d\n",**q);                   // 10
    printf("****y = %d\n",****y);               // 6422292 (200)
    printf("******z = %d\n",******z);           // 6422296 (100)
    // printf("%d\n",****r);                    // error: invalid type argument of unary '*' (have 'int')
    printf("&(***x) = %d\n",&(***x));           // 6422288 (300)
    printf("&(****z) = %d\n",&(****z));         // 6422284 (400)
    printf("*(&(****z)) = %d\n",*(&(****z)));   // 6422288 (300)
    printf("&(*p) = %d\n",&(*p));               // 6422296 (100)
    printf("*(&(*p)) = %d\n",*(&(*p)));         // 10
    printf("& no = %d\n",& no);                 // 6422296 (100)
    printf("*(& no) = %d\n",*(& no));           // 10

    return 0;
}
