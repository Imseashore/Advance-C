#include <stdio.h>
#include <conio.h>

typedef struct Student_record
{
    char name[30];
    int day, mon, year, tmarks;
} Student_record;

int main()
{
    Student_record s[10], temp;
    char month[12][30] = {"January", "February", "March", "April", "May", "June", "July", "September", "October", "November", "December"};
    int i,j,n=10;
    // clrscr();
    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d:", i + 1);
        printf("\nName: ");
        scanf("%s", s[i].name);
        printf("Birthdate: ");
        scanf("%d-%d-%d", &s[i].day, &s[i].mon, &s[i].year);
        printf("Total Marks: ");
        scanf("%d", &s[i].tmarks);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
            if (s[i].tmarks < s[j].tmarks)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
    }
    printf("\nRank\tName\t\tDate of Birth\tTotal marks");
    for (i = 0; i < n; i++)
        printf("\n%d\t%s\t\t%s %d, %d\t%d", i + 1, s[i].name, month[s[i].mon - 1], s[i].day, s[i].year, s[i].tmarks);
    getch();
}