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
    struct stud Student1;

    printf("Enter your name: ");
    scanf("%s", &Student1.name);
    printf("Enter your age: ");
    scanf("%d", &Student1.age);
    printf("Enter your roll no. : ");
    scanf("%d", &Student1.roll_no);
    printf("Enter your marks: ");
    scanf("%d", &Student1.marks);

    printf("Hii %s , you are %d years old and your roll number is %d and you got %d marks\n", Student1.name, Student1.age, Student1.roll_no, Student1.marks);
}