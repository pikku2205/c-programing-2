#include <stdio.h>
int main ()
{
    int m;
    printf("enter the number :");
    scanf ("%d",& m);

    if ( m>90)
    {
        printf ("a");

    }
    else if ( m < 90 && m> 80)
    {

        printf ( " b");

    }
    else if (m<80 && m>70)
    {


        printf( " c");

    }
    else if ( m<70 && m>60)
    {
        printf(" d");
    }
    else
    {
        printf ("e");
    }
}





























