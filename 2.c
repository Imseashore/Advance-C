#include <conio.h>
#include <stdio.h>
struct measure
{
    int src, des, foot, inch;
};
void main()
{
    struct measure m;
    int temp;
    //    clrscr();
    printf("Enter source: ");
    scanf("%d", &m.src);
    printf("Enter destination: ");
    scanf("%d", &m.des);
    if (m.src > m.des)
        temp = m.src - m.des;
    else
        temp=m.des-m.src;
    m.foot=temp/12;
    m.inch=temp%12;
    printf("Foot: %d \t Inch: %d",m.foot,m.inch);
    //    getch();
}
