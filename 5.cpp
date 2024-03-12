#include <iostream>

using namespace std;

int main()
{
    int cur = 0;
    char a[] = "amish bhushan kulkarni";

    while (a[cur] != '\0')
    {
        if (a[cur] == ' ') // Check if it's a space character
            a[cur + 1] = toupper(a[cur + 1]); // Convert the next character to uppercase

        cout << a[cur];
        cur++;
    }

    return 0;
}
