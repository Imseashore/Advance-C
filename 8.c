#include<stdio.h>
#include<conio.h>
struct score{
    char name[30];
    int runs[5];
    float avg;
}s;
void CalculateAverage(){
    int i;
    s.avg=0;
    for(i=0;i<5;i++){
          s.avg+=s.runs[i];
    }
    s.avg/=5;
}
void main(){
    int i;
    // clrscr();
    printf("Enter Player name: ");
    scanf("%s",&s.name);
    printf("Enter runs last 5 matches: ");
    for(i=0;i<5;i++)
        scanf("%d",&s.runs[i]);
    CalculateAverage();
    printf("\nPlayer: %s\tAverage score is %.2f",s.name,s.avg);
    getch();
}