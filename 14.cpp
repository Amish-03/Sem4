//finding intersection of 2 arrays

#include<iostream>

using namespace std;

void inter(int A[100],int B[100],int n)
{
    int i;
    int j;
    int flag=0;

    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=0;j<n;j++)
        {
            if(A[i]==B[j])
                flag=1;
        }
        if(flag==1)
        {
            cout<<A[i]<<" is an intxn "<<endl;
        }
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

    int B[100];
   for(i=0;i<n;i++)
   {
       cin>>B[i];
   }

   inter(A,B,n);
}


