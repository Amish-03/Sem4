#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

void displayDate(struct Date d)
{
    printf("Date: %d/%d/%d\n",d.day,d.month,d.year);
}

int main()
{
    struct Date d={6,3,2024};
    displayDate(d);
    return 0;
}
