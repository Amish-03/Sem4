#include<stdio.h>

typedef struct XYZ
{
   int a;
   int b;
   int sum;
}xyz;

void suming(xyz *t)
{
    t->sum=t->a+t->b;


}

main()
{
    xyz *t;
    t->a=3;
    t->b=5;
    suming(t);
    printf("%d", t->sum);
}
