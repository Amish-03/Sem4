#include<iostream>

using namespace std;

class xyz
{
private:
    int a,b;
public:

    xyz(int x, int y)
    {
        a=x;
        b=y;

        cout<<a<<" "<<b;
    }


};

main()
{
    xyz t(3,5);
}
