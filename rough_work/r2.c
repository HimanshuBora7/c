//calculating distance between two points//
#include<stdio.h>
#include<math.h>
int main(){
double x1,y1;
double x2,y2;
double distance;
printf("enter the value of x1,x2:");
scanf("%lf,%lf",&x1,&x2);
printf("enter the value of y1,y2:");
scanf("%lf,%lf",&y1,&y2);
distance=sqrt(((x2-x1)*(x2-x1))-((y2-y1)*(y2-y1)));
printf("distance%lf",distance);
return 0;


}