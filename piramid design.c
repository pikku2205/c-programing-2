/*
    *
   * *
  * * *
 * * * *
* * * * *

*/


#include<stdio.h>
int main ()
{
    int i,j,k,l;
    for(i=0;i<=4;i=i+1){
        for(j=0;j<4-i;j=j+1){
            printf(" ");
        }
        for(k=0;k<=i;k=k+1){
            printf("*");
        }

        printf("\n");
    }
}
