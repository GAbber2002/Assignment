#include<stdio.h>
int main()
{
    int d,m,y;

    printf(" Enter the date\n DD/MM/YYYY Format\n");
    scanf("%d/%d/%d",&d,&m,&y);

    printf("Day - %d, Month - %d, Year - %d",d,m,y);

    return 0;
}
