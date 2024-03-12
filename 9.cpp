//finding highest in array
#include<iostream>

using namespace std;

int highest(int A[100],int n)
{
   int high=A[0];
   int i;
   for(i=0;i<n;i++)
   {
       if(A[i]>high)
        high=A[i];
   }
   return high;
}

main()
{
    int A[100];
    int i;
   for(i=0;i<10;i++)
   {
       cin>>A[i];
   }

   int n;
   n=highest(A,10);

   cout<<"Highest is "<<n;
}
