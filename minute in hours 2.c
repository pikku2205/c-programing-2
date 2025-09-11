#include<stdio.h>
int main()
{
    int hours, minutes, totalminutes;
    printf("enter minutes :");
    scanf("%f",&totalminutes);
    hours = totalminutes / 60;
    minutes = totalminutes % 60;
    printf(" hours%d minutes %d",hours,minutes);


}
