#include<iostream>

using namespace std;

class xyz
{
private:
    int a;
    int b;
public:

    void suming(int x,int y)
    {
        int sum;
        sum=x+y;
        cout<<"Sum is "<<sum;
    }
};

main()
{
    xyz t;

    t.suming(3,5);

}
