#include <stdio.h>
int main(){
int a;
for(a=10;a<=40;a=a+1){
if (a%2==0){
break ;
}
printf("%d\n",a);
}
printf("Eop");
}
