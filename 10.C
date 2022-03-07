#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
struct book
{
    char title[30], author[30], pub[30];
    int price;
} b[3] = {
    {"it's my life", "abc", "ssccs", 200},
    {"fire", "xyz", "GG", 300},
    {"alone", "pqe", "CG", 450}};

int search()
{
    char s[30];
    int i, res = 0;
    printf("\nEnter book name to search: ");
    _flushall();
    gets(s);
    strlwr(s);
    for (i = 0; i < 3; i++)
    {
        if (strcmp(s, b[i].title) == 0)
        {
            printf("\nBook Found!");
            res = 1;
            break;
        }
    }
    if (res == 0)
    {
        printf("Book not found..");
        getch();
        exit(0);
    }
    return i;
}
void display(int i)
{
    printf("\nTitle: %s", b[i].title);
    printf("\nAuthor: %s", b[i].author);
    printf("\nPublication: %s", b[i].pub);
}
void main()
{
    int i;
    // clrscr();
    printf("\nBook Records:-");
    for (i = 0; i < 3; i++)
    {
        printf("\n%d. %s", i + 1, b[i].title);
    }
    i = search();
    display(i);
    getch();
};