#include<stdio.h>
#include<conio.h>
union student{
    long int roll_no;
    char name[40];
}u;
void main(){
    // clrscr();
    printf("Enter Student Roll_no: ");
    scanf("%ld",&u.roll_no);
    printf("Roll_No: %ld",u.roll_no);
    printf("\nEnter Name: ");
    _flushall();
    gets(u.name);
    printf("Name: %s",u.name);
    getch();
}