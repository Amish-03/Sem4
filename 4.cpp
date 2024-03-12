#include<iostream>

using namespace std;


void summ(int a[10][10],int b[10][10])
{
    int c[10][10];
    int i,j;
    cout<<endl<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
}


main()
{
    int a[10][10],b[10][10];
    int i,j;
    cout<<"enter 2x2 numbers ";
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"enter 2x2 numbers ";
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>b[i][j];
        }
    }

    summ(a,b);
}
