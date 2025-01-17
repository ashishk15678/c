#include <stdio.h>
union Books
{
    char name[50];
    int no;
    int price;
};

int main()
{
    union Books book1;

    printf("Enter your books name: ");
    gets(book1.name);
    printf("Name of the book is : %s\n", book1.name);

    printf("Enter your books ISBN: ");
    scanf("%d", &book1.no);
    printf("ISBN : %d\n", book1.no);

    printf("Enter your books price : ");
    scanf("%d", &book1.price);
    printf("PRICE : %d\n", book1.price);

    printf("Size of the union Books is : %d bytes \n", sizeof(book1));
}