#include <stdio.h>
int main()
{
    int a, b,c;
    printf(" enter the lenght:");
    scanf("%d %d %d",&a,&b,&c);

    if(a==b&& b==c)
    {

        printf("equileral");

    }
    else if (a==b || b==c || a==c)
{
    printf(" isosceles");

    }
    else
    {
        printf("scalene");
    }



}
