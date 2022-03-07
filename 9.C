#include <stdio.h>
#include <conio.h>
struct employee
{
    char name[30], city[40];
    long int sal;
}s[100];

void main()
{
    int i, n;
    // clrscr();
    printf("Enter no. of employees: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEmployee %d:", i + 1);
        printf("\nEnter Name: ");
        scanf("%s", s[i].name);
        printf("Enter City: ");
        scanf("%s", s[i].city);
        printf("Enter Salary: ");
        scanf("%ld", &s[i].sal);
    }
    printf("NO.\tName\t\tCity\t\tSalary");
    for (i = 0; i < n; i++)
    {
	printf("\n%d\t%s\t\t%s\t%ld",i+1,s[i].name,s[i].city,s[i].sal);
    }
    getch();
}