//program to find even sum in a array

#include<iostream>

using namespace std;

int evensum(int A[100],int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        if(A[i]%2==0)
            sum=sum+A[i];
    }
    return sum;
}

main()
{
    int A[100];
    int n;
    cin>>n;

    int i;
   for(i=0;i<n;i++)
   {
       cin>>A[i];
   }

   int eve_sum=evensum(A,n);

   cout<<"Even sum is "<<eve_sum;

}




