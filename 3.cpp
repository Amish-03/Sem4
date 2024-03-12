#include<iostream>

using namespace std;


void sorting(long int a[]);

int main()
{
    int a[]={3,3,3,6,3};

    sorting((long int*)a);
}

void sorting(long int a[])
{
    int i,j,temp=0;
    int n=sizeof(a);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            {
                if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }

    }

    for(i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }

}
