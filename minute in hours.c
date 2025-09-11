#include<stdio.h>
int main()
{
    int a, b, hours;
    printf("Enter minutes: ");
    scanf("%d", &a);

    hours = a / 60;
    b = a % 60;

    printf("Hours: %d, Minutes: %d", hours, b);

}
