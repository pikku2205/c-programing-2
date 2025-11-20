#include<stdio.h>
int main(){
 int roll, math, hindi ,eng;
 float  percent,total;
 char name[40];
printf("enter the name :");
scanf("%s",& name);
printf("enter roll no:");
scanf("%d",&roll);
printf("enter marks of three subject:");
scanf("%d %d %d",& math,&hindi,& eng);
if
    (math<=100 && hindi<=100 && eng<=100)
    {
      total=math+hindi+eng;
  percent=total/300*100;
     printf(" name : %s\n roll : %d \n total%f \n percent%f", name ,roll, total ,percent );
     if
        (percent >=60)
     {

         printf("first div");
     }
     else if
        (percent >=50 &&percent<=60)
     {

         printf("second div");
     }
     else if
        ( percent>=40 && percent<=50)
     {
         printf("third div");
     }
     else

     {
         printf("fail");
     }
    }


}



