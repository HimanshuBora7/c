// wap to find factorial of a number 

#include<stdio.h>
int factorial();

void main(){
    int n;
    int sum = 0;
    printf("enter the number to find factorial of:\n");
    scanf("%d",&n);
    sum = factorial(n);
    printf("%d",sum);
}

int factorial(int n){
   if(n==1){
    return 1;
   }
   else{
    return n * factorial(n-1);
   }

}