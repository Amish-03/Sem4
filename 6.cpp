#include<iostream>
using namespace std;

class emp
{
public:

    int id;
    char name[];
    int basicpay;
    int all;
    int ded;
    int netpay;
};

main()
{
    int i;
    emp a[5];

    for(i=0;i<5;i++)
    {
        cin>>a[i].basicpay>>a[i].all>>a[i].ded;
        a[i].netpay=a[i].basicpay+a[i].all-a[i].ded;
        cout<<"Netpay for employee "<<i+1<<" is "<<a[i].netpay<<endl;
    }
}
