#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Address
{
    char street[100];
    char city[50];
    char state[50];
    int pincode;
};

struct Person
{
    char name[50];
    struct Date dob;
    struct Address address;
};

void displayPerson(struct Person p)
{
    printf("Name: %s\n",p.name);
    printf("Date of Birth: %d/%d/%d\n",p.dob.day,p.dob.month,p.dob.year);
    printf("Address: %s, %s, %s - %d\n",p.address.street,p.address.city,p.address.state,p.address.pincode);
}

int main()
{
    struct Person person={"Amish K",{29,12,2003},{"Hosur","Hubballi","Karnataka",580021}};
    displayPerson(person);
    return 0;
}
