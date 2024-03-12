#include<iostream>

using namespace std;

main()
{
    int cur=0;
    char a[]="engineering college student";

    while(a[cur]!='\0')
    {
        if(a[cur]==' ')
        a[cur+1]=toupper(a[cur+1]);

        if(cur==0)
            a[cur]=toupper(a[cur]);

        cout<<a[cur];
        cur++;

    }
}
