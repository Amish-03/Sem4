//reversing array

#include<iostream>
using namespace std;

main()
{
   int A[100];
   int i;
   for(i=0;i<10;i++)
   {
       cin>>A[i];
   }

   int j;
   i=0;
   j=9;
   int temp;

   while(i<j)
   {
      temp=A[i];
      A[i]=A[j];
      A[j]=temp;
      i++;
      j--;
   }
   for(i=0;i<10;i++)
   {
       cout<<A[i]<<" ";
   }
}
