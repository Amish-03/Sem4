#include<iostream>

using namespace std;

void mat_mul(int A[9][9],int B[9][9])
{
    int i,j,k;
    int C[100][100];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            C[i][j]=C[i][j]+ A[i][k]*B[k][j];
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;i<3;j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }


}


main()
{
    int i,j;
    int A[9][9],B[9][9];

    cout<<"matrix 1"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;i<3;j++)
        {
            cin>>A[i][j];
        }
    }

    cout<<"matrix 2"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;i<3;j++)
        {
            cin>>B[i][j];
        }
    }

    mat_mul(A,B);

}
