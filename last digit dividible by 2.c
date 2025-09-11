#include  <stdio.h>
int main () {
int a,r;
printf("enter the number:");
scanf ( "%d",& a);
r=a%10;
if (r==0)
{
    printf("yes");
}
else
    {
    printf("no");
}
}
