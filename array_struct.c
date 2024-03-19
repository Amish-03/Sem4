#include<stdio.h>

typedef struct XYZ
{
   int a,b;
   int sum;
}xyz;


main()
{
    xyz t[10];
    int i;
    for(i=0;i<10;i++)
    {
        printf("Enter value of a for %dth element\n",i+1);
        scanf("%d",&t[i].a);
        printf("Enter value of b for %dth element\n",i+1);
        scanf("%d",&t[i].b);
        t[i].sum=t[i].a+t[i].b;
        printf("Sum is %d\n",t[i].sum);
    }
}
