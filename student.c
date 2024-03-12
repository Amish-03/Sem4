#include <stdio.h>

struct Student
{
    char name[50];
    int rollNumber;
    float marks;
};

void displayStudent(struct Student s)
{
    printf("Name: %s\n",s.name);
    printf("Roll Number: %d\n",s.rollNumber);
    printf("Marks: %.2f\n",s.marks);
}

int main()
{
    struct Student s={"Amish",301,87.8};
    displayStudent(s);
    return 0;
}
