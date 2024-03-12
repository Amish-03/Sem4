//finding k'th smallest element in an array
#include<iostream>

using namespace std;

void findk(int A[100],int n,int k)
{
    int i,j,temp;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(A[i]<A[j])
            {
               temp=A[i];
               A[i]=A[j];
               A[j]=temp;
            }
        }
    }

    cout<<"Array after sorting "<<endl;

    for(i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }

    cout<<endl;

    cout<<"required element is "<<A[k-1];
}

main()
{
    int n;
    cin>>n;
    int A[100];
    int i;
   for(i=0;i<n;i++)
   {
       cin>>A[i];
   }
   int k;
   cin>>k;

   findk(A,n,k);
}
