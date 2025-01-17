#include <stdio.h>
struct stud
{
    char name[20];
    int marks;
    int roll_no;
    int age;
};
int main()
{
    struct stud Student1, Student2;

    printf("Enter name for student 1: ");
    scanf("%s", &Student1.name);
    printf("Enter age for student 1: ");
    scanf("%d", &Student1.age);
    printf("Enter roll no for student 1. : ");
    scanf("%d", &Student1.roll_no);
    printf("Enter marks for student 1: ");
    scanf("%d", &Student1.marks);

    printf("Enter name for student 2: ");
    scanf("%s", &Student2.name);
    printf("Enter age for student 2: ");
    scanf("%d", &Student2.age);
    printf("Enter roll no for student 2. : ");
    scanf("%d", &Student2.roll_no);
    printf("Enter marks for student 2: ");
    scanf("%d", &Student2.marks);
    printf("\n\nRECORDS: \n\n Student 1 : \n NAME : %s\n AGE : %d\n MARKS: %d\n Roll No. : %d\n\nStudent 2 : \n NAME : %s\n AGE : %d\n MARKS: %d\n Roll No. : %d\n", Student1.name, Student1.age, Student1.marks, Student1.roll_no, Student2.name, Student2.age, Student2.marks, Student2.roll_no);
}