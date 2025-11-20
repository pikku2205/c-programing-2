# include <stdio.h>
int main(){
int n,r,t,u;
printf("enter the number:");
scanf("%d",&n);
u=n;
while (n!=0){
   t=n%10;
 r=r*10+t;
 n=n/10;
}
if (u==r){
  printf("equal");
} else{
printf("not equal");
}

 return 0;
}


