#include <stdio.h>
#include <conio.h>

struct date
{
    int day, month, year;
}d;
void input()
{
    printf("Enter Date in Format DD-MM-YYYY: ");
    scanf("%d-%d-%d", &d.day, &d.month, &d.year);
}
int vaildate()
{
    int res;
    if (d.year >= 1000 && d.year <= 9999)
    {
        // check month
        if (d.month >= 1 && d.month <= 12)
        {
            // check days
            if ((d.day >= 1 && d.day <= 31) && (d.month == 1 || d.month == 3 || d.month == 5 || d.month == 7 || d.month == 8 || d.month == 10 || d.month == 12))
                res = 0;
            else if ((d.day >= 1 && d.day <= 30) && (d.month == 4 || d.month == 6 || d.month == 9 || d.month == 11))
                res = 0;
            else if ((d.day >= 1 && d.day <= 28) && (d.month == 2))
                res = 0;
            else if (d.day == 29 && d.month == 2 && (d.year % 400 == 0 || (d.year % 4 == 0 && d.year % 100 != 0)))
                res = 0;
            else
                res = 1;
        }
        else
            res = 1;
    }
    else
        res = 1;
    return res;
}
void main()
{
    char month[12][30] = {"January", "February", "March", "April", "May", "June", "July", "September", "October", "November", "December"};
    //clrscr();
    input(d);
    if (vaildate(d) == 0)
        printf("Date is : %s %d, %d", month[d.month - 1], d.day, d.year);
    else
        printf("Invalid Date!");
    getch();
}