#include<stdio.h>
#include<conio.h>
struct time_struct
{
    int hours,minutes,second;
};
void main(){
    struct time_struct t;
    // clrscr();
    printf("enter hours: ");
    scanf("%d",&t.hours);
    printf("enter minutes: ");
    scanf("%d",&t.minutes);
    printf("enter seconds: ");
    scanf("%d",&t.second);
    printf("\nTime : %d:%d:%d",t.hours,t.minutes,t.second);
    getch();
}