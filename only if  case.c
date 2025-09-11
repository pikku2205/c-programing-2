#include <stdio.h>
int main()
{
    int m;
    printf (" enter :");
    scanf(" %d",& m);
    if ( m>90)
{
     printf(" a");

}
if( m<90 && m> 80)
{
    printf("b");

}
if ( m<80 && m>70)
{
    printf("c");
}
if ( m<70 && m>60)
{
    printf( "d");

}
else
{
    printf("e");
}
}
