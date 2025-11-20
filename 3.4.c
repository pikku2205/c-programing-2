#include<stdio.h>
int main(){
float a,b,c;
printf("enter three length");
scanf("%f%f%f",&a,&b,&c);
if(a==b &&b==c)
{
    printf("equilateral triangle");
}
else if(a==b && b!=c)
{
    printf("isosceles");
}
else
{
    printf("scalene");
}

}
