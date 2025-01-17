#include <stdio.h>
struct Student
{
    char name[20];
    int age;
    int marks;
};

int main()
{
    int n;
    printf("\n\nSize of struct Student is %d bytes\n\n", sizeof(struct Student));
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student students[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter name of student %d: ", i + 1);
        scanf("%s", &students[i].name);
        printf("Enter age of student %d   : ", i + 1);
        scanf("%d", &students[i].age);
        printf("Enter marks of student %d : ", i + 1);
        scanf("%d", &students[i].marks);
    }

    printf("\n\n ***** RECORDS ******\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nName of student %d  : %s\n", i + 1, students[i].name);
        printf("Age of student %d   : %d\n", i + 1, students[i].age);
        printf("Marks of Student %d : %d\n", i + 1, students[i].marks);
    }
}