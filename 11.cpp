//finding  leader in array

#include<iostream>

using namespace std;

void leader(int A[100],int n)
{
    int i,j;
    int flag=1;

    for(i=0;i<n;i++)
    {
       flag=1;
       for(j=i+1;j<n;j++)
       {
           if(A[j]>A[i])
            flag=0;
       }
       if(flag==1)
       {
           cout<<A[i]<<" is a leader "<<endl;
       }
       if(i==n-1)
        break;
    }
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

   leader(A,n);
}
