//removing a particular element in an array

#include<iostream>

using namespace std;

void remove1(int ele,int A[100],int n)
{
    int i;
    int j;

    for(i=0;i<n;i++)
    {
        if(A[i]==ele)
        {
           for(j=i;j<n;j++)
           {
               A[j]=A[j+1];

           }
        }
    }

    cout<<endl;
   for(i=0;i<n-1;i++)
   {
       cout<<A[i]<<" ";
   }
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

   int ele;
   cout<<"element to be removed : ";
   cin>>ele;
   remove1(ele,A,n);
}
