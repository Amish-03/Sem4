//finding majority element in an array ie to check if an element appears more than n/2 times

#include<iostream>

using namespace std;

int occur(int A[100],int n,int ele)
{
    int count1=0;
    int i;
    for(i=0;i<n;i++)
    {
        if(A[i]==ele)
            count1++;
    }
    return count1;
}

int maj(int A[100],int n)
{
    int count1=0,count2=0;
    int i;
    for(i=0;i<n;i++)
    {
       count1=occur(A,n,A[i]);
       if(count1>n/2)
       {
           cout<<A[i]<<" is a majority element"<<endl;
           count2++;
       }
    }
    if(count2==0)
        cout<<"No majority element found"<<endl;
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

   maj(A,n);
}
