#include<iostream>

using namespace std;

class xyz
{
private:
    int a,b;
public:

    xyz()
    {
        a=0;
        b=0;
        cout<<"default constructor is called"<<endl;
        cout<<a<<" "<<b<<endl;
    }

    xyz(int x,int y)
    {
        a=x;
        b=y;
        cout<<"Argumented constructor is called"<<endl;
        cout<<a<<" "<<b<<endl;

    }
};

main()
{
    xyz t;
    xyz o(4,2);
}
