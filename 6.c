#include <stdio.h>
#include <conio.h>
#include <string.h>

struct cricket
{
    char pname[40], tname[30];
    int bavg;
};
void main()
{
    struct cricket temp,c[7];
    int i,j,n=7;
    // clrscr();
    for (i = 0; i < n; i++)
    {
        printf("\nPlayer %d", i + 1);
        printf("\nEnter Name: ");
        _flushall();
        gets(c[i].pname);
        printf("Enter Team Name: ");
        _flushall();
        gets(c[i].tname);
        printf("Enter batting average: ");
        scanf("%d", &c[i].bavg);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(strcmp(c[j].tname,c[j+1].tname)>0){
                temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
            }
        }
    }
    printf("\nPlayer Name\tTeam Name\tBatting avg");
    for(i=0;i<n;i++)
    printf("\n%s\t\t%s\t\t%d",c[i].pname,c[i].tname,c[i].bavg);
    getch();
}