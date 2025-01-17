#include <stdio.h>
#include <string.h>

struct Marks
{
    float Physics;
    float Maths;
    float Chemistry;
};

struct Student
{
    char name[20];
    struct Marks marks;
};

int main()
{
    struct Student Ashish;
    strcpy(Ashish.name, "Ashish");
    Ashish.marks.Physics = 20;
    Ashish.marks.Maths = 30;
    Ashish.marks.Chemistry = 10;
    printf("%s got %f marks in Physics , %f marks in Maths and %f marks in Chemistry\n", Ashish.name, Ashish.marks.Physics, Ashish.marks.Maths, Ashish.marks.Chemistry);
}