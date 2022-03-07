#include <conio.h>
#include <stdio.h>

struct person
{

    char name[40], city[30];
    int age;
};
void main()
{
    struct person a;
    printf("Enter name: ");
    scanf("%s",a.name);
    printf("Enter age: ");
    scanf("%d",&a.age);
    printf("Enter city: ");
    scanf("%s",a.city);
    printf("\nName: %s",a.name);
    printf("\nAge: %d",a.age);
    printf("\nCity: %s",a.city);
//    getch();
}
