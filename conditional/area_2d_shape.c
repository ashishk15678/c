/*

*/

#include <stdio.h>
int main()
{
    int choice;
    printf("Area of 2D shapes \n");
    printf("1. Triangle\n2. Rectangle\n3. Square\n4. Circle\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        int base, height;
        printf("Enter base of triangle: ");
        scanf("%d", &base);
        printf("Enter height of triangle: ");
        scanf("%d", &height);
        int r1 = (base * height) / 2;
        printf("Area of triangle is : %d\n", r1);
        break;

    case 2:
        int breadth, length;
        printf("Enter length of Rectangle: ");
        scanf("%d", &length);

        printf("Enter breadth of Rectangle: ");
        scanf("%d", &breadth);
        int r2 = (length * breadth);
        printf("Area of triangle is : %d\n", r2);
        break;
    case 3:
        int side;
        printf("Enter side of square : ");
        scanf("%d", &side);
        int r3 = side * side;
        printf("Area of square is %d\n", r3);
        break;
    case 4:
        float radius;
        printf("Enter Radius of Circle: ");
        scanf("%f", &radius);
        float r4 = 3.14159 * (radius * radius);
        printf("Area of circle is %f\n", r4);
        break;
    default:
        printf("Enter correct value to proceed\n");
        break;
    }
}